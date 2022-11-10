#include <stdio.h>
#include <stdlib.h>

int main(){
/*Sometimes we need to perform an aaction more than once. In this case we employ the use of
 a loop to perform the said action as many times as we need or until a certain criterion/criteria is met*/

//Lets create a program to print out numbers in a sequence using the various looping statements
    //while Loop

    int repeats = 5;
    int counter = 1;

    while(counter <= repeats){
        printf("%d\n",counter);
        counter++;
    }
    printf("\n");
    /* The above code prints out 
    1
    2
    3
    4
    5
    This numbers are basically the number of times the code has been done which is 5 times.
    The repeats variable is how many times the code is suposed to run. The counter is printed
    out everytime the code is run. This code can be tweaked to perform many other functions.*/


    //Do...while

    int repeats_do = 5;
    int counter_do = 1;
    do{
        printf("%d\n",counter_do);
        counter_do++; 
    } while(counter_do <= repeats_do);

    printf("\n");
    //for loop

    int repeats_for = 5;
    for (int counter_for = 1; counter_for < repeats_for; counter_for++){
            printf("%d\n",counter_for);
    }

}