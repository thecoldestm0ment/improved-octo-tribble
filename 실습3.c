#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int g_Sum = 0;
int num;

void add(int num) {
	static int index=0;
	static int arr[100];

	g_Sum += num;
	arr[index] = num;
	index++;
	for (int i = 0; i < index; i++) {
	
		if (i == 0) {
			printf("");
        }
         else if (arr[i] > 0) {
				printf(" +");
	     }
		else if (arr[i] < 0) {
				printf(" -");
		}
		
		printf(" %d", arr[i] > 0 ? arr[i] : -arr[i]);
	}
printf(" = %d\n", g_Sum);
}

int main() {
	while (1) {
		printf("더할 수를 입력하세요 > ");
		scanf("%d", &num);
		
		if (num != 0) {
			add(num);
		}
		else if (num == 0) break;
	}
	return 0;
}