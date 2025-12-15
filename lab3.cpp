#include <stdio.h>

int main () {
	int score, more;
	
	
	scanf("%d",&score);
	
	if (score >= 68) {
		if (score >= 85){
			printf("A");
		}else{
			if (score >= 75){
				printf("B");
			}else{
				more = 75 - score;
				printf("C \nYou Need More %d to B", more);
			}
		}
	} else {
		if (score >= 55){
			printf("D");
		}else{
			printf("F");
		}
	}
}
