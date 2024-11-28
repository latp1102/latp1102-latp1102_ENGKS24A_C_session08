#include<stdio.h>

int main(){
	int arr[2][3] = {{1,2,3},{4,5,6}};
	
	printf("%d %d %d %d %d %d",arr[1][2],arr[1][1],arr[1][0],arr[0][2],arr[0][1],arr[0][0]);
	
	return 0;
}

