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