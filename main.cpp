#include"CartoonCharacterClass.h"
//**************************************************
//Programmer: Demonstration of Using Arrays with a 
//            Class object and data read from a text files
//Course: ITSE 1307.xxxx
//Lab: CPP_Arrays_Classes_FileIO
//**************************************************
/*
	Demonstration of Using Arrays with a
	Class object and data read from a text files
*/
//**************************************************

//Pre-Compiler directives
#include <conio.h>
#include "CartoonCharacterClass.h"

using namespace std;

int main()
{
	//Console Settings
	system("color 1F");
	system("title Demo - Cartoon Character Age Calculator");

	//Initialize - Setup Variables, etc.
	const string strFILE_NAME = "Cartoon_Revised.txt";
	const int intMAX_CHARACTERS = 6;
	int intCurrentCharacter = 0;
	int intYearCurrent = 0;
	int intCharacterYear = 0;
	string strCharacterNameFirst = "";
	string strCharacterNameLast = "";

	char chChoice = ' ';

	CartoonCharacterClass clsMyCharacters[intMAX_CHARACTERS];

	ifstream in;
	in.open(strFILE_NAME);
	if (!in.fail())
	{
		while (!in.eof())
		{
			if (in >> strCharacterNameFirst >> strCharacterNameLast>> intCharacterYear)
			{
				clsMyCharacters[intCurrentCharacter].setNameFirst(strCharacterNameFirst);
				clsMyCharacters[intCurrentCharacter].setNameLast(strCharacterNameLast);
				clsMyCharacters[intCurrentCharacter].setYearCreated(intCharacterYear);
				clsMyCharacters[intCurrentCharacter].setNumber(intCurrentCharacter);
				intCurrentCharacter++;
			}
			else
			{
				if (intCurrentCharacter<1)	//We didn't read in at least one record
				{
					cout << "\n\t\t\tCartoon Character Age" << endl;
					cout << "\t\t\t" << setw(27) << setfill('-') << "" << endl << endl;
					cout << setfill(' ') << "";
					cout << "\n\n\t*** Failed to read any contents of the file: " + strFILE_NAME + " ***" << endl << endl;
					system("pause");
					return 0;
				}
			}
		}
		in.close();
		do
		{
			do
			{
				system("cls");
				cout << "\n\t\t\tCartoon Character Age" << endl;
				cout << "\t\t\t" << setw(27) << setfill('-') << "" << endl << endl;
				cout << setfill(' ') << "";
				cout << "Please enter a year (must be a positive number): ";
				cin >> intYearCurrent;
				if (intYearCurrent < 1)
				{
					cout << "\n\t*** Must be greater than Zero ***" << endl << endl;
					system("pause");
				}
			} while (intYearCurrent < 1);

			cout << endl;
			cout << left << setw(5) << "#" << setw(20) << "Cartoon Character" << setw(10) << "Age" << endl;
			cout << setw(27) << setfill('-') << "" << endl << endl;
			cout << setfill(' ') << "";

			for (int intX = 0; intX < intMAX_CHARACTERS; intX++)
			{
				clsMyCharacters[intX].setYearCurrent(intYearCurrent);
				cout << setprecision(0) << left << fixed;
				cout << setw(5) << (clsMyCharacters[intX].getNumber() + 1) << setw(20) << clsMyCharacters[intX].getFullName() << setw(10) << clsMyCharacters[intX].getAge() << endl;
			}
			cout << "\n\nWould you like to enter another Year? (y/Y) ";
			chChoice = _getche();
		} while (chChoice == 'y' || chChoice == 'Y');
		cout << "\n\n\n\t*** Goodbye ***" << endl << endl << endl;
	}
	else
	{
		cout << "\n\t\t\tCartoon Character Age" << endl;
		cout << "\t\t\t" << setw(27) << setfill('-') << "" << endl << endl;
		cout << setfill(' ') << "";
		cout << "\n\n\t*** File failed to open file: " + strFILE_NAME + " ***" << endl << endl;
	}
	system("pause");
	return 0;
}