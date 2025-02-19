// Chapter 2 Programming Project JPenney.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    float a = 16500 * .15;
    cout << "Approximate number of customers who buy one or more energy drinks in a week:";
    cout << a;

    cout << "\n";

    float b = a * .58;
    cout << "Approximate number of customers who prefer citrus flavored energy drinks:";
    cout << round(b);

    return 0;
}
