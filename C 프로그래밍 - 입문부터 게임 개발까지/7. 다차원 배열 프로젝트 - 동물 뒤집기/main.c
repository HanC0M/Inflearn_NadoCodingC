#include<stdio.h>
#include<time.h>

// 10������ ���� �ٸ� ����(�� ī�� 2�徿)
// ����ڷκ��� 2���� �Է°��� �޾Ƽ� -> ���� ���� ã���� ī�� ������
// ��� ���� ���� ã���� ���� ����
// �� ���� Ƚ�� �˷��ֱ�

int animalArray[4][5];
int checkAnimal[4][5];
char *strAnimal[10];

void initAnimalArray();
void initAnimalName();
void shuffleAnimal();
void printAnimals();
void printQuestion();
int conv_pos_x(int x);
int conv_pos_y(int y);
int getEmptyPosition();
int foundAllAnimals();

int main(void) {
	srand(time(NULL));

	initAnimalArray();
	initAnimalName();

	shuffleAnimal();

	int failCount = 0; //���� Ƚ��

	while (1) {
		int select1 = 0; // ����ڰ� ������ ó�� ��
		int select2 = 0; // ����ڰ� ������ �ι�° ��

		printAnimals(); // ���� ��ġ ���
		printQuestion(); // ���� ���
		printf("\n\n������ ī�带 2�� ������ : ");
		scanf("%d %d", &select1, &select2);

		if (select1 == select2) {
			// ���� ī�� ���� �� ��ȿ
			printf("�߸��� ���� �ԷµǾ����ϴ�\n");
			continue;
		}
		// ��ǥ�� ���� ��� ���
		int firstSelect_x = conv_pos_x(select1);
		int firstSelect_y = conv_pos_y(select1);

		int secondSelect_x = conv_pos_x(select2);
		int secondSelect_y = conv_pos_y(select2);

		if (checkAnimal[firstSelect_x][firstSelect_y] == 0 &&
			checkAnimal[secondSelect_x][secondSelect_y] == 0 &&
			animalArray[firstSelect_x][firstSelect_y] == animalArray[secondSelect_x][secondSelect_y]) {
			printf("\n\n\n����! %s�� �߰��߽��ϴ�!\n\n", strAnimal[animalArray[firstSelect_x][firstSelect_y]]);

			checkAnimal[firstSelect_x][firstSelect_y] = 1;
			checkAnimal[secondSelect_x][secondSelect_y] = 1;
		}
		// �ƴϸ�
		else {
			printf("\n\n��! Ʋ�Ȱų� �̹� ������ ī�带 �����߾��!\n\n");
			printf("%d : %s\n", select1, strAnimal[animalArray[firstSelect_x][firstSelect_y]]);
			printf("%d : %s\n\n", select2, strAnimal[animalArray[secondSelect_x][secondSelect_y]]);
			failCount++;
		}
		if (foundAllAnimals() == 1) {
			printf("\n======�����մϴ�! ��� �������� �� ã�ҳ׿�!======\n�̹��� �� %d���� Ʋ���̳׿�!\n", failCount);
			break;
		}
	}
	return 0;
}

void initAnimalArray() {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			animalArray[i][j] = -1;
		}
	}
}

void initAnimalName() {
	strAnimal[0] = "��â��";
	strAnimal[1] = "������";
	strAnimal[2] = "������";
	strAnimal[3] = "�����";
	strAnimal[4] = "������";
	strAnimal[5] = "������";
	strAnimal[6] = "���¿�";
	strAnimal[7] = "������";
	strAnimal[8] = "�Ǽ���";
	strAnimal[9] = "������";
}

void shuffleAnimal() {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 2; j++) {
			int pos = getEmptyPosition();
			int x = conv_pos_x(pos);
			int y = conv_pos_y(pos);

			 animalArray[x][y] = i;
		}
	}
}

// ��ǥ���� �� ���� ã��
int getEmptyPosition() {
	while (1) {
		int randPos = rand() % 20; // 0~9 ������ ���� ��ȯ
		int x = conv_pos_x(randPos);
		int y = conv_pos_y(randPos);

		if (animalArray[x][y] == -1) {			// ��������� �ű⿡ randPos�� ��ȯ�Ѵ�
			return randPos;
		}
	}
	return 0;
}

int conv_pos_x(int x) {
	return x / 5;
}

int conv_pos_y(int y) {
	return y % 5;
}

void printAnimals() {
	printf("\n==�̰� ����ε� ���� �����ٰԿ�==\n\n");
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%8s", strAnimal[animalArray[i][j]]);
		}
		printf("\n");
	}
	printf("\n============================\n\n");
}

void printQuestion() {
	printf("\n\n(����)\n");
	int seq = 0;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			// ������ ���߾����� �� ���� �̸��� �����ְ�
			if (checkAnimal[i][j] != 0) {
				printf("%8s", strAnimal[animalArray[i][j]]); // �̸� �����ֱ�
			}
			// �ƴϸ� �޸��� ���;� �Ѵ� �޸� -> ��ġ�� ��Ÿ���� ����
			else {
				printf("%8d", seq); // ���� �����ֱ�
			}
			seq++;
		}
		printf("\n");
	}
}
int foundAllAnimals() {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			if (checkAnimal[i][j] == 0) {
				return 0;
			}
		}
	}
	return 1;
}