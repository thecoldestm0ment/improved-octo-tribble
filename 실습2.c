#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int g_Balance = 0;
int input;

int Deposit(int input) {
	static int s_Total = 0;
	g_Balance += input;
	s_Total += input;
	printf("�Ա�: %d��, ���Աݾ�: %d��, �ܰ�: %d��\n", input,s_Total, g_Balance);
	return g_Balance;
}
int Withdraw(int input) {
	static int s_Total = 0;
	g_Balance -= input;
	s_Total += input;
	printf("���: %d��, ����ݾ�: %d��, �ܰ�: %d��\n", input,s_Total, g_Balance);
	return g_Balance;
}

int main() {
	while (1) {
		printf("����ݾ��� �Է��ϼ���. > ");
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
