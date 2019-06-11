#define BOOST_TEST_MODULE class_Car_tests
#include <boost/test/included/unit_test.hpp>

#include "Car.hpp"
#include "Workshop.hpp"
 
#include <string>
#include <iostream>
#include <sstream>

using namespace boost::unit_test;

BOOST_AUTO_TEST_CASE(Car_constr_test)
{
    CarBrand brand[] = {CarBrand::ACURA, CarBrand::HONDA, CarBrand::BMW};
    std::string model[] = { "aa", "djo97", "29d4sslfr" };
    int year[] = {200, 1500, 2015};

    for(int i=0; i<1; i++)
    {
	    BOOST_CHECK_THROW(Car tempAuto(brand[i], model[i], year[i]), std::string);
	}
    Car newCar(brand[2], model[2], year[2]);
    BOOST_CHECK_EQUAL(newCar.getBrand(), brand[2]);
    BOOST_CHECK_EQUAL(newCar.getModel(), model[2]);
    BOOST_CHECK_EQUAL(newCar.getYear(), year[2]);
}

BOOST_AUTO_TEST_CASE(Car_operator_test)
{
    CarBrand brand = CarBrand::AUDI;
    std::string model = "AA97";
    int year = 1999;
    std::ostringstream correct_output;
    std::string out;
    std::string str= std::to_string(year);
   
    Car newCar(brand, model, year);
    out="Audi  "+model+" "+str;
    auto buf=std::cout.rdbuf();
    
    std::cout.rdbuf(correct_output.rdbuf());
    std::cout << newCar;
    std::cout.rdbuf (buf);

    BOOST_CHECK_EQUAL (correct_output.str(), out);
}
