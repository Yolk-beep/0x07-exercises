#pragma once

#include <string>
#include <iostream>

using namespace std;
class Triangle {
public:
    Triangle();
    Triangle(double a, double b, double c);
    void setSides(double a, double b, double c);
    double circumference();
    double area();
    void print();
    int Geta();
    int Getb();
    int Getc();
    void Seta(int a);
    void Setb(int b);
    void Setc(int c);
    bool invariants();

private:
    int a_;
    int b_;
    int c_;
};
