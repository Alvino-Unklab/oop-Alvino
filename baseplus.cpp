#include <iostream>
using std::cout;

#include "Baseplus.h"

BasePlusCommissionEmployee::BasePlusCommissionEmployee(
const string &first, const string &last, const string &ssn,
double sales, double rate, double salary )
: CommissionEmployee( first, last, ssn, sales, rate )
{
	setBaseSalary( salary );
}

void BasePlusCommissionEmployee::setBaseSalary( double salary )
{
	baseSalary = ( ( salary < 0.0 ) ? 0.0 : salary );
} 

double BasePlusCommissionEmployee::getBaseSalary() const
{
	return baseSalary;
}

double BasePlusCommissionEmployee::earnings() const
{
	return getBaseSalary() + CommissionEmployee::earnings();
}

void BasePlusCommissionEmployee::print() const
{
	cout << "\nbase-salaried commision employee : ";
	Employee::print(); 
	cout << "\ngross sales: " << getGrossSales() << "; commission rate: " << getCommissionRate()<< "; base salary: " << getBaseSalary() <<  endl;
} 
