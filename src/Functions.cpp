/*
First name: Arkadiusz       Leader: W. Kusmirek
Last name:  Dawid           Project 2
Student ID: 300199          Topic: Tire Center (Warsztat wulkanizacyjny)
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include "Functions.hpp"

using namespace std;

char showMenuAndGetChoice()
{
    string userChoice;
    cout << "\n# # # # M E N U # # # # #" << endl;
    cout << "1. Add new apprentice" << endl;
    cout << "2. Add new worker" << endl;
    cout << "3. Add new car" << endl;
    cout << "4. Show list of apprentices" << endl;
    cout << "5. Show list of workers" << endl;
    cout << "6. Show list of cars" << endl;
    cout << "7. Exit" << endl;
    cout << "Waiting for your command: ";
    cin >> userChoice;
    try
    {
        ifInvalidC (userChoice);
    }
    catch (const char* invalid)
    {
        cin.clear();
        cin.ignore(100, '\n');
        return 0;
    }

    const char* charChoice=userChoice.c_str(); //conversion from string to char for future convenience
    return *charChoice;
}

void ifInvalidC (string choice)
{
  if (choice< "1" || choice>"7" || choice.length()!=1)
    throw "invCom";
}

void exitProgram()
{
    cout << "Thank You for using the VulcanShop!" << endl;
    cout << "See You next time..." << endl;
    exit(0);
}

