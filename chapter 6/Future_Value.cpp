/*
Suppose you have a certain amount of money in a savings account that earns compound monthly interest,
and you want to calculate the amount that you will have after a specific number of months. 
The formula, which is known as the future value formula, is:

F = P x (1 + i)^t

The terms in the formula are as follows:

• F is the future value of the account after the specified time period.
• P is the present value of the account.
• i is the monthly interest rate.
• t is the number of months.

Write a program that prompts the user to enter the account’s present value, monthly interest rate, and the number of months that the money will be left in the account.
The program should pass these values to a function named futureValue that returns the future value of the account,
after the specified number of months. The program should display the account’s future value.
*/


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

