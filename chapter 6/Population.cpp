#include <iostream> 
using namespace std; 
double inputValid(double); 
double ValidInput(double); 
double ValidInput_2(double); 
double ValidYears(double); 
double calculate(double, double, double); 

int main() 
{
    double start_size,      // starting size of the population 
           annual_b_rate,   // annual birth rate 
           annual_d_rate,   // annual death rate
           N_years_disp;    // number of years to display 
    double    New_population;  // new population size; 

    cout << "What is the starting size of the population? ";
    start_size = inputValid(start_size);

    cout << "What is the annual birth rate? "; 
    annual_b_rate = ValidInput(annual_b_rate); 

    cout << "What is the annual death rate? "; 
    annual_d_rate = ValidInput_2(annual_d_rate);

    cout << "How many years would you like to display? "; 
    N_years_disp = ValidYears(N_years_disp); 

    New_population = calculate(start_size, annual_b_rate, annual_d_rate); 

    cout << endl << endl; 
    cout << "The starting size of the population " << '\t' << start_size << endl; 
    cout << "The birth rate of the population " << '\t' << annual_b_rate << endl; 
    cout << "The annual death rate of the population " << annual_d_rate << endl; 
    cout << "The number of years to display " << '\t' << '\t' << N_years_disp << endl; 
    cout << "The size of the population for a year " << '\t' << New_population << endl; 
    cout << "Popuation size for the " << N_years_disp << " years " << '\t' << '\t' << New_population * N_years_disp << endl; 

    return 0; 
}


double inputValid(double start_size)
{
    while (!(cin >> start_size) || (start_size < 2))
    {
        cout << "Error please enter valid starting size " << endl; 
        cout << "Starting size must be more than 2" << endl; 
        //clear the input 
        cin.clear(); 
        //ignore the previous input 
        cin.ignore(123, '\n');
    }
    return start_size; 
}

double ValidInput(double birth_rate)
{
    while(!(cin >> birth_rate) || (birth_rate < 0))
    {
        cout << "Error please enter valid birth rate" << endl; 
        cout << "Birth rate must be positive number" << endl; 
        //clear the input 
        cin.clear(); 
        //ignore the previous input 
        cin.ignore(123, '\n'); 
    }
    return birth_rate; 
}

double ValidInput_2(double death_rate)
{
    while (!(cin >> death_rate) || (death_rate < 0)) 
    {
        cout << "Error please enter valid death rate" << endl; 
        cout << "Death rate must be positive number" << endl; 
        //clear the input 
        cin.clear(); 
        //ignore the previous input
        cin.ignore(123, '\n'); 
    }
    return death_rate;
}

double ValidYears(double years)
{
    while(!(cin >> years) || (years < 1))
    {
        cout << "Error please enter valid number of years" << endl; 
        cout << "Number of years must be more than 1" << endl; 
        //clear the input 
        cin.clear(); 
        //ignore the previous input 
        cin.ignore(123, '\n'); 
    }
    return years; 
}

double calculate(double P, double B, double D)
{
    B *= 0.01; //2.31%
    D *= 0.01; //3.33%
    return P + (B * P) - (D * P);
}