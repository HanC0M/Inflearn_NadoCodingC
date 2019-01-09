// 한 사람의 이름, 학년, 반, 국어, 영어, 수학 성적을 입력받아 결과와 평균을 출력하는 프로그램을 만들어보자.
#include<stdio.h>
int main(void) {
	char Name[256];
	char Opinion[256];
	int Grade, Class;
	float Korean, English, Math;
	
	printf("--- 학생 성적 처리 프로그램 ---\n");
	printf("학생의 이름을 입력하세요 : ");
	scanf("%s", Name,sizeof(Name));

	printf("%s 학생의 학년, 반을 입력하세요 :  ", Name);
	scanf("%d학년 %d반", &Grade, &Class);

	printf("%s 학생의 국어, 영어, 수학 성적을 차례대로 입력하세요.\n", Name);
	printf("국어 성적 : ");
	scanf("%f", &Korean);
	printf("영어 성적 : ");
	scanf("%f", &English);
	printf("수학 성적 : ");
	scanf("%f", &Math);

	printf("교사 의견을 적어주세요\n");
	getchar();
	scanf("%[^\n]s", Opinion);
	printf("\n\n=== %s 학생의 성적 ===\n",Name);
	printf("%d학년 %d반 %s\n", Grade, Class,Name);
	printf("국어 :		%.1f\n",Korean);
	printf("영어 :		%.1f\n",English);
	printf("수학 :		%.1f\n",Math);
	printf("평균 :		%.1f\n", (Korean + English + Math) / 3);
	printf("교사 의견 :	%s\n", Opinion);
	return 0;
}