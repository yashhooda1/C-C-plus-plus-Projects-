//Solar System Weight Conversion
//Author: Yash Hooda
//Date: 03/10/2021
// This program reads in the mass of an object (in kg) and output the weight (in N) on the Earth, on the Moon, and on Venus.

#include <iostream>
using namespace std;

//Reads in mass for kg and prints weight of objects on these inner planets in Newtons.
void innerplanets()
{
    double mercuryweight, venusweight, earthweight, moonweight, marsweight;
    double innerobject;
    cin >> innerobject;
    mercuryweight = innerobject*3.7;
    cout << "The weight of an object on Mercury is in " << mercuryweight << " newtons" << endl;
    venusweight = innerobject*8.87;
    cout << "The weight of an object on Venus is in " << venusweight << " newtons" << endl;
    earthweight = innerobject*9.81;
    cout << "The weight of an object on Earth is in " << earthweight << " newtons" << endl;
    moonweight = innerobject*1.7;
    cout << "The weight of an object on the Moon is in " << moonweight << " newtons" << endl;
    marsweight = innerobject*3.7;
    cout << "The weight of an object on Mars is in " << marsweight << " newtons" << endl;

}

//Reads in mass for kg and prints weight of objects on these outer planets in Newtons.
void outerplanets()
{
    double jupiterweight, saturnweight, titanweight, uranusweight, neptuneweight, plutoweight;
    double outerobject;
    cin >> outerobject;
    jupiterweight = outerobject*24.7;
    cout << "The weight of an object on Jupiter is in " << jupiterweight << " newtons" << endl;
    saturnweight = outerobject*10.5;
    cout << "The weight of an object on Saturn is in " << saturnweight << " newtons" << endl;
    titanweight = outerobject*1.3;
    cout << "The weight of an object on Saturn's moon Titan is in " << titanweight << " newtons" << endl;
    uranusweight = outerobject*9.0;
    cout << "The weight of an object on Uranus is in " << uranusweight << " newtons" << endl;
    neptuneweight = outerobject*11.7;
    cout << "The weight of an object on Neptune is in " << neptuneweight << " newtons" << endl;
    plutoweight = outerobject*0.49;
    cout << "The weight of an object on Pluto is in " << plutoweight << " newtons" << endl << endl;
} 

int main() {
     
     //Entering Message 
     cout << "Welcome to weight conversion for our solar system! Please enter your object weight to get started!" << endl << endl;

     //Call Methods
     innerplanets();
     outerplanets();

     //Ending message
     cout << "Thank you for using weight conversion for our solar system! Have a nice day!" << endl;

    return 0;
}

