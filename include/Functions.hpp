/*
First name: Arkadiusz       Leader: W. Kusmirek
Last name:  Dawid           Project 2
Student ID: 300199          Topic: Tire Center (Warsztat wulkanizacyjny)
*/

#ifndef FUNCTIONS_HPP
#define FUNCTIONS_HPP

char showMenuAndGetChoice();
void exitProgram();
void ifInvalidC(std::string);

template <typename T> std::string salaryToString(T salary)
{
    std::string salaryAsText = std::to_string(salary);
    salaryAsText += " PLN";
    return salaryAsText;
}

#endif

