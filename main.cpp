#include <iostream>
#include <iomanip>
#include <vector>

using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;
using std::vector;

#include "Employee.h"
#include "Salaried.h"
#include "Hourly.h"
#include "Commission.h"
#include "Baseplus.h"

void virtualViaPointer( const Employee * const ); 
void virtualViaReference( const Employee & ); 

int main()
{

	cout << fixed << setprecision( 2 );


	SalariedEmployee salariedEmployee("John", "Smith", "111-11-1111", 800 );
	HourlyEmployee hourlyEmployee("Karen", "Price", "222-22-2222", 16.75, 40 );
	CommissionEmployee commissionEmployee("Sue", "Jones", "333-33-3333", 10000, .06 );
	BasePlusCommissionEmployee basePlusCommissionEmployee("Bob", "Lewis", "444-44-4444", 5000, .04, 300 );

	cout << "Employees processed individually using static binding: \n\n";


	salariedEmployee.print();
	cout << "earned $" << salariedEmployee.earnings() << "\n";
	hourlyEmployee.print();
	cout << "earned $" << hourlyEmployee.earnings() << "\n";
	commissionEmployee.print();
	cout << "earned $" << commissionEmployee.earnings() << "\n";
	basePlusCommissionEmployee.print();
	cout << "earned $" << basePlusCommissionEmployee.earnings() << "\n\n";


	vector < Employee * > employees( 4 ); 
 
	employees[ 0 ] = &salariedEmployee; 
	employees[ 1 ] = &hourlyEmployee; 
	employees[ 2 ] = &commissionEmployee; 
	employees[ 3 ] = &basePlusCommissionEmployee;

	cout << "Employees processed polymorphically via dynamic binding:\n\n";

	cout << "Virtual function calls made off base-class pointers:\n\n";

	for ( size_t i = 0; i < employees.size(); i++ )
	virtualViaPointer( employees[ i ] ); 

	cout << "\nVirtual function calls made off base-class references:\n\n";

	for ( size_t i = 0; i < employees.size(); i++ ) 
	virtualViaReference( *employees[ i ] );

	return 0;
} 


void virtualViaPointer( const Employee * const baseClassPtr ) 
{ 
	baseClassPtr->print(); 
	cout << "earned $" << baseClassPtr->earnings() << "\n";
} 

void virtualViaReference( const Employee &baseClassRef ) 
{
	baseClassRef.print();
	cout << "earned $" << baseClassRef.earnings() << "\n";
}
