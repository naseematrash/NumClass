#include <stdio.h>
#include"NumClass.h"


/*
counting the number length recusivly
*/
int numlength(int n) 
{ 
    if (n/10 == 0) 
        return 1; 
    return 1 + numlength(n / 10); 
} 


//power function 
int power(int a,int b){
    int sum=1;
    for(int i=0;i<b;i++){
        sum*=a;
    }
    return sum;

}

/*
getting a number and reverse its secqence like a mirror
*/

int flipping(int num , int num2){
if(num == 0){
        return num2;
    }
    num2 = num2 * 10 + (num%10); 
    num = num/10;

    return flipping(num, num2);
}

int isPalindrome(int num){
    int num2=0;
    num2=flipping(num,num2);  //using the function flipping who is checking the requirment by recurstion
    
    if(num == num2){
        return 1;
    }
    return 0;
}

/*
helping function for isarmstrong function
*/
int Armstrong(int num, int counter) {
if (num == 0){
return FALSE;
}
else{
return power(num % 10, counter) + Armstrong(num / 10, counter);  //each time we take a digit from the whole number and we power it to the length of our whole number (digit count)
}
}


int isArmstrong(int num){

int counter = numlength(num); //using the function numlength counting the number length recusivly

if(Armstrong(num,counter)== num){
    return TRUE;
}
return FALSE;
}

