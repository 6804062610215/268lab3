#include <stdio.h>
int main() {
	int score, printFlag;
	
	scanf("%d",&score);
	
	if (score >= 40){
		printFlag = 1;
	}else{
		if (score < 30) {
			printFlag = 2;
		}else{
			printFlag = 0;
		}
	}
	
	switch (printFlag) {
		case 1: printf("Pass \n"); break;
		case 2: printf("False : %d \n", 40-score); break;
		default: printf("you can test again \n");
	} 
	
	printf("See you again \n");
}
