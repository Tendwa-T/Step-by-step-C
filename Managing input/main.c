#include <stdio.h>
#include <stdlib.h>

int main(){
/*Most programs take input during runtime unlike what we do, passing data in compile time.
The following are some of the ways of attaining data during runtime from the user. */

    int num1;
    int num2;

        //scanf() gets input from the keyboard. The program pauses and waits for the input followed by an enter press.
            //Numericals
    printf("Enter num1: ");
    scanf("%d", &num1);

    printf("Enter num2: ");
    scanf("%d", &num2);
    int sum = num1 + num2 ;

    printf("Sum = %d\n", sum);

            //Alphabets/Strings
    char name[20];
    printf("Enter your name: ");
    scanf("%s", &name);
    printf("%s",name);  

       /*  scanf() only takes one word from a sentence that is passed to it so one can only put one name. To combat
       that, we use gets()/ fgets to get longer strings from the user. */

    // char greetings[100];
    // FILE *stream;
    // printf("\nEnter your greetings: ");
    // fgets(greetings,99,stream);

    // printf("%s", greetings);
}