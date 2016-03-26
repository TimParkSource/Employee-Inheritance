#include <iomanip>
#include <ctime>
#include <cstdlib>
#include "Employee.h"
#include "Manager.h"
using namespace std;


/***********************************************************
Name: Timothy Park
Email: timothy_park@elcamino.edu
Assignment #3
Operating System: Windows 7
Complier Used: Visual Studio 2012/13
Date Ran Successfully Last Time: 10/15/14
***********************************************************/
int maintest();
int main()
{
	maintest();

	bool done = false;
	bool created = false;
	Manager M;

	while (!done)
	{
		cout << "\n**************Main Menu*****************************\n"
			<< "Enter the menu item of choice and press enter key.\n"
			<< "1. Create Manager instance from keyboard:\n"
			<< "2. Print Manager to Console.\n"
			<< "3. Change Manager's last name.\n"
			<< "4. Change Manager's Salary.\n"
			<< "5. Change Manager's Boss's Title.\n"
			<< "6. Print only Manager's name and Salary to console.\n"
			<< "7. Print only Manager's boss's title to console.\n"
			<< "8. Exit" << endl;
		int Menuchoice;
		cin >> Menuchoice;

		if (Menuchoice == 8){
			done = true;
		}
		else if(Menuchoice == 1){  // add data stuff
			// data for manager
			cout << "Enter first name of Manager: ";
			string Fname;
			cin >> Fname;
			cout << "Enter last name of Manager: ";
			string Lname;
			cin >> Lname;
			cout <<"Enter title of Manager's Boss: ";
			string BTitle;
			cin >> BTitle;
			cout << "Enter Manager's salary [xx.yy] ";
			double sal;
			cin >> sal;
			M = Manager(Fname, Lname, sal, BTitle);
			created = true;
		}
		else if (Menuchoice == 2){
			if (created)  
			{
				cout << M.toString();
			}
			else
			{
				cout << "Please create a Manager instance using option 1 before using this option.";
			}
		}
		else if (Menuchoice == 3)
		{
			if (created) 
			{
				cout << "Enter Manager's new last name: ";
				string Lname;
				cin >> Lname;
				M.setLastName(Lname);
			}
			else
			{
				cout << "Please create a Manager instance using option 1 before using this option.";
			}
		}
		else if (Menuchoice == 4)
		{
			if (created)  
			{
				cout << "Type manager's new salary and press enter key: ";
				double sal;
				cin >> sal;
				M.setSalary(sal);
			}
			else
			{
				cout << "Please create a Manager instance using option 1 before using this option.";
			}
		}
		else if (Menuchoice == 5)
		{
			if (created)  
			{
				cout << "Type manager's boss's new title and press enter key: ";
				string title;
				cin >> title;
				M.setBossTitle(title);
			}
			else
			{
				cout << "Please create a Manager instance using option 1 before using this option.";
			}
		}
		else if (Menuchoice == 6)
		{
			if (created)  
			{
				cout << fixed << showpoint << setprecision(2)
					 << "Manager's Data:\n" << "Name: " << M.getFullName() << endl << "Salary: $" << M.getSalary() << endl << "--------------------------------------" << endl;
			}
			else
			{
				cout << "Please create a Manager instance using option 1 before using this option.";
			}
		}
		else if (Menuchoice == 7)
		{
			if (created)  
			{
				cout << fixed << showpoint << setprecision(2)
					 << "Manager's Data:\n" << "Boss's Title: " << M.getBossTitle() << endl << "--------------------------------------" << endl;
			}
			else
			{
				cout << "Please create a Manager instance using option 1 before using this option.";
			}
		}
		else
		{
			cout << "The menu choice " << Menuchoice << " is not yet implemented.\n";
		}
	}

	system("pause");
	return 0;
}

int maintest()
{
	Manager M;
	M = Manager("John", "Doe", 500.00, "Director");
	cout << M.toString();
	M.setBossTitle("A");
	M.setFirstName("B");
	M.setLastName("C");
	M.setSalary(-200);
	cout << M.toString();
	M = Manager("A", "B", -200, "C");
	cout << M.toString();
	return 0;
}


