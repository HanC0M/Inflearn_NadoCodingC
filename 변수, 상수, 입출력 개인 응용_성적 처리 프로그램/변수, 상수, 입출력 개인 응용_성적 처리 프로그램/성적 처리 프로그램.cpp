// �� ����� �̸�, �г�, ��, ����, ����, ���� ������ �Է¹޾� ����� ����� ����ϴ� ���α׷��� ������.
#include<stdio.h>
int main(void) {
	char Name[256];
	char Opinion[256];
	int Grade, Class;
	float Korean, English, Math;
	
	printf("--- �л� ���� ó�� ���α׷� ---\n");
	printf("�л��� �̸��� �Է��ϼ��� : ");
	scanf("%s", Name,sizeof(Name));

	printf("%s �л��� �г�, ���� �Է��ϼ��� :  ", Name);
	scanf("%d�г� %d��", &Grade, &Class);

	printf("%s �л��� ����, ����, ���� ������ ���ʴ�� �Է��ϼ���.\n", Name);
	printf("���� ���� : ");
	scanf("%f", &Korean);
	printf("���� ���� : ");
	scanf("%f", &English);
	printf("���� ���� : ");
	scanf("%f", &Math);

	printf("���� �ǰ��� �����ּ���\n");
	getchar();
	scanf("%[^\n]s", Opinion);
	printf("\n\n=== %s �л��� ���� ===\n",Name);
	printf("%d�г� %d�� %s\n", Grade, Class,Name);
	printf("���� :		%.1f\n",Korean);
	printf("���� :		%.1f\n",English);
	printf("���� :		%.1f\n",Math);
	printf("��� :		%.1f\n", (Korean + English + Math) / 3);
	printf("���� �ǰ� :	%s\n", Opinion);
	return 0;
}