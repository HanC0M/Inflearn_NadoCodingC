#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MAX 10000
int main() {
	// ���� �����
	// ���Ͽ� � �����͸� ����
	// ���Ͽ� ����� �����͸� �ҷ�����

	// fputs, fgets -> ���ڿ�
	// char line[MAX];

	//���Ͽ� ����
	/*FILE* file = fopen("C:\\Users\\kohpn\\Documents\\test1.txt", "wb");
	if (file == NULL) {
		printf("���� ���� ����!\n");
		return 1;
	}*/

	// ���� �ҷ�����
	/*FILE* file = fopen("C:\\Users\\kohpn\\Documents\\test1.txt", "rb");
	if (file == NULL) {
		printf("���� ���� ����!\n");
		return 1;
	}

	while (fgets(line, MAX, file) != NULL) {
		printf("%s", line);
	}
	fclose(file);*/

	// fprintf, fscanf -> ����ȭ�� ����
	int num[6] = { 0,0,0,0,0,0 }; // ��÷ ��ȣ
	int bonus = 0; // ���ʽ� ��ȣ
	char str1[MAX];
	char str2[MAX];
	FILE* file = fopen("C:\\Users\\kohpn\\Documents\\test2.txt", "rb");

	// ���Ͽ� ����
	/*if (file == NULL) {
		printf("���� ���� ����!\n");
		return 1;
	}

	// �ζ� ��÷ ��ȣ ����
	fprintf(file, "%s %d %d %d %d %d %d\n", "��÷��ȣ", 1, 2, 3, 4, 5, 6);
	fprintf(file, "%s %d\n", "���ʽ� ��ȣ", 7);*/

	// ���� �б�
	if (file == NULL) {
		printf("���� ���� ����!\n");
		return 1;
	}

	// �ζ� ��÷ ��ȣ ����
	fscanf(file, "%s %d %d %d %d %d %d\n", str1, &num[0], &num[1], &num[2], &num[3], &num[4], &num[5]);
	printf("%s %d %d %d %d %d %d\n", str1, num[0], num[1], num[2], num[3], num[4], num[5]);

	fscanf(file, "%s %d\n", str2, &bonus);
	printf("%s %d\n", str2, bonus);

	fclose(file);

	return 0;
}