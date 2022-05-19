#include <iostream> 
using namespace std; 
void getJudgeData(double &);
void calcScore(double, double, double, double, double); 
double ifLowest(double judge1, double judge2, double judge3, double judge4, double judge5); 
int findLowest(double judge1, double judge2, double judge3, double judge4, double judge5);
double ifHighest (double judge1, double judge2, double judge3, double judge4, double judge5);
int findHighest(double judge1, double judge2, double judge3, double judge4, double judge5); 

int main() 
{
    double judge1,
           judge2,
           judge3,
           judge4, 
           judge5; 
    
    getJudgeData(judge1); 
    getJudgeData(judge2);
    getJudgeData(judge3);
    getJudgeData(judge4);
    getJudgeData(judge5);

    calcScore(judge1, judge2, judge3, judge4, judge5);
    return 0; 
}

void getJudgeData (double &judge_score)
{
    cout << "What was your judge score?" << endl; 
    cin >> judge_score;
    while(judge_score < 0 || judge_score >= 10)
    {
        cout << "Error please enter valid judge score" << endl; 
        cin >> judge_score; 
    }
}



void calcScore(double judge1, double judge2, double judge3, double judge4, double judge5)
{
    double average,
           sum,
           lowest,
           highest; 
    
           lowest = ifLowest(judge1, judge2, judge3, judge4, judge5);
           highest = ifHighest(judge1, judge2, judge3, judge4, judge5);
           sum = judge1+judge2+judge3+judge4+judge5; 
           sum -= lowest; 
           sum -= highest; 
           average = sum / 3.0; 

    cout << "Our lowest score will be " << lowest << endl; 
    cout << "Our highest score will be " << highest << endl; 
    cout << "Our average score after dropping \n" 
         << "the highest and lowest scores \n"
         << "will be: " << average << endl; 
}



double ifLowest(double judge1, double judge2, double judge3, double judge4, double judge5)
{
    double smallest; 
    smallest = findLowest(judge1, judge2, judge3, judge4, judge5);
    smallest = findLowest(judge2, judge3, judge4, judge5, judge1);
    smallest = findLowest(judge3, judge4, judge5, judge1, judge2);
    smallest = findLowest(judge4, judge5, judge1, judge2, judge3);
    smallest = findLowest(judge5, judge1, judge2, judge3, judge4);
    return smallest; 
}



int findLowest(double judge1, double judge2, double judge3, double judge4, double judge5)
{
    double lowest; 
    if (judge1 < judge2)
    {
        if (judge1 < judge3)
        {
            if (judge1 < judge4)
            {
                if (judge1 < judge5)
                {
                    lowest = judge1; 
                }
            }
        }
    }
    return lowest; 
}


double ifHighest (double judge1, double judge2, double judge3, double judge4, double judge5)
{
    double highest; 
    highest = findHighest(judge1, judge2, judge3, judge4, judge5);
    highest = findHighest(judge2, judge3, judge4, judge5, judge1);
    highest = findHighest(judge3, judge4, judge5, judge1, judge2);
    highest = findHighest(judge4, judge5, judge1, judge2, judge3);
    highest = findHighest(judge5, judge1, judge2, judge3, judge4);
    return highest; 
}

int findHighest(double judge1, double judge2, double judge3, double judge4, double judge5)
{
    double highest; 
    if(judge1 > judge2)
    {
        if (judge1 > judge3)
        {
            if (judge1 > judge4)
            {
                if (judge1 > judge5)
                {
                    highest = judge1; 
                }
            }
        }
    }
    return highest; 
}