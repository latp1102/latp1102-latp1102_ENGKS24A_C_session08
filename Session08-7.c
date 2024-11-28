#include<stdio.h>

int main(){
	int num[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	printf("cac phan tu duong cheo chinh: ");
	int sum = 0;
	
	for (int i = 0; i < 3; i++) {
        printf (" %d",num[i][i]);
        sum += num[i][i];
    }
    printf("\n");
    
	printf("\nTong cac phan tu cheo chinh la: %d",sum);
	return 0;
}
