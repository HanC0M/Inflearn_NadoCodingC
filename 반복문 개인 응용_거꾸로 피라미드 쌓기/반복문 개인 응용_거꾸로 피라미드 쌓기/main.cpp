// �Ųٷ� �� �Ƕ�̵��� ���� �Է¹޾� ��������
// ����� õ������
/*
*******
 *****
  ***
   *
*/
#include<stdio.h>
int main(void) {
	int floor;
	printf("�� ���� õ�� ������ ������̳�?\n");
	scanf("%d", &floor); //���� �Է¹���
	
	/*for (int i = 0; i < floor; i++) {		// ����ŭ ���� ������
		for (int j = 0; j <= i - 1; j++) { // ������ �����ϴ� �ݺ���.
			printf(" ");
		}
		for (int k = 0; k<2 * (floor - i) - 1; k++)
		{
			printf("*");
		}
			printf("\n");
	}*/
	for (int i = 0; i < floor; i++) {
		for (int j = 0; j <= i - 1; j++) {
			printf(" ");
		}
		for (int k = 0; k < 2 * (floor - i) - 1; k++) {
			printf("*");
		}
		printf("\n");
	}



	return 0;
}