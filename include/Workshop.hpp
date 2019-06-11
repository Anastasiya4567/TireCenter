/*
First name: Arkadiusz       Leader: W. Kusmirek
Last name:  Dawid           Project 2
Student ID: 300199          Topic: Tire Center (Warsztat wulkanizacyjny)
*/

#ifndef WORKSHOP_HPP
#define WORKSHOP_HPP

#include <vector>

template <typename T> class Workshop
{
    private:
        std::vector<T> vect;

    public:
        ~Workshop()
        {
            for( typename std::vector<T>::iterator iter = vect.begin(); iter != vect.end(); ++iter)
                delete *iter;

            vect.clear();
            std::cout << "All data deleted.\n";
        }
        void add(T object)
        {
            vect.push_back(object);
            std::cout<<"Object added successfully!\n";
        }

        static int getValidkYear()
        {
            int carYear;
            bool validYear=false;
            while (validYear==false)
            {
              std::cin >> carYear;
              try
              {
                 ifInvalidY (carYear);
              }
              catch (bool validity)
              {
                 std::cin.clear();
                 std::cin.ignore(100, '\n');
                 std::cout << "The year of car production is invalid. Try again:\n";
                 continue;
              }
              validYear=true;
            }
            return carYear;
         }

         static void ifInvalidY (int carYear)
         {
             if (carYear<1800 || carYear>2030)
                     throw false;
         }

        void showData()
        {
            try
            {
                ifEmpty(vect);
            }
            catch (const char* emptyVec)
            {
              std::cout << "Empty! Nothing to show.\n";
              return;
            }
            int number = 0;
            std::cout<<"List of objects:\n";
            for(typename std::vector<T>::iterator iter = vect.begin(); iter != vect.end(); ++iter)
            {
                std::cout << ++number << ") ";
                (*iter)->showData();
                std::cout << std::endl;
            }
        }

        void ifEmpty (std::vector<T> vect)
        {
                if (vect.empty())
                    throw "empty";
        }
};

#endif
