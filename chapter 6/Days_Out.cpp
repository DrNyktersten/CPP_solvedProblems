#include <iostream> 
#include <iomanip>

using namespace std; 
int NumOfEmployees(); 
int NumOfMisDays(int); 
double Average_days(double, double); 

int main()
{
    double Employees,        // number of employees in a company
        Missed_days,      // number of days each employee missed past year
        Average_days_abs; // average days employees absent 
    Employees = NumOfEmployees();
    Missed_days = NumOfMisDays(Employees); 
    Average_days_abs = Average_days(Employees, Missed_days);

     
    cout << "Total number of employees in a company " << Employees << endl; 
    cout << "Total number of missed days for past year " << Missed_days << endl; 
    cout << setprecision(3) << fixed;
    cout << "Average number of employees absent for past year " << Average_days_abs << " e/a" << endl; 
    return 0; 
}

int NumOfEmployees()
{
    int employees; 
    cout << "How many employees are in a company?" << endl; 
    cin >> employees; 
    while (employees < 1)
    {
        cout << "Error please enter valid number of employees" << endl; 
        cin >> employees; 
    }
    cout << endl; 
    return employees; 
}

int NumOfMisDays(int employees)
{
    int days_missed, 
        total = 0, 
        x = 0; 
     
    for (int i = 0; i < employees; i++)
    { 
        x++; 
        cout << "How many days did employee #" << x << " missed" << endl;
        cout << "during the past year?" << endl; 
        cin >> days_missed;
        cout << endl; 
        total += days_missed; 
    }
    return total; 
}


double Average_days(double employees, double missed_days)
{
    double average = 0; 
    average = employees / missed_days; 
    return average; 
}