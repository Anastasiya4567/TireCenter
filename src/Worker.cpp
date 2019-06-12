/*
First name: Arkadiusz       Leader: W. Kusmirek
Last name:  Dawid           Project 2
Student ID: 300199          Topic: Tire Center (Warsztat wulkanizacyjny)
*/

#include <iostream>
#include "Worker.hpp"

using namespace std;

Worker::Worker(string name, string sur, string sal)
{
    this->name = name;
    this->surname = sur;
    this->salary = sal;
    cout << "New worker employed!" <<endl;
}

void Worker::showData()
{
    cout << " Name: " <<  name << "  Surname: " << surname << "  Salary: " << salary;
}
