#include<stdio.h>
#include<time.h>

int  getRandomNumber(int num1);
void showQuestion(int QuestionNumber, int num1, int num2);
void correct();
void fail();

int main(void) {
	// ���� 5���� �ְ�, �� ������ ���� ����� ���� ��� ����(����)
	// ������ ���, Ʋ���� ����
	srand(time(NULL));
	int count = 0;
	int answer;
	int i;
	printf("====��й�ȣ ���߱�====\n������ �����Ϸ��� 0�� �����ּ���.\n");
	for (i = 1; i <= 5; i++) {
		// x*y=?
		int num1 = getRandomNumber(i);
		int num2 = getRandomNumber(i);
		showQuestion(i, num1, num2);
		scanf("%d", &answer);

		if (answer==0) {
			printf("������ ����Ǿ����ϴ�!\n");
			exit(0);
		}
		else if (answer == num1 * num2) {
			correct();
			count++;
		}
		else {
			fail();
			break;
		}
	}
	printf("5���� %d���� ������ ���߼̾��!\n", count);
	if (i == 6) {
		printf("����� ��й�ȣ ������!\n");
	}
	else {
		printf("�ƽ��Ե� ��� ������ ������ ���ϼ̳׿�Ф�\n");
	}
	return 0;
}

int  getRandomNumber(int num1) {
	return rand() % (num1 * 7) + 2; // ������ ���� ����� ���� ���� �� �ֵ��� �ϴ� �κ�
}
void showQuestion(int QuestionNumber, int num1, int num2) {
	
	printf("Q%d. %d x %d = ?\n", QuestionNumber, num1, num2);
}
void correct() {
	printf("�����Դϴ�!\n");
}
void fail() {
	printf("Ʋ�� ���Դϴ�.. ���� ����!\n");
}