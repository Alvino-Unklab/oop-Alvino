#include <iostream>

using namespace std;

class Employee {
	
	private:
		int employeeNum;
		float employeeComp;
	public:
		void addEmployeeData();
		void displayEmployee();
};

void Employee::addEmployeeData(){
	cout << "Enter Employee Number : ";
	cin >> employeeNum;
	cout << "Enter Employee Compensation : ";
	cin >> employeeComp;	
};

void Employee::displayEmployee(){
	cout <<"==========================" << endl;
	cout <<"Employee Number : " << employeeNum << endl;
	cout <<"Employee Compensation is  " << employeeComp << endl;
	
};

int main(){
	Employee num1, num2, num3;
	cout << "=====Enter Employee 1 Data======" << endl;
	num1.addEmployeeData();
	cout << "=====Enter Employee 2 Data======" << endl;
	num2.addEmployeeData();
	cout << "=====Enter Employee 3 Data======" << endl;
	num3.addEmployeeData();
	
	num1.displayEmployee();
	num2.displayEmployee();
	num3.displayEmployee();
}
