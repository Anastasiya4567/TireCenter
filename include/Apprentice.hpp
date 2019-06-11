/*
First name: Arkadiusz       Leader: W. Kusmirek
Last name:  Dawid           Project 2
Student ID: 300199          Topic: Tire Center (Warsztat wulkanizacyjny)
*/

#ifndef APPRENTICE_HPP
#define APPRENTICE_HPP

class Apprentice
{
    protected:
        std::string name;
        std::string surname;

    public:
        Apprentice (){};
        Apprentice(std::string n, std::string s);
        Apprentice (const Apprentice& obj){};
        virtual void showData();
        friend std::ostream& operator<<(std::ostream& os, Apprentice& a);
        ~Apprentice();
};

#endif
