#include <stdio.h>
#include"NumClass.h"




int isPrime(int num) {
    if (num == 1 || num == 2) {
        return TRUE;
    }
    if (num % 2 == 0) {         //Checking if number divisible by 2
        return FALSE;
    }
    for (int i = 3; i <= sqrt(num); ++i) {      //Looping on all number in range [3,sqrt(number)]
        if (num % i == 0) {         //Checking if the number is divisible by any number of this range then will return False
            return FALSE;
        }
    }
    return TRUE;        //Otherwise, return True
}

int isStrong(int num){

    int sum=0;
    int tmp=num;

    while(tmp>0){
        int fac= tmp%10;
        int facNum=1;
        
        while(fac>0){
            facNum*=fac;
            fac-=1;
        }
        sum+=facNum;
        tmp/=10;
    }
    if(num==sum){
    return TRUE;
    }
return FALSE;
}

