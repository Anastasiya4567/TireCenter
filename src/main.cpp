/*
First name: Arkadiusz       Leader: W. Kusmirek
Last name:  Dawid           Project 2
Student ID: 300199          Topic: Tire Center (Warsztat wulkanizacyjny)
*/

#include <iostream>
#include <string>
#include "Worker.hpp"
#include "Workshop.hpp"
#include "Car.hpp"
#include "Functions.hpp"
#include "Apprentice.hpp"

using namespace std;

int main()
{
    int carYear, numOfBrand, workerSalary;
    string carModel, workerName, workerSurname, apprenticeName, apprenticeSurname;
    Workshop<Worker*> workers;
    Worker* newWorker;
    Workshop<Car*> cars;
    Workshop<Apprentice*> apprentices;
    Car* newCar;
    Apprentice* newApprentice;
    cout << "Welcome to the VolcanShop" << endl;
    char userChoice = showMenuAndGetChoice();
    while(userChoice != '7')
    {
      switch(userChoice)
      {
        case '1':

            cout << "Type in a name for the new apprentice: ";
            cin >> apprenticeName;
            cout << "Type in a surname for the new apprentice: ";
            cin >> apprenticeSurname;
            newApprentice = new Apprentice(apprenticeName, apprenticeSurname);
            apprentices.add(newApprentice);
        break;

        case '2':
            cout << "Type in a name for the new worker: ";
            cin >> workerName;
            cout << "Type in a surname for the new worker: ";
            cin >> workerSurname;
            cout << "Type in the worker's salary: ";
            cin >> workerSalary;
            newWorker = new Worker(workerName, workerSurname, salaryToString(workerSalary));
            workers.add(newWorker);
        break;

        case '3':
            cout << "Choose the car's brand:\n 0-Acura\n 1-Audi\n 2-BMW\n 3-Ford\n 4-Honda\n ";
            cout << "5-Kia\n 6-Mercedes\n 7-Opel\n 8-Toyota\n 9-Volkswagen\n";
            cin >> numOfBrand;
            cout << "Type in the car's model: ";
            cin >> carModel;
            cout << "Type in the car's production year: ";
	    carYear=cars.getValidkYear();
            newCar = new Car((CarBrand)numOfBrand, carModel, carYear);
            cars.add(newCar);
        break;

        case '4':
            apprentices.showData();
        break;

        case '5':
            workers.showData();
        break;

        case '6':
            cars.showData();
        break;

        case '7':
            exitProgram();
        break;

        default:
            cout << "There's no such option on the list! Try again." << endl;
        break;
      }//switch
      userChoice = showMenuAndGetChoice();
    }//while
    exitProgram();
    return 0;
}
