#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char str[128] = "abcdefghijklmnopqrstuvwxyz0123456789";
	for (int i = 0; i < 128; i++)
	{
		if (str[i] == NULL)
		{
			printf("���ڿ��� ����: %d", i);
			break;
		}
	}
	return 0;
}