#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int num;

void Even(int num) {
	static int s_Total = 0;
	s_Total++;
	printf("Ȧ�� �Է�, �� Ȧ�� Ƚ��: %d\n", s_Total);
}
void Odd(int num) {
	static int s_Total = 0;
	s_Total++;
	printf("¦�� �Է�, �� ¦�� Ƚ��: %d\n", s_Total);
}

		
int main() {
		while (1) {
			printf("������ �Է��ϼ���. > ");
			scanf("%d", &num);
            if (num == 0) break;
			else if (num %2== 0) {
				
				Odd(num);
			}
			else if (num %2 != 0) {
			
				Even(num);
			}
			
		}
		return 0;
	}
