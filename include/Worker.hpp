/*
First name: Arkadiusz       Leader: W. Kusmirek
Last name:  Dawid           Project 2
Student ID: 300199          Topic: Tire Center (Warsztat wulkanizacyjny)
*/

#ifndef WORKER_HPP
#define WORKER_HPP

#include "Apprentice.hpp"

class Worker: public Apprentice
{
    private:
        std::string salary;

    public:
        Worker(std::string n, std::string s, std::string salary);
        ~Worker(){};
        void showData();
};

#endif
