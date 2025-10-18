/*
NAME:COLEEN NICOLETTE KANYANYA
REG NO:PA106/G/28764/25.
Description:Program to calculate the Electric bill based on the number of units consumed
*/
#include <stdio.h>
int CalculateElectricBill(int units);//Function prototype

int main(){
    int bill;
    int units;
    printf("Please input your number of units \n");
    scanf("%d",&units);
    bill=CalculateElectricBill(units);//function call
    printf("Your Electric bill is %d",bill);    
}
int CalculateElectricBill(int units){//function definition
    if (units >= 200)
    {return 100*10 + 100*15 + (units-200)*20;}
    else if(units > 100){
        return 100*10 +(units-100)*15;
    }
    else{return units*10;}
    //returns the amount of the electric bill according to the range by the user
}
