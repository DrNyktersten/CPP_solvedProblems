/*
Problem
In physics, an object that is in motion is said to have kinetic energy. The following formula can be used to determine a moving object’s kinetic energy:

KE = 1/2 mv^2

The variables in the formula are as follows: KE is the kinetic energy, m is the object’s mass in kilograms, and v is the object’s velocity, in meters per second.

Write a function named kineticEnergy that accepts an object’s mass (in kilograms) and velocity (in meters per second) as arguments. 
The function should return the amount of kinetic energy that the object has.
Demonstrate the function by calling it in a program that asks the user to enter values for mass and velocity.
*/

#include <iostream>
#include <cmath>

using namespace std; 
double kineticEnergy(double, double); 

//Kinetic Energy Formula:
//KE = 1/2mv^2
//m - mass of an object (kg), v - velocity of an object (m/s)
//KE - Kinetic Energy (J)

int main()
{
    double mass, velocity, KE; 

    cout << "Please enter the mass of an object" << endl;
    cin >> mass; 
    cout << "Please enter the velocity of an object" << endl; 
    cin >> velocity; 

    KE = kineticEnergy(mass, velocity); 

    cout << "The mass of an object " << mass << " kg"<< endl; 
    cout << "The velocity of an object " << velocity << " m/s" << endl; 
    cout << "The Kinetic Energy of an object " << KE << " J" <<  endl; 
    return 0; 
}



double kineticEnergy(double mass, double velocity)
{
    double KE; 
    KE = 0.5 * mass * pow(velocity, 2.0); 
    return KE; 
}
