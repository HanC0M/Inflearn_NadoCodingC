#include<stdio.h>
int main(void) {
	// ������ ������ ���� ����
	/*
	int age = 12; // int = �ڷ����� ���� �κ�
	printf("%d\n", age); // %d = ������
	age = 13;
	printf("%d\n", age);
	*/

	// �Ǽ��� ������ ���� ����
	/*
	float f = 46.5f; // f �����ֱ�
	printf("%.1f\n", f); // f �տ� .����� ���ڸ� �������ν� �Ҽ��� �ڸ� ���� ������ �� ����
	double d = 4.428; // f ���� �ʿ� x
	printf("%.3lf\n", d); // double���� ����� ������ lf ���
	*/

	// ����� ������ ���� ����
	/*
	const int YEAR = 2001; // const�� �������ν� ���ȭ
	printf("�¾ �⵵ : %d\n", YEAR);
	//YEAR = 2000; //������ �� ���� �� 2001
	*/

	// printf
	// ����
	/*
	int add = 3 + 7; // 10
	//printf("3 + 7 = %d\n", add);
	printf("%d x %d = %d\n", 30, 79, 30 * 79);
	*/

	// scanf
	// Ű���� �Է��� �޾Ƽ� ����
	/*
	int input;
	printf("���� �Է��ϼ��� : ");
	scanf("%d", &input); //&�� �Է��� ���� �� �ּҰ��� �����ֶ�� �ǹ�
	printf("�Է°� : %d\n", input);
	*/

	/*
	int one, two, three;
	printf("�� ���� ������ �Է��ϼ��� : ");
	scanf("%d %d %d", &one, &two, &three);
	printf("ù ��° �� : %d\n", one);
	printf("�� ��° �� : %d\n", two);
	printf("�� ��° �� : %d\n", three);
	*/

	// ����(�� ����), ���ڿ�(�� ���� �̻��� ���� ����)
	/*
	char c = 'A'; // ���� ����ǥ�� ���
	printf("%c\n", c);
	*/

	/*
	char str[256]; // str ������ char�� 256�� ������ش�
	*/
	/*
	scanf("%s", str, sizeof(str)); //�迭�� ������� �ſ��� & �ʿ����. 256�� �̻��� ���� ���� ����Ͽ� sizeof�� �ٿ��ش�
	printf("%s\n", str);
	*/
	//scanf���� �Է��� ���� ��, ���⸦ �ص� ���ڿ��� ������ �ʰ� �ϴ� ���
	/*
	scanf("%[^\n]s", str, sizeof(str)); // %�� s ���̿� [^\n]�� �־��ش�
	printf("%s\n", str);
	*/

	// ������ ���� ���� ������Ʈ
	// �������� �������� ������ �Լ�
	// �̸�? ����? ������? Ű? ���˸�?

	//���� ������ �Է�
	char name[256];
	int age;
	float weight, height;
	char crime[256];
	printf("--- ������ ���� ���� ---\n");

	printf("1. �̸��� �Է��ϼ��� : ");
	scanf("%s", name, sizeof(name));

	printf("2. ���̸� �Է��ϼ��� : ");
	scanf("%d", &age);

	printf("3. �����Ը� �Է��ϼ��� : ");
	scanf("%f", &weight);

	printf("4. Ű�� �Է��ϼ��� : ");
	scanf("%f", &height);

	getchar(); // �Է� ���ۿ� �����ִ� Enter�� getchar�� ���ؼ� �������ش�

	printf("5. � ���˸� ���������� �������� : ");
	scanf("%[^\n]s", &crime, sizeof(crime));



	// ���� ������ ���
	printf("\n--- ����� ���� ---\n");
	printf(" �̸�	: %s\n", name);
	printf(" ����	: %d\n", age);
	printf(" ������	: %.2f\n", weight);
	printf(" Ű	: %.2f\n", height);
	printf(" ����	: %s\n", crime);

	return 0;
}