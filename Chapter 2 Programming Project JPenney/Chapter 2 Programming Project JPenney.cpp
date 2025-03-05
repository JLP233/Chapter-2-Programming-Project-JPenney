// Chapter 2 Programming Project JPenney.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 
//This program calculates the total distance in miles a car can drive on one tank of gas in a town v.s. on the highway.



#include <iostream>
using namespace std;

int main()
{
    const int MaximumGallonsInGasTank = 20;

    const float MpgInTown = 23.5;
    const float MpgHighway = 28.9;

    float MaximumMileageDrivingInTown = MaximumGallonsInGasTank * MpgInTown;
    cout << "Maximum mileage driving only in town:";
    cout << MaximumMileageDrivingInTown;

    cout << "\n";

    float MaximumMileageDrivingOnTheHighway = MaximumGallonsInGasTank * MpgHighway;
    cout << "Maximum mileage driving only on the highway:";
    cout << MaximumMileageDrivingOnTheHighway;

    return 0;
}
