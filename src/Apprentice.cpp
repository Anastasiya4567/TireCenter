/*
First name: Arkadiusz       Leader: W. Kusmirek
Last name:  Dawid           Project 2
Student ID: 300199          Topic: Tire Center (Warsztat wulkanizacyjny)
*/

#include <iostream>
#include "Apprentice.hpp"

using namespace std;

Apprentice::Apprentice(string n, string s)
{
    this->name = n;
    this->surname = s;
    cout << "New apprentice was recruited!" <<endl;
}

Apprentice::~Apprentice()
{
    cout << name <<" was given a sack." <<endl;
}

void Apprentice::showData()
{
    cout <<"Name: "<<name << "\t" << "Surname: " <<surname << endl;
}

ostream& operator<<(ostream& os, Apprentice& a)
{
    os << "\tname: " << a.name << "\tsurname: " << a.surname;
    return os;
}
