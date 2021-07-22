// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
#include <chrono>
#include <thread>
#include <algorithm>
#include <iterator>
#include <vector>

class Employee
{
public:
	int nEmpId;
	string sName;
	int nManagerId;

};


int main()
{
	int nNoOfRec = 0;
	int i = 0;
	bool bInit = true;
	int nRecord = 0;

	std::cout << "Enter No of Record   : ";
	std::cin >> nNoOfRec;

	while (nNoOfRec <= 0)
	{
		std::cout << "NA\n";
		cin.clear();
		cin.ignore(10000, '\n');
		std::cin >> nNoOfRec;
	}

	Employee* EmpArr = new Employee[nNoOfRec];

	int nFunction = 0;
	int nStartIndex = 0;
	int nInLoop = 1;

	for (i; i < nNoOfRec; i++)
	{
		std::cout << "Emp Id: ";
		std::cin >> EmpArr[i].nEmpId;
		while (EmpArr[i].nEmpId <= 0)
		{
			std::cout << "NA\n";
			cin.clear();
			cin.ignore(10000, '\n');
			std::cin >> EmpArr[i].nEmpId;
		}
		if (i >= 1)
		{
			nStartIndex = 0;
			for (; nStartIndex < i; )
			{
				if (EmpArr[i].nEmpId == EmpArr[nStartIndex].nEmpId)
				{
					std::cout << "Duplicate Entry not allowed\n";
					cin.clear();
					cin.ignore(10000, '\n');
					std::cin >> EmpArr[i].nEmpId;
				}
				else
					nStartIndex++;
				//std::chrono::milliseconds timespan(100);
				//std::this_thread::sleep_for(timespan);
			}
		}
		std::cout << "Emp Name   : ";
		std::cin >> EmpArr[i].sName;
		std::cout << "Manager Id : ";
		std::cin >> EmpArr[i].nManagerId;
		while (EmpArr[i].nManagerId <= 0)
		{
			std::cout << "NA\n";
			cin.clear();
			cin.ignore(10000, '\n');
			std::cin >> EmpArr[i].nManagerId;
		}
	}

	while (nFunction < 4)
	{
		std::cout << "Enter 1 for Insert and 2 for List or 3 for Search by Manger ID \n\n";
		cin >> nFunction;


		if (nFunction == 1)
		{
			int j = 0;
			nNoOfRec = nNoOfRec++;

			//Create a new array in insert and assign that to an old array and use 
			Employee* EmpArr1 = new Employee[nNoOfRec];
			for (int n = 0; n < i; n++)
				EmpArr1[n] = EmpArr[n];

			nRecord = nNoOfRec-1;

			std::cout << "\nEnter Employee Details ID, Name, Manger ID!\n";
			std::cout << "Emp Id: ";
			std::cin >> EmpArr1[nRecord].nEmpId;
			std::cout << "Emp Name   : ";
			std::cin >> EmpArr1[nRecord].sName;
			std::cout << "Manager Id : ";
			std::cin >> EmpArr1[nRecord].nManagerId;
			while (EmpArr1[nRecord].nManagerId <= 0)
			{
				std::cout << "NA\n";
				cin.clear();
				cin.ignore(10000, '\n');
				std::cin >> EmpArr1[nRecord].nManagerId;
			}
			delete[] EmpArr;
			EmpArr = new Employee[nNoOfRec];
			for (int n=0;n<nNoOfRec;n++)
				EmpArr[i] = EmpArr1[i];
			delete[] EmpArr1;
		}
		if (nFunction == 2)
		{
			std::cout << "\nEmployee List\n";

			for (int i = 0; i < nNoOfRec; i++)
			{
				std::cout << EmpArr[i].nEmpId << "\t" << EmpArr[i].sName << "\t" << EmpArr[i].nManagerId << "\n";
			}
		}
		else if (nFunction == 3)
		{
			std::cout << "\nEnter Manager Id\n";
			bool bFlag = false;
			int nFindManagerId = 0;
			cin >> nFindManagerId;
			for (int i = 0; i < nNoOfRec; i++)
			{
				if (nFindManagerId == EmpArr[i].nManagerId)
				{
					std::cout << EmpArr[i].nEmpId << "\t" << EmpArr[i].sName << "\t" << EmpArr[i].nManagerId << "\n";
					bFlag = true;
				}

			}
			if (bFlag == false)
				std::cout << "\nManager Id not found\n";
		}
		else
		{
			std::cout << "\nNA\n";
			cin.clear();
			cin.ignore(10000, '\n');
		}
	}
	delete[] EmpArr;
	return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file