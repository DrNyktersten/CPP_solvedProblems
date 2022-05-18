/*
Problem 
Write a program that determines which of five geographic regions within a major city (north, south, east, west, and central)
had the fewest reported automobile accidents last year. It should have the following two functions, which are called by main.

• int getNumAccidents() is passed the name of a region. It asks the user for the number of automobile accidents reported in that region during the last year, 
vali- dates the input, then returns it. It should be called once for each city region.

• void findLowest() is passed the five accident totals. It determines which is the smallest and prints the name of the region, 
along with its accident figure.

Input Validation: Do not accept an accident number that is less than 0.
*/
#include <iostream>
#include <string> 

using namespace std; 
const string N = "north", 
             S = "south", 
             E = "east", 
             W = "west", 
             C = "central"; 

int getNumAccidents(string); 
int InputValid(int); 
void findLowest(int, int, int, int, int); 
void checkLowest(int, int, int, int, int, string); 

int main()
{
    double north, south, east, west, central; 

    north = getNumAccidents(N);
    south = getNumAccidents(S); 
    east = getNumAccidents(E); 
    west = getNumAccidents(W); 
    central = getNumAccidents(C); 

    findLowest(north, south, east, west, central); 

    return 0; 
}



int getNumAccidents(string direction)
{
    double accidents; 
    cout << "What is the number of automobile " 
         << "accidents in this " << direction << " region:" << endl; 
    cin >> accidents; 
    accidents = InputValid(accidents); 
    cout << endl; 
    return accidents; 
}

void findLowest(int n, int s, int e, int w, int c)
{
    cout << "Lowest accidents in total is in" << endl; 
    checkLowest(n, s, e, w, c, N); 
    checkLowest(s, e, w, c, n, S); 
    checkLowest(e, w, c, n, s, E); 
    checkLowest(w, c, n, s, e, W); 
    checkLowest(c, n, s, e, w, C); 
}

void checkLowest(int n, int s, int e, int w, int c, string direction)
{
    if (n < s)
    {
        if (n < e)
        {
            if (n < w)
            {
                if (n < c)
                {
                    cout << "Region with the smallest accident is " << direction 
                         << "\nwith accident figures:" << n << endl; 
                }
            }
        }
    }
}

int InputValid(int num)
{
    while(num < 0)
    {
        cout << "Error please enter the valid " 
             << "number of accidents" << endl; 
        cin >> num; 
    }
    return num; 
}
