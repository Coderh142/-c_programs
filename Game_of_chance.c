#include <stdio.h>
#include <stdlib.h>

int main(){

   int random_number = rand() % 10;
   int Guess, attempts = 3;
   int play_again;

      printf("%d", random_number);
     
      printf("\t\t\t******* welcome to GAME OF CHANCE ********\n");
      printf("\t\t\tYOU can guess number from (1-10)\n"); 
       printf("\t\t\tYOU have only 3 attempts\n"); 


   do{
       printf("\nGuess the number: ");
       scanf("%d", &Guess);
       attempts--;

      if (Guess == random_number){

            printf("Congratulations! you choose correct number\n");
            exit(0);
      }
     
     else if (Guess < random_number){
        printf("You choosed Low value try again\n");
      }
      
     else if(Guess > random_number){
        printf("You choosed High value try again\n");
      }
       
        
        if (attempts == 0){
            exit(0);
        }

        printf("\t\t--> Attempts left: %d", attempts);
     printf("\n\nDo you want to continue?\n\t if YES the press 1 if NO then press 0: ");
     scanf("%d", &play_again);
       
   }while(play_again == 1);

   

   
   return 0;

}