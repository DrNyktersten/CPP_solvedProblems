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