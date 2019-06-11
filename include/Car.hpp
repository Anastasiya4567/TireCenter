/*
First name: Arkadiusz       Leader: W. Kusmirek
Last name:  Dawid           Project 2
Student ID: 300199          Topic: Tire Center (Warsztat wulkanizacyjny)
*/

#ifndef CAR_HPP
#define CAR_HPP

enum class CarBrand { ACURA = 0, AUDI, BMW, FORD, HONDA, KIA, MERCEDES, OPEL, TOYOTA, VOLKSWAGEN };

class Car
{
    protected:
        CarBrand brand;
        std::string model;
        int year;
    public:
        Car(CarBrand b, std::string m, int y=2019);
        Car(CarBrand b, std::string m);
        ~Car();
	CarBrand getBrand();
	std::string getModel();
	int getYear ();
    void showData();
    friend std::ostream& operator<<(std::ostream& os, Car& c);
};

std::ostream& operator<< (std::ostream& os, CarBrand c);

#endif
