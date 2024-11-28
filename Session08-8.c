#include<stdio.h>


int main(){
	int num[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	printf("Cac phan tu duong cheo phu: ");
	int sum = 0;
	
	for (int i = 0; i < 3; i++) {
        printf (" %d",num[i][2-i]);
        sum += num[i][2-i];
    }
    
	printf("\nTong cac phan tu cheo phu: %d",sum);
	return 0;
}
