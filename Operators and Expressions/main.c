#include <stdio.h>
#include <stdlib.h>

//The focus of this folder will be expressions and Operators
int main(){
    //We first look at arithmetic operators
        //We have + used for simple addition 
    int num1 = 60;
    int num2 = 30;
    int sum = num1 + num2;
    printf("The Sum of add1 and add2 is %d\n", sum);

        //Using the same values of a and b. We can also perform subtraction -
    int diff = num1 - num2;
    printf("The Difference between num1 and num2 is %d\n",diff);

        //We have * the asteric for multiplicaton
    int prod = num1 * num2;
    printf("The product of a and b is %d\n",prod);

        //We have / the forward slash for division
    int div = num1 / num2;
    printf("The division of num1 by num2 is %d\n",div);

        /*We have % the percentage sign for modulo division. 
        Modulo division saves the remainder of the division
        instead of the whole value. The values for this example will be overwritten */

    int mod1 = 5;
    int mod2 = 3;
    int result= mod1 % mod2;
    printf("Modulo division of mod1 and mod2 is %d\n",result);



}