#include<stdio.h>
#include<time.h>
int main(void) {
	// if, else
	/* // ������ ź�ٰ� ����, �л� / �Ϲ������� ���� (�Ϲ��� <= 20��)
	int age = 25;
	if (age >= 20) {
		printf("�Ϲ����Դϴ�\n");
	}
	else {
		printf("�л��Դϴ�\n");
	}*/

	// else if
	/* // �ʵ��л�(8-13) / ���л�(14-16) / ����л�(17~19)
	int age = 18;
	if (age >= 8 && age <= 13) {
		printf("�ʵ��л��Դϴ�.\n");
	}
	else if (age >= 14 && age <= 16) {
		printf("���л��Դϴ�.\n");
	}
	else if (age >= 17 && age <= 19) {
		printf("����л��Դϴ�.\n");
	}
	else {
		printf("��, ��, ����б� �л��� �ƴմϴ�\n");
	}*/

	// break
	/*// 1������ 30������ �ִ� �ݿ��� 1������ 5������ ���� ��ǥ�� �Ѵ�.
	for (int i = 1; i <= 30; i++) {
		if (i >= 6) {
			printf("������ �л��� ���� ������.\n");
			break;       // �ݺ����� Ż���Ѵ�
		}
		printf("%d�� �л��� ���� ��ǥ �غ� �ϼ���.\n", i);
	}*/

	// continue
	/*// 1������ 30������ �ִ� �ݿ��� 7�� �л��� ���ļ� �Ἦ
	// 7���� �����ϰ� 6������ 10������ ���� ��ǥ�� �Ѵ�.
	for (int i = 1; i <= 30; i++) {
		if (i >= 6 && i <= 10) {
			if (i == 7) {
				printf("%d�� �л��� �Ἦ�Դϴ�.\n", i);
				continue;		// �� ������ ���� �������� �ʰ� �ٽ� ���� �ö󰣴�
			}
			printf("%d�� �л��� ���� ��ǥ �غ� �ϼ���.\n", i);
		}
	}*/

	// AND ����
	/*int a = 10;
	int b = 10;
	int c = 12;
	int d = 13;
    if (a == b || c == d) {
		printf("a�� b, Ȥ�� c�� d�� ���� �����ϴ�.\n");
	}
	
	else {
		printf("���� ���� �ٸ��׿�..\n");
	}*/
	
	// ���� = 0, ���� = 1, �� = 2
	/*
	srand(time(NULL));
	int i = rand() & 3; // 0~2 ��ȯ
	*/

	// if������ �ϸ�
	/*if (i == 0) {
		printf("����\n");
	}
	else if (i == 1) {
		printf("����\n");
	}
	else if (i == 2) {
		printf("��\n");
	}
	else {
		printf("�����\n");
	}*/

	// switch, case������ �ϸ�
	/*switch (i) {
	case 0: printf("����\n"); break;

	case 1: printf("����\n"); break;

	case 2: printf("��\n"); break;

	default: printf("�����\n"); break;
	}*/


	// ����ī�� ������ switch case��
	/*int age = 18;
	switch (age) {
	case 8:							// break�� ������ ���� �͵��� �״�� ������
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:printf("�ʵ��л��Դϴ�\n"); break;
	case 14:
	case 15:
	case 16:printf("���л��Դϴ�\n"); break;
	case 17:
	case 18:
	case 19:printf("����л��Դϴ�\n"); break;
	default:printf("��, ��, ����б� �л��� �ƴմϴ�\n"); break;
	}*/

	//Up&Down
	srand(time(NULL));
	int num = rand() % 100 + 1; // 1~100������ ���ڸ� ����
	printf("���� : %d\n", num);
	int answer = 0; // ����
	int chance = 5; // ��ȸ
	while (1) {

		printf("���� ��ȸ %d��\n", chance);
		printf("���ڸ� ���������� (1~100) : ");
		scanf("%d", &answer);

		if (answer > num) {
			printf("Down\n");
		}
		else if (answer < num) {
			printf("Up\n");
		}
		else if (answer == num) {
			printf("�����Դϴ�\n");
		}
		else {
			printf("�߸��� �Է�\n");
		}
		chance--;
		if (chance == 0) {
			printf("��� ��ȸ�� ����ϼ̳׿�.\n");
			break;
		}
		
	}
	return 0;
}