//
//  Sales Person.hpp
//  Assignment #5 Part B
//
//  Created by Cherelle Mercadel on 4/24/25.
//

#ifndef Sales_Person_h
#define Sales_Person_h

#include <stdio.h>
#include "Worker.h"

class Sales : public Worker
{
private:
    string SalesName;
    double SalesSalary;
    
public:
    Sales();
    Sales(string n, double s);
    
    void setName(string name);
    void setSalary(double salary);
    
    double getSalary();
    string getName();
    
    double salaryPerWeek();
};

#endif /* Sales_Person_hpp */
