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
Date Ran Successfully Last Time:
***********************************************************/
int maintest();
int main()
{
	maintest();

	bool created = false;
	Manager M;

	<< "**************Main Menu*****************************"
		<< "Enter the menu item of choice and press enter key."
		<<

	if(Menu Choice == 1)  // add data stuff
	{
		// data for manager
		M1 = Manager(...);
		created = true;
	}
	else if (Menuchoice == 2)
	{
		if (created)  // i guess this works
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

	}

	system("pause");
	return 0;
}

int maintest()
{

}

