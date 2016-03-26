#pragma once
#ifndef Employee_H
#define Employee_H
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <stdexcept>
#include <iomanip>
using namespace std;

/***********************************************************
Name: Timothy Park
Email: timothy_park@elcamino.edu
Assignment #3
Operating System: Windows 7
Complier Used: Visual Studio 2012/13
Date Ran Successfully Last Time: 10/15/14
***********************************************************/

class Employee
{
protected:
	string FirstName;
	string LastName;
	static const int MIN_NUM_CHARS_NAMES = 2;
public:
	Employee(string Fname = "First name not set", string Lname = "Last Name not set");
	virtual string getFirstName() const = 0;
	virtual string getLastName() const = 0;
	virtual string getFullName() const = 0;
	virtual string toString() const = 0;
	virtual void setFirstName(string Fname) = 0;
	virtual void setLastName(string Lname) = 0;
	//virtual~Employee(); do we need this?-----------------------------------------------------------------------------
};
#endif