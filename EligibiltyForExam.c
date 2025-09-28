/*
NAME:COLEEN NICOLETTE KANYANYA
REG NO:PA106/G/28764/25.
Description:Program that checks the eligibility for exams
*/
#include<stdio.h>//Preproccessor directive
int main()
{ 
    //Declaration of the attendance and avg marks variables
    int Attendance;
    int Avg_marks;
    
    //Prompts the user for input of their percentage attendance and average marks
    printf("Input your percentage attendance %:");
    scanf("%d", &Attendance);

    printf("\nInput your Average marks :");
    scanf("%d", &Avg_marks);

    if (Attendance >= 75 && Avg_marks >= 40 )
     {printf("You are eligible for the exam!");
    }
    else {printf("Not eligible");}
    return 0;

}