#include<stdio.h>

/*Given an array of integers where every integer occurs three times except for one integer, 
which only occurs once, find and return the non-duplicated integer.
For example, given [6, 1, 3, 3, 3, 6, 6], return 1. Given [13, 19, 13, 13], return 19.*/

int main(){
	
	int n,i,j;
	printf("Enter size of array:");
	scanf("%d",&n);
	int array[n];
	printf("Enter elements of array:\n");
	for(i=0;i<n;i++){
		scanf("%d",&array[i]);
	}
	printf("\n[");
	for(i=0;i<n;i++){
		printf("%d",array[i]);
		if(i<n-1){
			printf(",");
		}
	}
	printf("]");
	
	int count=0,k,l;
	for(i=0;i<n;i++){
		k=array[i];
		for(j=0&&j!=i;j<n;j++){
			if(array[j]==k){
				count++;
			}
		}
		if(count!=3){
			printf("\n%d",k);
			break;
		}
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
