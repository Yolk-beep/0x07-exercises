#include "test_util.h"
#include "triangle.cpp"
#include "triangle.h"
#include "test_util.cpp"
#include <iostream>
using namespace std;

int main()
{

  Triangle t1 = Triangle();
  t1.setSides(3, 4, 5);

  TestUtil getters = TestUtil();
  bool result = getters.test(3, t1.Geta());
  cout << "The result of Geta test 1 is : " << result << endl;
  bool result2 = getters.test(4, t1.Getb());
  cout << "The result of Getb test 2 is : " << result2 << endl;
  bool result3 = getters.test(5, t1.Getc());
  cout << "The result of Getc test 3 is : " << result3 << endl;
  TestUtil invariants = TestUtil();
  Triangle t_invariants = Triangle();
  t_invariants.setSides(2, 4, 6);
  t_invariants.Seta(0);
  bool resultsolobolo = invariants.test(0, t1.Geta());
  cout << "The solo bolo a test is: " << resultsolobolo << endl;
  t_invariants.Seta(3);
  bool result4 = invariants.test(3, t1.Geta());
  cout << "The result of area test 4 is : " << result4 << endl;

  Triangle t_circumference = Triangle();
  t_circumference.setSides(4, 4, 4);
  TestUtil circumference = TestUtil();
  bool result5 = circumference.test(12, t_circumference.circumference());
  cout << "The result of area test 5 is : " << result5 << endl;

  Triangle t_area = Triangle(3, 4, 5);
  TestUtil area = TestUtil();
  bool result6 = area.test(6, t_area.area());
  cout << "The result of area test 6 is : " << result6 << endl;

  return 0;
}
