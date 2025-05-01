//
//  Lawyer.hpp
//  Assignment #5 Part B
//
//  Created by Cherelle Mercadel on 4/24/25.
//

#ifndef Lawyer_h
#define Lawyer_h

#include <iostream>
#include <stdio.h>
#include "Worker.h"

using namespace std;

class Lawyer : public Worker
{
private:
    string LawyerName;
    double LawyerSalary;
public:
    Lawyer();
    Lawyer(string name, double salary);
  //  ~Lawyer();
    
    void setName(string name);
    void setSalary(double salary);

    double getSalary();
    string getName();

    double salaryPerWeek();

};
#endif /* Lawyer_hpp */
