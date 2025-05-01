//
//  Lawyer.cpp
//  Assignment #5 Part B
//
//  Created by Cherelle Mercadel on 4/24/25.
//

#include "Lawyer.h"



Lawyer::Lawyer() : Worker()
{
}
Lawyer::Lawyer(string name, double salary) : Worker(name, salary)
{
}

void Lawyer::setName(string n)
{
    LawyerName = n;
}

void Lawyer::setSalary(double s)
{
    LawyerSalary = s;
}

double Lawyer::getSalary()
{
    return LawyerSalary;
}

string Lawyer::getName()
{
    return LawyerName;
}

double Lawyer::salaryPerWeek()
{
    int yr = 52;
    double sal;
    
    sal = LawyerSalary / yr;
    return sal;
}
