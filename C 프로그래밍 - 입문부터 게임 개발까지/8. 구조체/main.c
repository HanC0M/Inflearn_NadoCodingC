#include<stdio.h>
#include<time.h>

typedef struct Game
{
	char * name;
	int year;
	int price;
	char * company;

	struct Game * friendGame;		// 연관 업체 게임

} GAME_INFO;
int main() {
	// [게임 출시]
	// 이름 : 나도게임
	// 발매년도 : 2017년
	// 가격 : 50원
	// 제작사 : 나도회사

	char * name = "나도게임";
	int year = 17;
	int price = 50;
	char * company = "나도회사";

	// [또 다른 게임 출시]
	// 이름 : 너도게임
	// 발매년도 : 2017년
	// 가격 : 100원
	// 제작사 : 너도회사

	char * name2 = "너도게임";
	int year2 = 17;
	int price2 = 100;
	char * company2 = "너도회사";

	// 구조체 사용
	struct Game game1;
	game1.name = "나도게임";
	game1.year = 2017;
	game1.price = 50;
	game1.company = "나도회사";

	// 구조체 출력
	printf("-- 게임 출시 정보 --\n");
	printf("게임명		:	%s\n", game1.name);
	printf("발매년도	:	%d\n", game1.year);
	printf("가격		:	%d\n", game1.price);
	printf("제작사		:	%s\n", game1.company);

	// 구조체를 배열처럼 초기화
	struct Game game2 = { "너도게임",2017,100,"너도회사" };
	printf("-- 또다른 게임 출시 정보 --\n");
	printf("게임명		:	%s\n", game2.name);
	printf("발매년도	:	%d\n", game2.year);
	printf("가격		:	%d\n", game2.price);
	printf("제작사		:	%s\n", game2.company);

	// 구조체 배열
	struct Game gameArray[2] = {
		{ "나도게임",2017,50,"나도회사" },
		{ "너도게임", 2017, 100, "너도회사" }
	};

	// 구조체 포인터
	struct  Game * gamePtr;	// 미션맨
	gamePtr = &game1;
	printf("\n\n-- 미션맨의 게임 출시 정보 --\n");
	/*printf("게임명		:	%s\n", (*gamePtr).name);
	printf("발매년도	:	%d\n", (*gamePtr).year);
	printf("가격		:	%d\n", (*gamePtr).price);
	printf("제작사		:	%s\n", (*gamePtr).company);*/

	printf("게임명		:	%s\n", gamePtr->name);
	printf("발매년도	:	%d\n", gamePtr->year);
	printf("가격		:	%d\n", gamePtr->price);
	printf("제작사		:	%s\n", gamePtr->company);

	// 연관 업체 게임 소개
	game1.friendGame = &game2;
	printf("\n\n-- 연관 업체의 게임 출시 정보 --\n");
	printf("게임명		:	%s\n", game1.friendGame->name);
	printf("발매년도	:	%d\n", game1.friendGame->year);
	printf("가격		:	%d\n", game1.friendGame->price);
	printf("제작사		:	%s\n", game1.friendGame->company);

	// typedef
	// 자료형에 별명을 지정
	int i = 1;
	typedef int 정수;
	typedef float 실수;
	정수 정수변수 = 3;	// int i=3;
	실수 실수변수 = 3.23f;		// float f=3.23f;
	printf("\n\n정수변수 : %d, 실수변수 : %.2f\n", 정수변수, 실수변수);

	typedef struct Game 게임정보;
	게임정보 game3;
	game3.name = "한글 게임";
	game3.year = 2016;
	game3.price = 150;
	game3.company = "넷마블";

	GAME_INFO game4;
	game4.name = "한글 게임2";
	game4.year = 2015;
	game4.price = 200;
	game4.company = "넥슨";
	return 0;
}