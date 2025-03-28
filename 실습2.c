#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int g_Balance = 0;
int input;

int Deposit(int input) {
	static int s_Total = 0;
	g_Balance += input;
	s_Total += input;
	printf("입금: %d원, 총입금액: %d원, 잔고: %d원\n", input,s_Total, g_Balance);
	return g_Balance;
}
int Withdraw(int input) {
	static int s_Total = 0;
	g_Balance -= input;
	s_Total += input;
	printf("출금: %d원, 총출금액: %d원, 잔고: %d원\n", input,s_Total, g_Balance);
	return g_Balance;
}

int main() {
	while (1) {
		printf("입출금액을 입력하세요. > ");
		scanf("%d", &input);

		if (input > 0) {
			Deposit(input);
			continue;
		}
		else if (input < 0) {
			Withdraw(-input);
			continue;
		}
		else if (input == 0) break;
	}
	return 0;
}
