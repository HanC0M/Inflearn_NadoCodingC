#include<stdio.h>

// ����
void p(int num);
void function_without_return();
int function_with_return();
void function_without_param();
void function_with_param(int num1, int num2, int num3);
int apple(int num1, int num2);
int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);

int main(void) {
	// �Լ�
	// ����
	/*
	int num = 2;
	p(num);

	// 2+3��?
	num = num + 3;
	p(num); //5

	// 5-1��?
	num -= 1;
	p(num); //4

	// 4x3��?
	num *= 3;
	p(num); //12

	// 12/6��?
	num /= 6;
	p(num); //2
	*/

	// �Լ� ����
	// ��ȯ���� ���� �Լ�
	/*
	function_without_return();
	*/

	// ��ȯ���� �ִ� �Լ�
	/*
	int ret = function_with_return();
	p(ret);
	*/

	// �Ķ����(�Ű�����)�� ���� �Լ�
	/*
	function_without_param();
	*/

	// �Ķ����(�Ű�����)�� �ִ� �Լ�
	/*
	function_with_param(24,25,62);
	*/

	// �Ķ����(�Ű�����)�� �ְ�, ��ȯ���� �ִ� �Լ�
	/*
	int ret = apple(5,2); // 5���� ����߿� 2���� �Ծ���.
	// printf("��� 5�� �߿� 2���� ������ %d���� ���ƿ�\n",ret);
	printf("��� %d�� �߿� %d���� ������ %d���� ���ƿ�\n", 10, 4, apple(10, 4)); // printf�������� �Լ��� ���
	*/

	// �Լ��� �̿��� ����
	/*
	int num = 2;
	num = add(num, 3);
	p(num);

	num = sub(num, 1);
	p(num);

	num = mul(num, 3);
	p(num);

	num = div(num, 6);
	p(num);
	*/


	return 0;	
}

// ����
void p(int num) {
	printf("num�� %d�Դϴ�\n", num);
}

void function_without_return() {
	printf("��ȯ���� ���� �Լ��Դϴ�\n");
}
int function_with_return() {
	printf("��ȯ���� �ִ� �Լ��Դϴ�\n");
	return  10;
}
void function_without_param() {
	printf("�Ű������� ���� �Լ��Դϴ�\n");
}
void function_with_param(int num1, int num2, int num3) {
	printf("�Ű������� �ִ� �Լ��̸�, ���� %d, %d, %d �Դϴ�.\n", num1, num2, num3);
}
int apple(int num1, int num2) {
	return num1 - num2;
}
int add(int num1, int num2) {
	return num1+num2;
}
int sub(int num1, int num2) {
	return num1 - num2;
}
int mul(int num1, int num2) {
	return num1 * num2;
}
int div(int num1, int num2) {
	return num1 / num2;
}

// �Լ��� �⺻ ����
/*
��ȯ�� �Լ��̸�(�Ű�����){

}
*/