#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    /* a program that determines the dividend  a member  gets, the dividends 
    is based on the shares the member holds(use else if ladder) 
        Shares                 dividend
        Above 100k          5% of share
        50k-100k            4% of share
        Below 50k           2% of share

    */
    float dividend;
    char fname[24];
    printf("Enter first name: ");
    scanf(" %s",&fname);
    
    char lname[24];
    printf("Enter last name: ");
    scanf(" %s",&lname);


    int memberID;
    printf("Enter your MemberID: ");
    scanf("%d", &memberID);

    float shares;
    printf("Enter your shares: ");
    scanf("%f", &shares);
    
    if (shares >100000)
    {
        dividend = shares * 0.05;
    }else if(shares >= 50000)
    {
        dividend = shares * 0.04;
    }else if(shares < 50000)
    {
        dividend = shares * 0.02;
    }

    printf("Member name: %s\nMemberID: %d\nShares: %.2f\nDividend: %.2f",strcat(fname,lname),memberID,shares,dividend);
    
}