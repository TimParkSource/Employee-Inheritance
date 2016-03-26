#include "Employee.h"

/***********************************************************
Name: Timothy Park
Email: timothy_park@elcamino.edu
Assignment #3
Operating System: Windows 7
Complier Used: Visual Studio 2012/13
Date Ran Successfully Last Time: 10/15/14
***********************************************************/

Employee::Employee(string Fname, string Lname) :FirstName(Fname), LastName(Lname)
{
	if (Fname.size() < MIN_NUM_CHARS_NAMES)  // size or length?-----------------------
	{
		cout << "The first name " << Fname << " does not have enough characters.\nWe will set first name to a default value of \"First name not set.\"" << endl;
		FirstName = "First name not set";
	}
	if (Lname.size() < MIN_NUM_CHARS_NAMES)
	{
		cout << "The last name " << Lname << " does not have enough characters.\nWe will set last name to a default value of \"Last name not set.\"" << endl;
		LastName = "Last Name not set";
	}
}