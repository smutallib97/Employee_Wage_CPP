#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    
    const int RATE_PER_HOUR = 20;
    int empHrs;
    int empWage;
    int IS_PRESENT = 1;
    int empCheck;

    cout<< "\nWelcome to Employee Wage Computation\n"<<endl;

    srand(time(0));
    empCheck = rand() % 2;
    if (empCheck == 1){
        cout << "Employee is Present" << endl;
        empHrs = 8;
    }
    else{
        cout << "Employee is Absent" << endl;
        empHrs = 0;
    }
    empWage = empHrs * RATE_PER_HOUR;
    cout << "Employee Wage Per Day = " << empWage << endl;

     return 0;   
}