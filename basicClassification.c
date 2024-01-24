#include <stdio.h>
#include"NumClass.h"




int isPrime(int num){

    if(num ==2 || num<=0){
        return FALSE;
    }
    for(int i=2;i<num;i++){
        if(num%i==0){
            return FALSE;
        }
    }
    return TRUE;
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

