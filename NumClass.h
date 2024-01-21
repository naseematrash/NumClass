#ifndef NUMCLASS_H 
#define NUMCLASS_H
#define FALSE 0
#define TRUE 1

int isArmstrong(int);
int isPalindrome(int);
int isPrime(int);
int isStrong(int); 

/*
 * input[number,power]
 *  calculate the sum digit to the power;
 */
int power(int, int);

/*
 *getting a number and reverse its secqence like a mirror
 *recursivly
*/
int flipping(int num , int num2);

/*
helper function for isarmstrong that uses flipping and power functions
recursivly
*/
int Armstrong(int num, int counter);


#endif