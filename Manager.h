#pragma once
#ifndef MANAGER_H
#define MANAGER_H
#include "Employee.h"

/***********************************************************
Name: Timothy Park
Email: timothy_park@elcamino.edu
Assignment #3
Operating System: Windows 7
Complier Used: Visual Studio 2012/13
Date Ran Successfully Last Time: 10/15/14
***********************************************************/

class Manager : public Employee
{
protected:
	double salary;
	string TitleOfBoss;
public:
	Manager(string Fname = "First Name not set", string Lname = "Last name not set", double sal = 0.0, string BTitle = "Boss's Title not set");
	virtual string getFirstName() const;
	virtual string getLastName() const;
	virtual string getFullName() const;
	virtual string toString() const;
	virtual void setFirstName(string Fname);
	virtual void setLastName(string Lname);
	virtual double getSalary() const;
	virtual string getBossTitle() const;
	virtual void setSalary(double sal);
	virtual void setBossTitle(string Title);
	//virtual~Manager(); do we need this?-----------------------------------------------------------------------------
};
#endif