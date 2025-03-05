// Chapter 2 Programming Project JPenney.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 
//This program calculates the number of customers who buy one or more energy drinks a week and the number of them that prefer the citrus flavor.

#include <iostream>
using namespace std;

int main()
{
    const int DrinkCompanyCustomersSurveryed = 16500;

    const float PercentOfSurveryedThatPurchaseOneOrMoreEnergyDrinksAWeek = .15;
    const float PercentOfDrinkPurchasersWhoPreferCitrusFlavor = .58;

    float EnergyDrinkBuyingCustomers = DrinkCompanyCustomersSurveryed * PercentOfSurveryedThatPurchaseOneOrMoreEnergyDrinksAWeek;
    cout << "Approximate number of customers who buy one or more energy drinks in a week:";
    cout << EnergyDrinkBuyingCustomers;

    cout << "\n";

    float CustomersWhoPreferCitrusEnergyDrinks = EnergyDrinkBuyingCustomers * PercentOfDrinkPurchasersWhoPreferCitrusFlavor;
    cout << "Approximate number of customers who prefer citrus flavored energy drinks:";
    cout << round(CustomersWhoPreferCitrusEnergyDrinks);

    return 0;
}
