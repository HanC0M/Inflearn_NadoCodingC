#include<stdio.h>

int main(void) {
	// �迭
	/*
	int subway_1 = 30; // ����ö 1ȣ���� 30���� Ÿ�� �ִ�
	int subway_2 = 40;
	int subway_3 = 50;

	printf("����ö 1ȣ���� %d���� Ÿ�� �ֽ��ϴ�\n", subway_1);
	printf("����ö 2ȣ���� %d���� Ÿ�� �ֽ��ϴ�\n", subway_2);
	printf("����ö 3ȣ���� %d���� Ÿ�� �ֽ��ϴ�\n", subway_3);
	*/

	// ���� ���� ������ �Բ�, ���ÿ� ����
	/*
	int subway_array[3];
	subway_array[0] = 30;
	subway_array[1] = 40;
	subway_array[2] = 50;

	for (int i = 0; i < 3; i++) {
		printf("����ö %dȣ���� %d���� Ÿ�� �ֽ��ϴ�.\n", i + 1, subway_array[i]);
	}
	*/

	// �� ���� ���
	/*
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 }; // ���� ������ �ʱ�ȭ�� �ؾ� ��
	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}
	*/
	
	// �迭 ũ��� �׻� ����� ����
	/*
	int size = 10;
	int arr[size];
	*/

	// �迭�� �ʱ�ȭ (�ϳ��� �ʱ�ȭ �Ǿ��� ��� �������� 0���� �ڵ� �ʱ�ȭ��)
	/*
	int arr[10] = { 1,2 };
	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}
	*/

	// int arr[]={1,2}; // arr[2]

	// ���ڿ� ���ڿ�
	
	/*
	char c = 'A';  // ����
	printf("%c\n", c);
	*/
	// ���ڿ� ������ '��'�� �ǹ��ϴ� NULL ���� '\0'�� ���ԵǾ�� ��
	/*
	char string[7]="coding"; // [c][o][d][i][n][g][\0]
	printf("%s\n", string);

	char str[] = "coding";
	printf("%d\n", sizeof(str));

	for (int i = 0; i < sizeof(str); i++) {
		printf("%c\n", str[i]);
	}
	*/

	// ���� 1���� = 1����Ʈ, �ѱ� 2���� = 2����Ʈ
	// char �ڷ��� ũ�� : 1byte
	
	// ���ڿ� ��ȭ
	/*
	char c_array[7] = { 'c','o','d','i','n','g','\0' };
	printf("%s\n", c_array);
	*/
	/*
	char c_array[10]= { 'c','o','d','i','n','g' };
	printf("%s\n", c_array);
	
	for (int i = 0; i < 10; i++) {
		printf("%c\n", c_array[i]);
	}
	
	for (int i = 0; i < 10; i++) {
		printf("%d\n", c_array[i]); // ASCII�ڵ� ���
	}
	*/

	return 0; 
}