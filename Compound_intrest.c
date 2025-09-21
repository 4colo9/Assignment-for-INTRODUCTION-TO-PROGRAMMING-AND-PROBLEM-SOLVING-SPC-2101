/*Name:Coleen Nicolette Kanyanya
  Reg No: PA106/G/28764/25
  Description : A programme to calculate the compound intrest
*/
#include<stdio.h>
#include<math.h>

int main(){
    //Variable declaration
    float principle,rate,time,n;//n is the number of times intrest is compounded per year
    double compound_intrest;

    //Prompts the user for input
    printf("Input your principle amount :\n");
    scanf("%f",&principle);

    printf("Input your percentage rate:\n");
    scanf("%f",&rate);

    printf("Input your time in years :\n");
    scanf("%f",&time);

    printf("Input "n" the number of times the intrest is compounded :\n");
    scanf("%f",&n);
     
    compound_intrest  = principle*pow(1+(rate/100/n),time * n);
    printf("Your compound intrest is %0.4lf" ,compound_intrest);

    return 0;


}
