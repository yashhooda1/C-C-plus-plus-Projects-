//Name: Temperature Conversion
//Author: Yash Hooda
//Date Written: 12/06/2020
//This program gives a user a choice to use the metric or imperial system and converts their inputted temperature to the other value.
#include <iostream> //Allows for cout and cin functions
#include <math.h> //Allows for Algebra functions

using namespace std; // means we use all functions within the standard namespace

//method for the metric system
    void metric()
    {
        //define variables
    float celcius, fahrenheit, choice, choice1, celciustemperature, fahrenheittemperature;
    
        cout << "Would you like to convert to fahrenheit?" << endl;
        cout << "1. Yes!" << endl;
        cout << "2. No!" << endl;
        cout << endl;
        cin >> choice1;
        cout << endl;
        //User agrees to convert the temperature from celcius to fahrenheit
        if (choice1 == 1)
        {
            cout << "Enter temperature: ";
            cin >> celciustemperature;
            fahrenheit = ((9.0/5.0)*celciustemperature + 32.0);
            cout << "The temperature in degrees fahrenheit is " << fahrenheit << endl;
        }
        //User doesn't want to convert the temperature from celcius to fahrenheit
        else
        {
            cout << "Understood, have a nice day!" << endl;
        }
    }

    //method for the imperial system
    void imperial()
    {
        //define variables
    float celcius, fahrenheit, choice, choice1, celciustemperature, fahrenheittemperature;

        cout << "Would you like to convert to celcius?" << endl;
        cout << "1. Yes!" << endl;
        cout << "2. No!" << endl;
        cout << endl;
        cin >> choice1;
        cout << endl;
        //User agrees to convert the temperature from fahrenheit to celcius
        if (choice1 == 1)
        {
            cout << "Enter temperature: ";
            cin >> fahrenheittemperature;
            celcius = ((fahrenheittemperature - 32.0) * (5.0/9.0));
            cout << "The temperature in degrees celcius is " << celcius << endl;
        }
        //User doesn't want to convert the temperature from fahrenheit to celcius
        else
        {
            cout << "Understood, have a nice day!" << endl;
        }
    }




//main method
int main()
{
    //define variables
    float celcius, fahrenheit, choice, choice1, celciustemperature, fahrenheittemperature;

    //Opening Statements
    cout << "Welcome to temperature conversion, select your system!" << endl;
    cout << "1. Metric" << endl;
    cout << "2. Imperial" << endl;
    cout << endl;
    cin >> choice;
    cout << endl;
    //User selects Metric System
    if (choice == 1)
    {
        //call metric method
        metric();
    }
    //User selects Imperial System
    if (choice == 2)
    {
        //call imperial method
        imperial();
    }
    //Ending Message
    cout << "Thank you for using temperature conversion calculator!" << endl;


    return 0;
}
    