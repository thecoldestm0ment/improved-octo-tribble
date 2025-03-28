#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int g_Sum = 0;
int num;

void add(int num) {

	g_Sum += num;

	static int plus[100];
	static int p_index = 0;
	static int minus[100];
	static int m_index = 0;
	
	if (num > 0) {
		plus[p_index++] = num;
	}
	else { 
		minus[m_index++] = num;
	}

	printf("(");
	for (int i = 0; i < p_index; i++) {
		if (i == 0) {
			printf(" %d ", plus[i]);
		}
		else printf("+ %d ", plus[i]);

	}
	printf(")");

	if (m_index != 0) {
		printf(" - "); 
		
		printf("(");
	for (int i = 0; i < m_index; i++) {
		if (i == 0) {
			printf(" %d ", -minus[i]);
		}
		else printf("+ %d ", -minus[i]);

	}
	printf(")");

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