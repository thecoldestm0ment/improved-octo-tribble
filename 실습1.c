#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int g_Balance = 0;
int input;

int Deposit(int input){
	g_Balance += input;
	printf("�Ա�: %d��, �ܰ�: %d��\n",input,g_Balance);
	return g_Balance;
}
int Withdraw(int input) {
	g_Balance -= input;
	printf("���: %d��, �ܰ�: %d��\n", input, g_Balance);
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
		else if(input==0) break;
	}
	return 0;
}
