#define BOOST_TEST_MODULE class_Car_tests
#include <boost/test/included/unit_test.hpp>

#include "Car.hpp"
#include "Workshop.hpp"
#include "Apprentice.hpp"
#include "Worker.hpp"

#include <string>
#include <iostream>
#include <sstream>

using namespace boost::unit_test;

BOOST_AUTO_TEST_CASE(Car_constr_test1)
{
    CarBrand brand = CarBrand::ACURA;
    std::string model = "djo97";
    int year = 1500;
    BOOST_CHECK_THROW(Car tempAuto(brand, model, year), std::string);
}

BOOST_AUTO_TEST_CASE(Car_constr_test2)
{
    CarBrand brand = CarBrand::HONDA;
    std::string model = "aa";
    int year= 200;
    BOOST_CHECK_THROW(Car tempAuto(brand, model, year), std::string);
}

BOOST_AUTO_TEST_CASE(Car_constr_test3)
{
    CarBrand brand = CarBrand::BMW;
    std::string model = "29d4sslfr";
    int year= 2015;
    Car newCar(brand, model, year);
    BOOST_CHECK_EQUAL(newCar.getBrand(), brand);
    BOOST_CHECK_EQUAL(newCar.getModel(), model);
    BOOST_CHECK_EQUAL(newCar.getYear(), year);
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

BOOST_AUTO_TEST_CASE(Virt_func_test)
{
    std::string out;
    std::ostringstream class_output;

    Apprentice *unit = new Worker("bred", "smith", "1000");

    out=" Name: bred  Surname: smith  Salary: 1000";
    auto buff=std::cout.rdbuf();
    std::cout.rdbuf(class_output.rdbuf());
    unit->showData();
    std::cout.rdbuf(buff);

    BOOST_CHECK_EQUAL(class_output.str(), out);
}
