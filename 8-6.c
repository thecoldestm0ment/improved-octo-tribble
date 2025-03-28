#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	printf("방 번호, 시기, 인원수를 입력하세요.\n");
	
	int a, b, c;
	int arr[3][5] = {
	{2,3,30000,50000,5000},
	{4,7,70000,110000,10000},
	{8,12,120000,170000,15000} };

	while (1)
	{
		scanf("%d %d %d", &a, &b, &c);
		if (arr[a - 1][1] < c) {
			printf("최대 인원수를 초과했습니다. 다시 입력해주세요.\n");
			continue;
		}

		a = a - 1;
		int cost = (c - arr[a][0]) * arr[a][4];
		if (b == 1)
		{
			printf("숙박요금: %d", arr[a][2] + cost);
		}
		else if (b == 2)
		{
			printf("숙박요금: %d", arr[a][3] + cost);
		}
		break;
	}
	return 0;
}