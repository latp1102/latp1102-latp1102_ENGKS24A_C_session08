#include<stdio.h>

int main(){
	int num[2][3] = {{1,2,3},{4,5,6}};
	int i, j;
	
	int n=0;
	int max = num[0][0];
	
	
	for(i = 0;i < 2;i++){
		for(j = 0;j < 3;j++){
			if(num[i][j] > max){
				max = num[i][j];
			}
		}
	}
	printf("Gia tri lon nhat: %d\n",max);
	
	
	return 0;
}
