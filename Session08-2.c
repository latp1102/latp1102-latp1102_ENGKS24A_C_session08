#include<stdio.h>

int main(){
	int num[5] = {1,2,3,4,5,};
	int n;
	int i;
	int cout = 0;
	printf("Moi ban nhap vao 1 phan tu bat ki: ");
	scanf("%d",&n);
	
	for(i = 0;i < n;i++){
		if(n == num[i]){
			printf("vi tri phan tu trong mang %d: ",i+1);
			cout = 1;
		}
	}
	if(cout == 0){
		printf("Phan tu khong co trong mang: ");
	}
	
	return 0;
}
