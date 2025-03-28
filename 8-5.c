#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int i=0, j=0;
	int arr[4][3] = { 
		{100,100,40} ,
		{80, 70, 80}, 
		{70, 80, 80}, 
		{80, 60, 100} 
	};
	
	for (; j < 4; j++)
	{
		int sum = arr[j][0] + arr[j][1] + arr[j][2];
		printf("%d¹ø ÃÑÁ¡: %d", j, sum);
		printf("\n");
	}
	for (; i < 3; i++)
	{
		double avg = (arr[0][i] + arr[1][i] + arr[2][i] + arr[3][i]) / 4.0;
		switch(i){
		case(0): printf("±¹¾î Æò±Õ: %lf",avg); break;
			case(1): printf("¿µ¾î Æò±Õ: %lf",avg); break;
			case(2): printf("¼öÇÐ Æò±Õ: %lf",avg); break;

		}
	
		printf("\n");
	}
}