#include<stdio.h>
int main(void)
{
	int fp,rm,ac;

	printf("Is fingerprint match : ");
	scanf("%d", &fp);
	
	printf("Is retinal match : ");
	scanf("%d", &rm);

	printf("Is access card is valid : ");
	scanf("%d", &ac);

	int a = ((fp&&rm)||(fp&&ac)||(rm&&ac));

	if (a==1){
		printf("Access Granted\n");
	}
	else {
		printf("Access Denied\n");
	}

	return 0;


}
