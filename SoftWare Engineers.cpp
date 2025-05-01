//
//  SoftWare Engineers.cpp
//  Assignment #5 Part B
//
//  Created by Cherelle Mercadel on 4/24/25.
//

#include "SoftWare Engineers.h"

SoftEngineer::SoftEngineer() :Worker()
{
    
}
SoftEngineer::SoftEngineer(string name, double salary) : Worker(name, salary)
{
    
}
void SoftEngineer::setName(string n)
{
    SoftName = n;
}
void SoftEngineer::setSalary(double s)
{
    SoftSalary = s;
}

double SoftEngineer::getSalary()
{
    return SoftSalary;
}

string SoftEngineer::getName()
{
    return SoftName;
}

double SoftEngineer::salaryPerWeek()
{
    int yr = 52;
    double sal;
    
    sal = SoftSalary / yr;
    return sal;
}
