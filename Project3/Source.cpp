#include <iostream>
 using namespace std;
int main()
{
	// Total_Salary,Net_Salary, and Tax are variables 
	double Total_Salary;
	double Net_Salary;
	double Tax;
	cout << "Please enter your income" << endl;
	cin >> Total_Salary;

	if (Total_Salary <= 2500)
	{
		Tax = Total_Salary * 0.05;
		Net_Salary = Total_Salary - Tax;
	}
	else 
	{
		Tax = Total_Salary * 0.07;
		Net_Salary = Total_Salary - Tax;
	}

	cout << "your Net Salary after tax is  $" << Net_Salary << endl;
}