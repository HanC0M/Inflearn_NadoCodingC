#include<stdio.h>

// ����
void p(int num);
void function_without_return();
int function_with_return();

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
// �Լ��� �⺻ ����
/*
��ȯ�� �Լ��̸�(�Ű�����){

}
*/