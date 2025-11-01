 /*Name:Coleen Nicolette Kanyanya
  Reg No: PA106/G/28764/25
  Description : A programme to prompt for input for revenue for a week and display its sum and average and to display the floors of a hotel and the rooms occupied per floor bu the use of a 2D array
  and to display the branches of a hotel and the room occupied per floor by the use of a 3D array
  
*/
#include<stdio.h>
#include<stdlib.h>//for the rand() and the srand() function
#include<time.h>//fot the time() function

int main(){
    float AVG;
    float sum = 0;
   
    float revenue[7]={0};//revenue array to store the revenue that is input
    char *Days[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday" ,"Saturday"};//an array to store the day values to be displayed
    for(int i=0;i<7;i++){
        printf("Input your revenue for %s :",Days[i]);
        scanf("%f",&revenue[i]);
        sum = sum + revenue[i];
    }
    printf("The revenue for the week is %0.2f \n",sum);
    AVG=sum/7;
    printf("The average daily revenue for this week is %0.2f \n",AVG);
    
    srand(time(0));//seed a random number
    
    
    
    printf(" \t \t ROOM OCCUPANCY \t\t\n");
    int occupancy [5][10] = {0};//An array to store the occupants of the hotel rooms
    
    for(int r=0 ; r < 5; r++){
     int count=0;//resets for each floor to 0
     for(int c =0 ; c < 10 ; c++){
        occupancy [r][c] = rand() % 2;
        if ( occupancy [r][c] == 1){
            count++;
        }
        printf("%d ", occupancy[r][c]); // print each room
        
     }
     printf(" \t Floor %d: %d occupied, %d vacant\n", r+1, count, 10 - count); //print the floor and the rooms occupied and the rooms that are vacant
    }
    
     printf(" \t BRANCHES \t \n");
     int chain [3][5][10] = {0};
     int totalOccupied = 0;//counter to show the number of rooms that will be occupied totally in all branches
     for(int b = 0; b < 3; b++){
       for (int x = 0; x< 5 ;x++){
        int count=0;//counter for the number of floors
         for(int y = 0; y < 10; y++){
          chain [b][x][y] = rand() % 2;
          if(chain [b][x][y] == 1){
              count++;
              totalOccupied++;
            }
            printf("%d ",chain[b][x][y]);
            }
      printf("\nBranch %d: Floor %d %d occupied\n",b+1,x+1,count);
      }
     }
   printf("The total number of rooms occupied are %d",totalOccupied);
    return 0;
}

