#include<stdio.h>
int main(void)
{
	int m1,m2,m3;

	printf("Enter 1st subject section 1 = ");
	scanf("%d", &m1);

	printf("Enter 2nd subject section 2 = ");
	scanf("%d", &m2);

	printf("Enter 3rd subject section 3 = ");
	scanf("%d", &m3);
	
	float a = (m1+m2+m3)/3;
	int p = (70<=m1) && (70<=m2) && (70<=m2) && (75<=a);

	if  (p == 1){
		printf("Pass\n");
	}
	else{
		printf("Fail\n");
	}
	return 0;


}
