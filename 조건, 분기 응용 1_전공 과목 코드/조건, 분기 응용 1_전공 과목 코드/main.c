// ���� ���� �ڵ带 �Է¹޾� 1�̸� ����, 2�̸� ����, 3�̸� ��� ǥ���ϴ� ���α׷��� ���弼��.

#include<stdio.h>
int main(void) {
	int code = 0;
	printf("���� �ڵ带 �Է��ϼ���.\n1-����\n2-����\n3-����\n");
	scanf("%d", &code);

	// if��
	/*if (code == 1) {
		printf("����\n");
	}
	else if (code == 2) {
		printf("����\n");
	}
	else if (code == 3) {
		printf("����\n");
	}
	else {
		printf("�߸��� ���� �ԷµǾ����ϴ�.\n");
	}*/
	
	// switch��
	switch (code)
	{
	case 1:printf("����\n");
		break;
	case 2: printf("����\n");
		break;
	case 3: printf("����\n");
		break;

	default:
		printf("�߸��� ���� �ԷµǾ����ϴ�.\n");
		break;
	}

	return 0;
}