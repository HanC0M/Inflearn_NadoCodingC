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
	return 0;
}