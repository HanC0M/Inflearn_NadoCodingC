#include<stdio.h>
#include<time.h>

typedef struct Game
{
	char * name;
	int year;
	int price;
	char * company;

	struct Game * friendGame;		// ���� ��ü ����

} GAME_INFO;
int main() {
	// [���� ���]
	// �̸� : ��������
	// �߸ų⵵ : 2017��
	// ���� : 50��
	// ���ۻ� : ����ȸ��

	char * name = "��������";
	int year = 17;
	int price = 50;
	char * company = "����ȸ��";

	// [�� �ٸ� ���� ���]
	// �̸� : �ʵ�����
	// �߸ų⵵ : 2017��
	// ���� : 100��
	// ���ۻ� : �ʵ�ȸ��

	char * name2 = "�ʵ�����";
	int year2 = 17;
	int price2 = 100;
	char * company2 = "�ʵ�ȸ��";

	// ����ü ���
	struct Game game1;
	game1.name = "��������";
	game1.year = 2017;
	game1.price = 50;
	game1.company = "����ȸ��";

	// ����ü ���
	printf("-- ���� ��� ���� --\n");
	printf("���Ӹ�		:	%s\n", game1.name);
	printf("�߸ų⵵	:	%d\n", game1.year);
	printf("����		:	%d\n", game1.price);
	printf("���ۻ�		:	%s\n", game1.company);

	// ����ü�� �迭ó�� �ʱ�ȭ
	struct Game game2 = { "�ʵ�����",2017,100,"�ʵ�ȸ��" };
	printf("-- �Ǵٸ� ���� ��� ���� --\n");
	printf("���Ӹ�		:	%s\n", game2.name);
	printf("�߸ų⵵	:	%d\n", game2.year);
	printf("����		:	%d\n", game2.price);
	printf("���ۻ�		:	%s\n", game2.company);

	// ����ü �迭
	struct Game gameArray[2] = {
		{ "��������",2017,50,"����ȸ��" },
		{ "�ʵ�����", 2017, 100, "�ʵ�ȸ��" }
	};

	// ����ü ������
	struct  Game * gamePtr;	// �̼Ǹ�
	gamePtr = &game1;
	printf("\n\n-- �̼Ǹ��� ���� ��� ���� --\n");
	/*printf("���Ӹ�		:	%s\n", (*gamePtr).name);
	printf("�߸ų⵵	:	%d\n", (*gamePtr).year);
	printf("����		:	%d\n", (*gamePtr).price);
	printf("���ۻ�		:	%s\n", (*gamePtr).company);*/

	printf("���Ӹ�		:	%s\n", gamePtr->name);
	printf("�߸ų⵵	:	%d\n", gamePtr->year);
	printf("����		:	%d\n", gamePtr->price);
	printf("���ۻ�		:	%s\n", gamePtr->company);

	// ���� ��ü ���� �Ұ�
	game1.friendGame = &game2;
	printf("\n\n-- ���� ��ü�� ���� ��� ���� --\n");
	printf("���Ӹ�		:	%s\n", game1.friendGame->name);
	printf("�߸ų⵵	:	%d\n", game1.friendGame->year);
	printf("����		:	%d\n", game1.friendGame->price);
	printf("���ۻ�		:	%s\n", game1.friendGame->company);

	// typedef
	// �ڷ����� ������ ����
	int i = 1;
	typedef int ����;
	typedef float �Ǽ�;
	���� �������� = 3;	// int i=3;
	�Ǽ� �Ǽ����� = 3.23f;		// float f=3.23f;
	printf("\n\n�������� : %d, �Ǽ����� : %.2f\n", ��������, �Ǽ�����);

	typedef struct Game ��������;
	�������� game3;
	game3.name = "�ѱ� ����";
	game3.year = 2016;
	game3.price = 150;
	game3.company = "�ݸ���";

	GAME_INFO game4;
	game4.name = "�ѱ� ����2";
	game4.year = 2015;
	game4.price = 200;
	game4.company = "�ؽ�";
	return 0;
}