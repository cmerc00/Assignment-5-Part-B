//
//  SoftWare Engineers.hpp
//  Assignment #5 Part B
//
//  Created by Cherelle Mercadel on 4/30/25.
//

#ifndef SoftWare_Engineers_h
#define SoftWare_Engineers_h

#include <stdio.h>
#include "Worker.h"

class SoftEngineer : public Worker
{
private:
    string SoftName;
    double SoftSalary;
    
public:
    SoftEngineer();
    SoftEngineer(string name, double salary);
    
    void setName(string n);
    void setSalary(double s);
    double getSalary();
    string getName();
    
    double salaryPerWeek();
};
#endif /* SoftWare_Engineers_hpp */
