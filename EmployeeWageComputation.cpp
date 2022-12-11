#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    const int IS_PART_TIME = 1;
    const int IS_FULL_TIME = 2;
    const int EMPLOYEE_WAGE_PER_HOUR = 20;
    int FULL_TIME = 8;
    int PART_TIME = 4;
    int empHrs = 0;
    int empWage = 0;

    cout<< "\nWelcome to Employee Wage Computation\n"<<endl;

    srand(time(0));
    int empCheck = rand() % 3;
        switch(empCheck) {
            case IS_PART_TIME:
                cout<<"Employee is Part time Present"<<endl;
                empWage=PART_TIME * EMPLOYEE_WAGE_PER_HOUR;
                cout<<"Employee wage is: "<<empWage<<endl;
                break;
            case IS_FULL_TIME:
                cout<<"Employee is Full time Present"<<endl;
                empWage = FULL_TIME * EMPLOYEE_WAGE_PER_HOUR;
                cout<<"Employee wage is: " <<empWage<<endl;
                break;
            default:
                cout<<"Employee is Absent"<<endl;
                cout<<"Employee wage is: " <<empWage<<endl;
        }
        return empWage;
}