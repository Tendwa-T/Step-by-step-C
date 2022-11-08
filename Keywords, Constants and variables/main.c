#include <stdio.h>

int main(){

    // Here we will look at Various Keywords
    int num1 = 10;  //int is a keyword that denotes a numerical value
    int num2 = 20; //num1, num2, num3 are all variable names and denote to a special memory location where the data can be found,retrieved, worked on and stored.
    int numAdd = num1+num2;
    printf("Total is %d\n",numAdd);//%d is a place holder for digits or numerical values to be printed out


    char letter = 'p'; //char is a keyword used to denote letters
    printf("The letter is %c\n",letter);//%c is a place holder for alphabets to be printed out

    //We can also have strings
    char name[20]="John Doe";//We have arrays to be discussed abit later on but this is one of the ways of getting to see text as ooutput in C
    printf("My name is %s\n",name);

    for(int i=0;i<20;i++){
        printf("%c",name[i]);//Loops can be used to iterate through everything. This will also be looked at in depth further along the review.
    }
    printf("\n");

    int radius = 7;
    const int pi = (22/7);//constants denote values that will not change through out the program. They can be declared right before they are used or at the very top of the code to make maintainance easier.
    int areaOfCircle = radius*radius*pi;

    printf("The area of the Circle is %d", areaOfCircle);

}