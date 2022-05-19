/*
Problem
A particular talent competition has five judges, each of whom awards a score between 0 and 10 to each performer.
Fractional scores, such as 8.3, are allowed. A performer’s final score is determined by dropping the highest and lowest score received,
then averaging the three remaining scores. Write a program that uses this method to calculate a contestant’s score. It should include the following functions:

• void getJudgeData() should ask the user for a judge’s score, store it in a reference parameter variable, and validate it. 
This function should be called by main once for each of the five judges.

• void calcScore() should calculate and display the average of the three scores that remain after dropping the highest and lowest scores the performer received.
This function should be called just once by main and should be passed the five scores.

The last two functions, described below, should be called by calcScore, which uses the returned information to determine which of the scores to drop.

• int findLowest() should find and return the lowest of the five scores passed to it.

• int findHighest() should find and return the highest of the five scores passed to it.

Input Validation: Do not accept judge scores lower than 0 or higher than 10.
*/

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
