  /*Name:Coleen Nicolette Kanyanya
  Reg No: PA106/G/28764/25
  Description : A programme to convert temprature in Farenheit to degree celcius
*/
#include <stdio.h>
float convertToCelcius (float TempFarenheit);
int main(){
    float TempFarenheit;
    printf("Input the temprature in degrees Farenheit  :");//Prompts the user to input temptature in degrees farenheit
    scanf("%f",&TempFarenheit);
    float TempCelcius=convertToCelcius(TempFarenheit);//Calls upon the convertToCelcius function
    printf("The Temprature in degrees celcius is %f",TempCelcius);
}
float convertToCelcius(float TempFarenheit){//Function to convert to degrees celcius
    return (TempFarenheit - 32) * 5/9;
}