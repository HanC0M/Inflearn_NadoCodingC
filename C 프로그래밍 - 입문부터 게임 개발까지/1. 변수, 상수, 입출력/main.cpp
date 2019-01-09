#include<stdio.h>
int main(void) {
	// 정수형 변수에 대한 예제
	/*
	int age = 12; // int = 자료형을 적는 부분
	printf("%d\n", age); // %d = 정수형
	age = 13;
	printf("%d\n", age);
	*/

	// 실수형 변수에 대한 예제
	/*
	float f = 46.5f; // f 적어주기
	printf("%.1f\n", f); // f 앞에 .을찍고 숫자를 적음으로써 소수점 자릿 수를 결정할 수 있음
	double d = 4.428; // f 적을 필요 x
	printf("%.3lf\n", d); // double형을 출력할 때에는 lf 사용
	*/

	// 상수형 변수에 대한 예제
	/*
	const int YEAR = 2001; // const를 적음으로써 상수화
	printf("태어난 년도 : %d\n", YEAR);
	//YEAR = 2000; //수정할 수 없는 값 2001
	*/

	// printf
	// 연산
	/*
	int add = 3 + 7; // 10
	//printf("3 + 7 = %d\n", add);
	printf("%d x %d = %d\n", 30, 79, 30 * 79);
	*/

	// scanf
	// 키보드 입력을 받아서 저장
	/*
	int input;
	printf("값을 입력하세요 : ");
	scanf("%d", &input); //&는 입력한 값을 저 주소값에 보내주라는 의미
	printf("입력값 : %d\n", input);
	*/

	/*
	int one, two, three;
	printf("세 개의 정수를 입력하세요 : ");
	scanf("%d %d %d", &one, &two, &three);
	printf("첫 번째 값 : %d\n", one);
	printf("두 번째 값 : %d\n", two);
	printf("세 번째 값 : %d\n", three);
	*/

	// 문자(한 글자), 문자열(한 글자 이상의 여러 글자)
	/*
	char c = 'A'; // 작은 따옴표로 사용
	printf("%c\n", c);
	*/

	/*
	char str[256]; // str 변수에 char를 256개 만들어준다
	*/
	/*
	scanf("%s", str, sizeof(str)); //배열로 만들어진 거에는 & 필요없음. 256개 이상이 들어올 때를 대비하여 sizeof를 붙여준다
	printf("%s\n", str);
	*/
	//scanf에서 입력을 받을 때, 띄어쓰기를 해도 문자열이 끊기지 않게 하는 방법
	/*
	scanf("%[^\n]s", str, sizeof(str)); // %와 s 사이에 [^\n]을 넣어준다
	printf("%s\n", str);
	*/

	// 경찰서 조서 쓰기 프로젝트
	// 경찰관이 범죄자의 정보를 입수
	// 이름? 나이? 몸무게? 키? 범죄명?

	//조서 내용을 입력
	char name[256];
	int age;
	float weight, height;
	char crime[256];
	printf("--- 경찰서 조서 쓰기 ---\n");

	printf("1. 이름을 입력하세요 : ");
	scanf("%s", name, sizeof(name));

	printf("2. 나이를 입력하세요 : ");
	scanf("%d", &age);

	printf("3. 몸무게를 입력하세요 : ");
	scanf("%f", &weight);

	printf("4. 키를 입력하세요 : ");
	scanf("%f", &height);

	getchar(); // 입력 버퍼에 남아있던 Enter를 getchar를 통해서 해제해준다

	printf("5. 어떤 범죄를 저질렀는지 적으세요 : ");
	scanf("%[^\n]s", &crime, sizeof(crime));



	// 조서 내용을 출력
	printf("\n--- 당신의 정보 ---\n");
	printf(" 이름	: %s\n", name);
	printf(" 나이	: %d\n", age);
	printf(" 몸무게	: %.2f\n", weight);
	printf(" 키	: %.2f\n", height);
	printf(" 범죄	: %s\n", crime);

	return 0;
}