#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class EmployeeWageComputation{
    public:
    void employeeWageCalculation(){
        const int IS_PART_TIME = 1;
        const int IS_FULL_TIME = 2;
        int EMPLOYEE_WAGE_PER_HOUR = 20;
        int FULL_TIME = 8;
        int PART_TIME = 4;
        int empWage = 0;
        const int TOTAL_WORKING_DAYS = 20;
        const int TOTAL_WORKING_HRS = 100;
        int workDays = 1;
        int totalWage = 0;
        int workingHrs = 0;
            while (workDays <= TOTAL_WORKING_DAYS && workingHrs <= TOTAL_WORKING_HRS){
                srand(time(0));
                int empCheck = rand() % 3;
                    switch(empCheck) {
                        case IS_PART_TIME:
                            cout<<"Employee is Part time Present"<<endl;
                            empWage=PART_TIME * EMPLOYEE_WAGE_PER_HOUR;
                            cout<<"Employee wage is: "<<empWage<<endl;
                            workingHrs += PART_TIME;
                            break;
                        case IS_FULL_TIME:
                            cout<<"Employee is Full time Present"<<endl;
                            empWage = FULL_TIME * EMPLOYEE_WAGE_PER_HOUR;
                            cout<<"Employee wage is: " <<empWage<<endl;
                            workingHrs += FULL_TIME;
                            break;
                        default:
                            cout<<"Employee is Absent"<<endl;
                            cout<<"Employee wage is: " <<empWage<<endl;
                    }
                totalWage+=empWage;
                cout<<"Employee wage for Day #"<<workDays<< " =>  "<<empWage<<endl;
                workDays++;
            }
        cout<<"Total Monthly Employee wage: "<<totalWage<<endl;
        cout<<"Total Monthly Employee working hours: "<<workingHrs<<endl;
    }
};

int main(){
    cout<< "\nWelcome to Employee Wage Computation\n"<<endl;
    EmployeeWageComputation emp;
    emp.employeeWageCalculation();
}