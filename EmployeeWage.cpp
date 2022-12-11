#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    
    int IS_FULL_TIME = 1;
    int IS_PART_TIME = 1;
    int EMPLOYEE_WAGE_PER_HOUR = 20;
    int empHrs = 0;
    int empWage = 0;
    int empCheck;

    cout<< "\nWelcome to Employee Wage Computation\n"<<endl;

    srand(time(0));
    empCheck = rand() % 2;
    if(empCheck == IS_FULL_TIME){
        cout<< "Employee is full time present" <<endl;
        empHrs = 8;
    }
    else if(empCheck == IS_PART_TIME){
        cout<< "Employee is part time present" <<endl;
        empHrs = 4;
    }else{
        cout<< "Employee is Absent" <<endl;
        empHrs = 0;
    }

    empWage = empHrs * EMPLOYEE_WAGE_PER_HOUR;
    cout << "Employee Wage per day is = " << empWage << endl;

     return 0;   
}