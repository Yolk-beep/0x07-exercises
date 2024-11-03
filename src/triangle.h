#include <string>

using namespace std;
class Triangle
{
public:
    int a;
    int b;
    int c;
    Triangle();
    Triangle(double a, double b, double c);
    void setSides(double a, double b, double c);
    double circumference();
    double area();
    void print();
    int Geta;
    int Getb;
    int Getc;
    int Seta;
    int Setb;
    int Setc;
}