#include "CartoonCharacterClass.h"

string CartoonCharacterClass::getNameFirst()
{
    return _strCharacterNameFirst;
}

string CartoonCharacterClass::getNameLast()
{
    return _strCharacterNameLast;
}

string CartoonCharacterClass::getFullName()
{
    return _strCharacterNameFirst + " " + _strCharacterNameLast;
}

int CartoonCharacterClass::getNumber()
{
    return _intCharacterNumber;
}

int CartoonCharacterClass::getYearCreated()
{
    return _intCharacterYear;
}

int CartoonCharacterClass::getAge()
{
    _intCharacterAge = _intCurrentYear - _intCharacterYear;
    return _intCharacterAge;
}

void CartoonCharacterClass::setNameFirst(string strFName)
{
    _strCharacterNameFirst = strFName;
}

void CartoonCharacterClass::setNameLast(string strLName)
{
    _strCharacterNameLast = strLName;
}

void CartoonCharacterClass::setNumber(int intNumber)
{
    _intCharacterNumber = intNumber;
}

void CartoonCharacterClass::setYearCreated(int intYear)
{
    _intCharacterYear = intYear;
}

void CartoonCharacterClass::setYearCurrent(int intYearCurrent)
{
    _intCurrentYear = intYearCurrent;
}

CartoonCharacterClass::CartoonCharacterClass()
{

}

CartoonCharacterClass::~CartoonCharacterClass()
{

}
