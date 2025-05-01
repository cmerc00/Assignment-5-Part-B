//
//  Sales Person.cpp
//  Assignment #5 Part B
//
//  Created by Cherelle Mercadel on 4/24/25.
//

#include "Sales Person.h"
Sales::Sales() : Worker()
{
    
}
Sales::Sales(string n, double s) : Worker( n, s)
{
    
}
void Sales::setName(string n)
{
    SalesName = n;
}
void Sales::setSalary(double s)
{
    SalesSalary = s;
}

double Sales::getSalary()
{
    return SalesSalary;
}
string Sales::getName()
{
    return SalesName;
}

double Sales::salaryPerWeek()
{
    int yr = 52;
    double sal;
    
    sal = SalesSalary / yr;
    return sal;
}
