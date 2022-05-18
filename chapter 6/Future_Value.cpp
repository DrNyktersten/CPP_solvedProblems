//F = P * (1 + i)^t
//F = Future value on the account 
//P = present value on the account 
//i = monthly interest rate
//t = number of months 

#include <iostream> 
#include <cmath> 

using namespace std; 
double futureValue(double, double, double);

int main()
{
    double present_value, //present value of the account 
           month_rate,    //montlhly intereset rate 
           num_month;     //number of months money will be left in the account

    cout << "Please enter the account's present value" << endl; 
    cin >> present_value; 
    cout << "Please enter the account's monthly intereset rate" << endl; 
    cin >> month_rate; 
    cout << "Please enter the number of months money will be left in account" << endl; 
    cin >> num_month; 

    double F; 
    F = futureValue(present_value, month_rate, num_month);

    cout << "Future value of the account is " << F << endl;  
    return 0; 
}



double futureValue(double val, double rate, double num)
{
    rate *= 0.01; //rate if enter 2 % make is 0.02 % 
    return val * pow((1+rate), num); 
}

