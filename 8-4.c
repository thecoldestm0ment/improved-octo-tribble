#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int arr[] = { 3,5,1,0,9,8,2,6,4,7 };
	int i;
	int max = arr[0], min = arr[0];
	for (i = 0; i<sizeof(arr)/sizeof(int); i++)
	{
		if (max < arr[i])
			max = arr[i];
		if (min > arr[i])
			min = arr[i];
		
		
	}
	printf("Min: %d, Max: %d", min, max);
return 0;
}