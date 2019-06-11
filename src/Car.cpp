
/*
First name: Arkadiusz       Leader: W. Kusmirek
Last name:  Dawid           Project 2
Student ID: 300199          Topic: Tire Center (Warsztat wulkanizacyjny)
*/

#include <iostream>
#include <string>
#include "Car.hpp"
#include "Workshop.hpp"

using namespace std;

Car::Car(CarBrand b, string m, int y)
{
    string com = "false";	
    if (y<1800 || y>2030) throw com;
    this->brand = b;
    this->model = m;
    this->year = y;
    cout << "New car added!"<<endl;
}

Car::Car(CarBrand b, string m)
{
    this->brand = b;
    this->model = m;
    this->year = 2019;
    cout << "New car added!"<<endl;
}
CarBrand Car::getBrand ()
{
	return this->brand;
}

string Car:: getModel ()
{
	return this->model;
}

int Car:: getYear ()
{
	return this->year;
}	

Car::~Car()
{
    cout << model << " " << year << " deleted!" <<endl;
}

void Car::showData()
{
    cout << "Brand: ";
    switch(brand)
    {
        case CarBrand::ACURA:
            cout << "Acura";
            break;

        case CarBrand::AUDI:
            cout << "Audi";
            break;

        case CarBrand::BMW:
            cout << "BMW";
            break;

        case CarBrand::FORD:
            cout << "Ford";
            break;

        case CarBrand::HONDA:
            cout << "Honda";
            break;

        case CarBrand::KIA:
            cout << "Kia";
            break;

        case CarBrand::MERCEDES:
            cout << "Mercedes";
            break;

        case CarBrand::OPEL:
            cout << "Opel";
            break;

         case CarBrand::TOYOTA:
            cout << "Toyota";
            break;

         case CarBrand::VOLKSWAGEN:
            cout << "Volkswagen";
            break;
    }
    cout << "\tModel: " << model << "\tYear: " << year << endl;
}

ostream& operator << (ostream& os, Car& c)
{
	os << c.brand << " "  << c.model << " " << c.year;
       return os;	
}	

ostream& operator <<(ostream& os, CarBrand c)
{
	switch(c)
	{
	    case CarBrand::ACURA:
			os << "Acura ";
			break;

		case CarBrand::AUDI:
			os << "Audi ";
			break;

		case CarBrand::BMW:
			os << "BMW ";
			break;

        case CarBrand::FORD:
			os << "Ford ";
			break;

		case CarBrand::HONDA:
			os << "Honda ";
			break;

		case CarBrand::KIA:
			os << "Kia ";
			break;

		case CarBrand::MERCEDES:
			os << "Mercedes ";
			break;

        case CarBrand::OPEL:
			os << "Opel ";
			break;

        case CarBrand::TOYOTA:
            os << "Toyota ";
            break;

        case CarBrand::VOLKSWAGEN:
            os << "Volkswagen ";
            break;
	}
    return os;
}
