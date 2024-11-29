#include<stdio.h>

int main(){

	int a[] = {1,2,1,2,3,4,7,8};
	int maxCount;
	int maxItem;
	int lengthA = sizeof(a) / sizeof(a[0]);
	for(int i = 0; i < lengthA;i++){
		int count = 0;
		for(int j = 0;j < lengthA;j++){
			if(a[i] == a[j]){
				count++;
			}
		}
		if(count > maxCount){
			maxCount = count;
			maxItem = a[i];
		}
	}
	printf("phan tu co gia tri la: %d xuat hien so lan nhieu nhat %d",maxItem,maxCount);
	
	
	return 0;
}
