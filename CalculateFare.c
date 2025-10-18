 /*Name:Coleen Nicolette Kanyanya
  Reg No: PA106/G/28764/25
  Description : A programme to calculate fare depending on the distance travelled
*/
#include<stdio.h>
float CalculateFare(float distance);
//function prototype
int main(){
  float distance;
  printf("What is the distance travelled in kilometres :");
  scanf("%f",&distance);
  float fare =CalculateFare(distance);
  printf("Your fare price is %0.2f",fare);
  
    }
float CalculateFare(float distance)//function definition
{
  return distance*50;
}

