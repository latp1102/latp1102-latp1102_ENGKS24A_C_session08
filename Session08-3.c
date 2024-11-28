#include<stdio.h>

int main(){
	int a, b;
	int n;
	
	printf ("Moi ban nhap vao 1 so nguyen: ");
	scanf("%d",&n);

	int num[n][n];
	
	int i, j;
	for(i = 0;i < n;i++){
		for (j = 0;j < n;j++){
			printf("so hang %d, so cot %d: \n");
			num[i][j] = 3;
		} 
	} 
	for(i = 0;i < n;i++){
		for (j = 0;j < n;j++){
			printf("%d ", num[i][j]);
		} 
		printf("\n");
	} 
	printf("ma tran %d ");
	return 0;
}

