#include<stdio.h>
//my clcultor in c 

//declring variables
int main (){
	
	int firstNumber,secondNumber, add,sub,div,mul,mod;
	
	//gettinguser input 
	printf("Enter first Number: \n");
	scanf("%d",&firstNumber);
	
	printf("Enter firstNumber: \n");
	scanf("%d",&secondNumber);
	
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

