//
//  Doctor.hpp
//  Assignment #5 Part B
//
//  Created by Cherelle Mercadel on 4/24/25.
//

#ifndef Doctor_h
#define Doctor_h

#include "Worker.h"

#include <stdio.h>
#include <iostream>
using namespace std;

class Doctor : public Worker
{
private:
    string DoctName;
    double DoctSalary;
    
public:
    Doctor();
    Doctor(string n, double s);
    
    void setName(string n);
    void setSalary(double s);
    
    double getSalary();
    string getName();
    
    double salaryPerWeek();
};

#endif /* Doctor_hpp */
