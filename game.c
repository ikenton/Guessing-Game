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
    
    char ans[1];
    do{
        printf("MAIN MENU\n************************\nChose One of the following:\n1: Start the game\n2. Set max number\n3. Quit game\n");
        
        scanf("%s", ans);
        while(ans == '1'){
            srand(time(0));

            randNum = and()%max +1;
        }

        while(ans== '2'){

        }
        while(ans == '3' || ans == 'q'){

        }

    }while(ans == '1' || ans == '2');
    
}