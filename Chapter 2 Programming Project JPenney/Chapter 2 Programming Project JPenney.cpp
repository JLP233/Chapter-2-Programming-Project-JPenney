// Chapter 2 Programming Project JPenney.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 
//This program calculates the total distance in miles a car can drive on one tank of gas in a town v.s. on the highway.



#include <iostream>
using namespace std;

int main()
{
    float MaximumMileageDrivingInTown = 20 * 23.5;
    cout << "Maximum mileage driving only in town:";
    cout << MaximumMileageDrivingInTown;

    cout << "\n";

    float MaximumMileageDrivingOnTheHighway = 20 * 28.9;
    cout << "Maximum mileage driving only on the highway:";
    cout << MaximumMileageDrivingOnTheHighway;

    return 0;
}
