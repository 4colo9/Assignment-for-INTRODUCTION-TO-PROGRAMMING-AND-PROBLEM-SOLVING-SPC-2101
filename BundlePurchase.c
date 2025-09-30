/*
NAME:COLEEN NICOLETTE KANYANYA
REG NO:PA106/G/28764/25.
Description:Programme to allow a user to choose their preffered internet data bundles
*/
#include<stdio.h>

int main()
{  
    int dataBundleNo;
    printf("Select data bundles: \n 1. 100MB @ 50 KES \n 2. 500MB @ 200 KES \n 3. 1GB @ 350 KES \n 4. 2GB @ 600 KES \n Enter your choice (1-4) :\n" );
    scanf("%d",&dataBundleNo);//Scans for the user input
    //
    switch(dataBundleNo) {
        case 1:
        printf(" You selected 100MB. Cost = 50 KES");
        break;

        case 2:
        printf(" You selected 500MB. Cost = 200 KES");
        break;

        case 3: 
        printf(" You selected 1GB. Cost = 350 KES");
        break;

        case 4:
        printf(" You selected 2GB. Cost = 600 KES");
        break;

        default:
        printf(" Invalid choice\n");//Will display invalid choice if the user inputs an invalid value
    }

    

     

   return 0;
}