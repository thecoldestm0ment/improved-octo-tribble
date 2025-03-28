#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int num;

void Even(int num) {
	static int s_Total = 0;
	s_Total++;
	printf("È¦¼ö ÀÔ·Â, ÃÑ È¦¼ö È½¼ö: %d\n", s_Total);
}
void Odd(int num) {
	static int s_Total = 0;
	s_Total++;
	printf("Â¦¼ö ÀÔ·Â, ÃÑ Â¦¼ö È½¼ö: %d\n", s_Total);
}

		
int main() {
		while (1) {
			printf("Á¤¼ö¸¦ ÀÔ·ÂÇÏ¼¼¿ä. > ");
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
