#include <stdio.h>
#include <stdlib.h>

/*This file focuses on Relational Operators and will use a simple age checker program
to demonstrate*/
int main(){
    int age;
    printf("Enter Your age: ");
    scanf("%d",&age);

    if (age > 18){ //> is greater than. Its corresponding sign is >= which denotes greater than or equal to
        printf("\nYou are above legal age\n");
    }else if(age == 18){ //== is the equality sign
        printf("\nYou are of legal age\n");
    }else if(age < 18){ //< is the less than sign.Its corresponding sign is <= which denotes less than or equal to
        printf("\nYou are below legal age\n");
    }
}
