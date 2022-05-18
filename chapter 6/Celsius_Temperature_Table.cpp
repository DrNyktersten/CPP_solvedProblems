/*
Problem
The formula for converting a temperature from Fahrenheit to Celsius is

C  =  5 / 9 (F – 32)

where F is the Fahrenheit temperature and C is the Celsius temperature.
Write a function named celsius that accepts a Fahrenheit temperature as an argument. 
The function should return the temperature, converted to Celsius. 
Demonstrate the function by calling it in a loop that displays a table of the Fahrenheit temperatures 0 through 20 and their Celsius equivalents.
*/
#include <iostream> 
using namespace std; 

double celsius(double); 
//C = 5/9 (F - 32) Fahrenheit to Celsius
//F is the Fahrenheit temperature
//C is the Celsius temperature

int main()
{
    double F, C; // Fahrenheit
    cout << "Fahrenheit           |           Celsius" << endl; 
    for (int i = 0; i < 20; i++)
    {
        F = i;
        C = celsius(F); 
        cout << F << "\t\t\t\t" << C << endl; 
    }
    return 0; 
}


double celsius(double F)
{
    double C; 
    C = 5.0/9.0 * (F - 32);  
    return C; 
}
