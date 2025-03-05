// Chapter 2 Programming Project JPenney.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 
//This code calculates the rise in height of ocean water levels by years elapsed in millimeters.

#include <iostream>
using namespace std;

int main()
{
    const float OceanLevelRisePerYear = 1.5;

    const int Years5 = 5;  
    const int Years7 = 7;
    const int Years10 = 10;
    
    float OceanHeightIn5Years = OceanLevelRisePerYear * Years5;
    cout << "Number of millimeters higher than the current level that the ocean level will be in 5 years:";
    cout << OceanHeightIn5Years;

    cout << "\n";

    float OceanHeightIn7Years = OceanLevelRisePerYear * Years7;
    cout << "Number of millimeters higher than the current level that the ocean level will be in 7 years:";
    cout << OceanHeightIn7Years;

    cout << "\n";

    float OceanHeightIn10Years = OceanLevelRisePerYear * Years10;
    cout << "Number of millimeters higher than the current level that the ocean level will be in 10 years:";
    cout << OceanHeightIn10Years;

    return 0;
}
