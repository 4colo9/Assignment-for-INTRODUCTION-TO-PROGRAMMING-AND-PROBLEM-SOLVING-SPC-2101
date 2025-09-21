/*Name: Coleen Nicolette Kanyanya
  Registration No: PA106/G/28764/25
  Description: Programme to check ones legibility for a loan according to age and the income earned
*/
#include<stdio.h>
int main() {
    //Declaration of variables
    int age;
    float income;

    //Prompting the user for input and scanning it
    printf("Input your age :");
    scanf("%d",&age);

    printf("Input your income :");
    scanf("%f",&income);

    //Checks if the user qualifies for the loan
    if(age >= 21 && income >= 21000)
    {printf("Congratulations you qualify for the loans");}
    else{printf("Unfortunately we are unable to offer you a loan at this time");}

    return 0;


}