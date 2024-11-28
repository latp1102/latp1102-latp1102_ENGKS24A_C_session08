
#include<stdio.h>

int main(){
	int num[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int i, j;
	int n = 0;
	
	for(i = 0;i < 3;i++){
		n = n + num[i][0];
	}
	for(i = 0;i < 3;i++){
		n = n + num[i][2];
	}
	n = n + num[0][1] + num[2][1];;
	printf("Tong so duong bien: %d\n",n);

	return 0;
}

