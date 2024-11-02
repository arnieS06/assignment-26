#include <iostream>
#include <string>
#include "Struct.h"
#include "opOverload.h"
using namespace std;


int main() {
    Coordinates firstCoordinates;
    Coordinates secondCoordinates;

    cout << "give me coordinates \nwrite as X Y  -> ";
    cin >> firstCoordinates.pointX >> firstCoordinates.pointY;

    cout << "give me another set of coordinates \nwrite as X Y  -> ";
    cin >> secondCoordinates.pointX >> secondCoordinates.pointY;

    cout << "\nAre the coordinate sets identical? " << boolalpha << (firstCoordinates == secondCoordinates) << endl;

    cout << firstCoordinates;
    cout << "\n";
    cout << secondCoordinates;

    return 0;
}