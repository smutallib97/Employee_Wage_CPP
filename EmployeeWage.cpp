#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){

    cout<< "\nWelcome to Employee Wage Computation\n"<<endl;

    int IS_PRESENT = 1;
    int empCheck;
    srand(time(0));
    empCheck = rand() % 2;
    if (empCheck == 1)
        cout << "Employee is Present" << endl;
    else
        cout << "Employee is Absent" << endl;
}