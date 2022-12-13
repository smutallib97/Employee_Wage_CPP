#include<iostream>
#include<cstdlib>
#include<ctime>
#include<fstream>
using namespace std;

int main(){
    const int IS_PART_TIME = 1;
    const int IS_FULL_TIME = 2;
    const int EMPLOYEE_WAGE_PER_HOUR = 20;
    const int FULL_TIME = 8;
    const int PART_TIME = 4;
    int empWage = 0;
    const int TOTAL_WORKING_DAYS = 20;
    const int TOTAL_WORKING_HRS = 100;
    int workDays = 1;
    int totalWage = 0;
    int workingHrs = 0;

    cout<< "\nWelcome to Employee Wage Computation\n"<<endl;
    fstream fileStream;
	fileStream.open( "EmployeeWage.csv", ios::out );
	fileStream << "Day" << "," << "Dailywage" << endl;
    while (workDays <= TOTAL_WORKING_DAYS && workingHrs <= TOTAL_WORKING_HRS){
        srand(time(0));
        int empCheck = rand() % 3;
            switch(empCheck) {
                case IS_PART_TIME:
                    cout<<"Employee is Part time Present"<<endl;
                    empWage=PART_TIME * EMPLOYEE_WAGE_PER_HOUR;
                    cout<<"Employee wage is: "<<empWage<<endl;
                    workingHrs += PART_TIME;
                    fileStream<<workDays<<" , "<<empWage<<endl;
                    break;
                case IS_FULL_TIME:
                    cout<<"Employee is Full time Present"<<endl;
                    empWage = FULL_TIME * EMPLOYEE_WAGE_PER_HOUR;
                    cout<<"Employee wage is: " <<empWage<<endl;
                    workingHrs += FULL_TIME;
                    fileStream<<workDays<<" , "<<empWage<<endl;
                    break;
                default:
                    cout<<"Employee is Absent"<<endl;
                    cout<<"Employee wage is: " <<empWage<<endl;
                    fileStream<<workDays<<" , "<<empWage<<endl;
            }
            totalWage+=empWage;
            cout<<"Employee wage for Day #"<<workDays<< " =>  "<<empWage<<endl;
            //fileStream<<workDays<<empWage<<endl;
            workDays++;
    }
    //fileStream.close();
    cout<<"Total Monthly Employee wage: "<<totalWage<<endl;
    cout<<"Total Monthly Employee working hours: "<<workingHrs<<endl;
    fileStream<<"Total Monthly Employee wage: "<<totalWage<<"="<<endl;
    fileStream<<"Total Monthly Employee wage: "<<workingHrs<<"="<<endl;
    fileStream.close();
    fstream fin;
	string data;
	    cout<<"\nCSV file has been successfully created..!!";
        cout<<"\n\nDisplaying the content of CSV file=>\n\n";

	    fin.open( "EmployeeWage.csv", ios::in );
		 while( getline (fin, data) ) {
            cout << data << endl;
                }

	return 0;
}