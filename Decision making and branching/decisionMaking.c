#include <stdio.h>
#include <stdlib.h>

int main(){
    /*Creation of code relies on technology's ability to efficiently perform tasks. This is further 
    enhenced by giving this in animate creation the ability to make decisions. This brings in the following modules.*/


        /*We'll make use of the IF statement to turn on the ligts in a house if the natural light intensity goes below
        5 otherwise lights stay off*/
    int sunIntensity;
    printf("Enter light intensity on a scale from 0-10: ");
    scanf("%d",&sunIntensity);

    if(sunIntensity==0){ //This is a simple if statement. The lights will turn on at 0. At any other value, they will not
        printf("Lights: ON \nBrightness:FULL\n");
    }else if(sunIntensity >=5){ //This is an else if statement. We did cater for the intensity being 0 but what about other values? That is catered for by the else if
        printf("Lights: OFF \nBrightness: OFF\n");
    }else if(sunIntensity <5){
        printf("Lights: ON \nBrightness: MODERATE\n");
    }

        /*The same result can be achieved by tweaking the variables a little bit and using the switch case statements*/

    int brightness;
    printf("Enter the desired brightness between 1 and 3: ");
    scanf("%d",&brightness);

    switch (brightness)
    {
    case 1:
       printf("\nBrightness:LOW\n");
        break;
    case 2:
    printf("\nBrightness:MODERATE\n");
        break;
    case 3:
    printf("\nBrightness:FULL\n");
        break;
    default:
    printf("\nEnter an appropriate value\n");
        break;
    }

    //We can also use a conditional operator(?) for certain functions

    int a = 10;//sets a
    int b = 20;//sets b
    int c = (a<b)? a:b;//sets c depending on the true or false nature of the statement true:false
    
    printf("%d", c); //Output is 10 because the expression is true. a is less than b

    
}