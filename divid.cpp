#include<stdio.h>
#include<Windows.h>

int findnum(int *arr,int min,int max,int num){

	if(min>max) return -1;//不满足条件时直接返回
	
	int mid = (min+max)/2;

	if(num<arr[mid]){

		return findnum(arr,min,mid-1,num);
		
	}else if(num>arr[mid]){

		return findnum(arr,mid+1,max,num);
		
	}else{

		return mid;
		
	}
			
}


int main(void){

	int arr[]={1,3,6,7,16};

	int index = findnum(arr,0,4,16);

	printf("index:%d\n",index);

	system("pause");
	return 0;

	}