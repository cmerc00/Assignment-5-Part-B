//
//  Doctor.cpp
//  Assignment #5 Part B
//
//  Created by Cherelle Mercadel on 4/30/25.
//

#include "Doctor.h"

Doctor::Doctor() : Worker()
{
}
Doctor::Doctor(string n, double s) : Worker(n, s)
{
    
}

void Doctor::setName(string n)
{
    DoctName = n;
}
void Doctor::setSalary(double s)
{
    DoctSalary = s;
}

double Doctor::getSalary()
{
    return DoctSalary;
}

string Doctor::getName()
{
    return DoctName;
}

double Doctor::salaryPerWeek()
{
    int yr = 52;
    double sal;
    
    sal = DoctSalary / yr;
    return sal;
}
