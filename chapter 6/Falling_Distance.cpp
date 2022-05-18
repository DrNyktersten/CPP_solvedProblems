
#include<iostream> 
#include<cmath>
using namespace std;

const double g = 9.8; 
double fallingDistance(double); 

//formula of distance: 
// d = 1/2gt^2 
int main() 
{   
    double t, 
           d; 
    for (int i = 0; i < 10; i++)
    {
        t = i + 1; 
        d = fallingDistance(t); 
        cout << t << " seconds = " 
            << d << " meters" 
            << endl; 
    }
    double display; 
    display = fallingDistance(display); 
    return 0; 
}

double fallingDistance(double time)
{
    double distance; 
    distance = 0.5 * g * pow(time, 2.0); 
    return distance; 
}
