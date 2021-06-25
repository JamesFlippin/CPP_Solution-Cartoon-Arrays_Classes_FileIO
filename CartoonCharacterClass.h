#ifndef CARTOONCHARACTERCLASS_H
#define CARTOONCHARACTERCLASS_H

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;
class CartoonCharacterClass
{
private:
	int _intCharacterNumber=0;
	int _intCharacterYear = 0;
	int _intCharacterAge = 0;
	int _intCurrentYear = 2020;
	string _strCharacterNameFirst="";
	string _strCharacterNameLast="";

public:
	//Getters Functions
	string getNameFirst();
	string getNameLast();
	string getFullName();

	int getNumber();
	int getYearCreated();
	int getAge();

	//Setter Functions
	void setNameFirst(string strFName);
	void setNameLast(string strLName);

	void setNumber(int intNumber);
	void setYearCreated(int intYearCharacter);
	void setYearCurrent(int intYearCurrent);
	
	//Constructor
	CartoonCharacterClass();
	//Destructor
	~CartoonCharacterClass();
};
#endif // !CARTOONCHARACTERCLASS_H


