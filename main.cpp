// Name:David Nguyen
// This program calculates and displays business expenses.
#include <iostream>
#include <string>
#include <iomanip>
int main()
{
  // defind variable
std:: string location;
int day;
double hotel, meal, total;

//get data

std::cout << "What is the business trip location? ";
std::cin >> location;
std::cout << "How many days will the trip take? ";
std::cin >> day;
std::cout << "What is the total hotel expense? ";
std::cin >> hotel;
std::cout << "What is the total meal expense? ";
std::cin >> meal;
total = hotel + meal;

//display the result

std::cout << std::endl <<std::endl <<"Location" << std::setw(10) << "Days" << std::setw(15) << "Hotel"<< std::setw(14) << "Meal" << std::setw(15) << "Total"<< std::endl;
std::cout << location << std::setw(12) << day << std::setw(9) << "$" << hotel << std::setw(8) << "$"<< meal << std::setw(9) << "$" << total << std::endl;




  return 0;
}
