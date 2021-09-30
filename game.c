/* 1. Ask for input from the user
big while loop
main menu
take in arguements 1,2,or 3 via scan
big while loop
1 starts the game
2. increases the max num
3 ends program

while(1)
ask for a number 1 - 10
scan for answer
run a random num generator from 0-9 +1 (rand() % 9) +1
compare the answers
if correct this while loop ends and we end up back at main menu
else "too low/high" continues while loop
else if enter q while loop ends

while(2)
print current max and scan for new max 0 <= x <= max (10)
ends goes back to guessing (while(1))

while(3)
print out game over 
ends 
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main(int argc, char *argv[]){
    int max = 9;
    int randNum;
    int rand_max = 9;
    char ansStr[1];
    int ans;
    int guess;
    do{
        printf("MAIN MENU\n************************\nChose One of the following:\n1: Start the game\n2. Set max number\n3. Quit game\n");
        
        scanf("%d", &ans);
        scanf("%c", ansStr);
        //compare these??
        if(ans == 1){
            
            do{
                srand(time(0));
                randNum = rand() % max + 1;
                printf("Enter a number between 1 and 10\n");
                scanf("%d", &guess);
            
                if(guess+1 > randNum){
                    
                    printf("\noops too high! Try again: \n");
                } else if(guess+1 < randNum){
                   
                    printf("Oops too low! Try again: \n");
                }
            }while(guess+1 != randNum);
            printf("You guessed %i\n", guess);
            printf("Well done! You guessed correctly!\n");
        }
         else if(ans == 2){
            printf("Choose a new max between 1-10\n");
            scanf("%d", &max);
            while(max-1 < 0 && max-1 > 9){
                printf("The number you have chosen is %d. This number is out of bounds \n", max);
                printf("Please choose a new max between 1-10\n");
            }
            printf("The new max is %i.", max);
        }
           
        else if(ans == 3 || ansStr[1] == 'q'){
            //TODO game over script
           // printf("");
        }
    
    }while(ans == 1 || ans == 2);
    //print another game over statement here
}