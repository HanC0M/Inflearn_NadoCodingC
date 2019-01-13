#include<stdio.h>
#include<time.h>

int  getRandomNumber(int num1);
void showQuestion(int QuestionNumber, int num1, int num2);
void correct();
void fail();

int main(void) {
	// 문이 5개가 있고, 각 문마다 점점 어려운 수식 퀴즈가 출제(랜덤)
	// 맞히면 통과, 틀리면 실패
	srand(time(NULL));
	int count = 0;
	int answer;
	int i;
	printf("====비밀번호 맞추기====\n게임을 종료하려면 0을 눌러주세요.\n");
	for (i = 1; i <= 5; i++) {
		// x*y=?
		int num1 = getRandomNumber(i);
		int num2 = getRandomNumber(i);
		showQuestion(i, num1, num2);
		scanf("%d", &answer);

		if (answer==0) {
			printf("게임이 종료되었습니다!\n");
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
	printf("5개중 %d개의 문제를 맞추셨어요!\n", count);
	if (i == 6) {
		printf("당신은 비밀번호 마스터!\n");
	}
	else {
		printf("아쉽게도 모든 문제를 맞추지 못하셨네요ㅠㅠ\n");
	}
	return 0;
}

int  getRandomNumber(int num1) {
	return rand() % (num1 * 7) + 2; // 레벨에 따라 어려운 값이 나올 수 있도록 하는 부분
}
void showQuestion(int QuestionNumber, int num1, int num2) {
	
	printf("Q%d. %d x %d = ?\n", QuestionNumber, num1, num2);
}
void correct() {
	printf("정답입니다!\n");
}
void fail() {
	printf("틀린 답입니다.. 게임 오버!\n");
}