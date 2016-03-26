#include "Manager.h"

/***********************************************************
Name: Timothy Park
Email: timothy_park@elcamino.edu
Assignment #3
Operating System: Windows 7
Complier Used: Visual Studio 2012/13
Date Ran Successfully Last Time: 10/15/14
***********************************************************/

Manager::Manager(string Fname, string Lname, double sal, string BTitle) :Employee(Fname, Lname), salary(sal), TitleOfBoss(BTitle) // how does this work?---------
{
	if (BTitle.size() < MIN_NUM_CHARS_NAMES)  // size or length?-----------------------
	{
		cout << "Title of boss cannot be less than 2. The default value is used." << endl; 
		TitleOfBoss = "Boss's Title not set";
	}
	if (sal < 0)
	{
		cout << "The salary cannot be negative.\nWe will set salary to a default value of 0" <<endl;
		salary = 0;
	}
}
string Manager::getBossTitle() const
{
	return TitleOfBoss;
}
string Manager::getFirstName() const
{
	return FirstName;
}
string Manager::getFullName() const 
{
	return FirstName + ' ' + LastName;
}
string Manager::getLastName() const
{
	return LastName;
}
double Manager::getSalary() const
{
	return salary;
}
void Manager::setBossTitle(string Title)
{
	if (Title.size() < MIN_NUM_CHARS_NAMES)  // size or length?-----------------------
	{
		cout << "No change" << endl;
	}
	else
	{
		TitleOfBoss = Title;
	}

}
void Manager::setFirstName(string Fname)
{
	if (Fname.size() < MIN_NUM_CHARS_NAMES)  // size or length?-----------------------
	{
		cout << "No change" << endl;
	}
	else
	{
		FirstName = Fname;
	}

}
void Manager::setLastName(string Lname)
{
	if (Lname.size() < MIN_NUM_CHARS_NAMES)
	{
		cout << "No change" << endl;
	}
	else
	{
		LastName = Lname;
	}
}
void Manager::setSalary(double sal)
{
	if (sal < 0)
	{
		cout << "No change" << endl;
	}
	else
	{
		salary = sal;
	}
}
string Manager::toString() const
{
	ostringstream os;
	os << fixed << showpoint << setprecision(2);
	os << "Manager's Data:\n" << "Name: " << getFullName() << endl << "Boss's Title: " << TitleOfBoss << endl << "Salary: $" << salary << endl << "--------------------------------------" << endl;
	return os.str();
}