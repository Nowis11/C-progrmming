#include<stdio.h>
//my clcultor in c 

//declring variables
int main (){
	
	int firstNumber = 100;
	int secondNumber = 20;
	int add,sub,div,mul,mod;
// calculting	
	add = firstNumber + secondNumber;
	sub = firstNumber - secondNumber;
	mul = firstNumber * secondNumber;
	div = firstNumber / secondNumber;
	mod = firstNumber % secondNumber; 
	//printing
        	printf("The sum is %d\n",add);
        	printf("The sub is %d\n",sub);
         	printf("The mul is %d\n",mul);
           	printf("The div is %d\n",sub);
           	printf("The mod is %d\n",mod);
	return 0;
}

