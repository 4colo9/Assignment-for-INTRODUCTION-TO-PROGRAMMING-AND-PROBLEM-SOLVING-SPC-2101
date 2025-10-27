 /*Name:Coleen Nicolette Kanyanya
  Reg No: PA106/G/28764/25
  Description : A programme to prompt for input for revenue for a week and display its sum and average
*/
#include<stdio.h>
int main(){
    int i;
    float AVG;
    float sum = 0;
    float revenue[7]={};
    char *Days[7] = {"Sunday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Monday"};//an array to store the day values to be displayed
    for(i=0;i<7;i++){
        printf("Input your revenue for %s \t",Days[i]);
        scanf("%f",&revenue[i]);
        sum = sum + revenue[i];

    }
    printf("The revenue for the week is %0.2f \n",sum);
    AVG=sum/7;
    printf("The average daily revenue for this week is %0.2f \n",AVG);
    return 0;
}