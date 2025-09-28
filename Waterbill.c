/*
NAME:COLEEN NICOLETTE KANYANYA
REG NO:PA106/G/28764/25.
Description:Programme to calculate the water bill of a user according to the units they consume
*/
#include<stdio.h>//Preproccessor directive
int main()
{//Declaration of variables
    int waterUnits;
    float waterBill;//Use of float to enable decimale points
 
//Prompting the user to input their respective units
 printf("Input your units: ");
 scanf("%d",&waterUnits);
//Checks the range of the user units and calculates the price accordingly
 if(waterUnits <= 30)
 {
 waterBill = waterUnits*20;
 }
 else if (waterUnits <= 60)
 {
    waterBill= waterUnits*25;
}
 else {waterBill = waterUnits*30 ;}
 printf("Total water bill : %.2f",waterBill);
 return 0;

}