#include<stdio.h>

int main(){

	int a[] = {1,5,2,3,23,5,1,2};
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
