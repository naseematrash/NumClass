#include <stdio.h>
#include"NumClass.h"

//power function 
int power(int a,int b){
    int sum=1;
    for(int i=0;i<b;i++){
        sum*=a;
    }
    return sum;

}

int isArmstrong(int num){

    int num2=num ;
    int num3=num;

    int counter=0;
    
    //checking the num digit count
    while(num2>0){
        counter++;
        num2/=10;
    }

    int sum =0;

    // power of every digit and adding it to sum 
    while (num3>0)
    {
        int digit=num3%10;
        sum+=power(digit,counter);
        num3/=10;
    }

    
    if(sum == num){
        return TRUE;
    }
    return FALSE;
    
}

int isPalindrome(int num){
  
    int num2 = 0; 
  
    int tmp = num; 
  
    while (tmp != 0) { 
        int digit = tmp % 10; 
        num2 = num2 * 10 + digit; 
        tmp /= 10; 
    } 
  
    if (num == num2) { 
        return TRUE; 
    } 
    else { 
       return FALSE;
    } 
    
}

