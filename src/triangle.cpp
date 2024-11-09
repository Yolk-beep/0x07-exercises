#include "triangle.h"
#include <iostream>
#include <cmath>

using namespace std;
Triangle::Triangle()
{
   a_ = 3;
   b_ = 4;
   c_ = 5;
}
Triangle::Triangle(double a, double b, double c)
{
   a_ = a;
   b_ = b;
   c_ = c;
}
void Triangle::setSides(double a, double b, double c)
{
   a_ = a;
   b_ = b;
   c_ = c;
}

double Triangle::circumference()
{
   return a_ + b_ + c_;
}
double Triangle::area()
{
   double s = (a_ + b_ + c_) / 2;
   return sqrt(s * (s - a_) + s * (s - b_) + s * (s - c_));
}
void Triangle::print()
{
   cout << "A triangle with the given sides: " << a_ << "," << b_ << "," << c_ << " has a circumference of: " << circumference() << "and an area of: " << area() << endl;
}

int Triangle::Geta()
{
   return a_;
}
int Triangle::Getb()
{
   return b_;
}
int Triangle::Getc()
{
   return c_;
}
void Triangle::Seta(int a)
{
   a_ = a;
}
void Triangle::Setb(int b)
{
   b_ = b;
}
void Triangle::Setc(int c)
{
   c_ = c;
}
bool Triangle::invariants()
{
   if (a_ + b_ > c_ || b_ + c_ > a_ || c_ + a_ > b_)
      return true;
   return false;
}
