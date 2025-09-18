//Person description
/*
NAME:COLEEN NICOLETTE KANYANYA
REG NO:PA106/G/28764/25.
Description:Program to prompt the user to enter some personal details and the it displays them
*/
#include<stdio.h>//Preproccessor directive

//main function
int main(){    
    int height;  //variable declaration of integer type                  
    printf("Enter your height: "); //prompting the user to enter height
    scanf("%d", &height);   //scanning the height entered by the user of integer type     
    printf("Your height is %d\n", height); //displaying the height entered by the user
    
    char ID[9]; //variable declaration of character type allowing 8 characters      
    printf("Enter your ID NUMBER: "); //prompting the user to enter ID number
    scanf("%s", ID);          //scanning the ID number entered by the user of character type
    printf("Your ID number is %s\n", ID); //displaying the ID number entered by the user
    
    int bank_balance;                    
    printf("Enter in your bank balance: "); //prompting the user to enter bank balance
    scanf("%d", &bank_balance);  //scanning the bank balance entered by the user of integer type        
    printf("Your bank balance is %d\n", bank_balance); //displaying the bank balance entered by the user
    
    char Birthcertificate_number[14]; //variable declaration of character type allowing 13 characters            
    printf("Enter your Birth certificate number: "); // prompting the user to enter Birth certificate number
    scanf("%s", Birthcertificate_number);       //scanning the Birth certificate number entered by the user of character type        
    printf("Your Birth certificate number is %s\n",Birthcertificate_number); //displaying the Birth certificate number entered by the user
    
    
    return 0;  
}