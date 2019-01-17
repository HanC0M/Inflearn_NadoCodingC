#include<stdio.h>
#include<time.h>

// 10마리의 서로 다른 동물(각 카드 2장씩)
// 사용자로부터 2개의 입력값을 받아서 -> 같은 동물 찾으면 카드 뒤집기
// 모든 동물 쌍을 찾으면 게임 종료
// 총 실패 횟수 알려주기

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

	int failCount = 0; //실패 횟수

	while (1) {
		int select1 = 0; // 사용자가 선택한 처음 수
		int select2 = 0; // 사용자가 선택한 두번째 수

		printAnimals(); // 동물 위치 출력
		printQuestion(); // 문제 출력
		printf("\n\n뒤집을 카드를 2개 고르세요 : ");
		scanf("%d %d", &select1, &select2);

		if (select1 == select2) {
			// 같은 카드 선택 시 무효
			printf("잘못된 값이 입력되었습니다\n");
			continue;
		}
		// 좌표에 따라 결과 출력
		int firstSelect_x = conv_pos_x(select1);
		int firstSelect_y = conv_pos_y(select1);

		int secondSelect_x = conv_pos_x(select2);
		int secondSelect_y = conv_pos_y(select2);

		if (checkAnimal[firstSelect_x][firstSelect_y] == 0 &&
			checkAnimal[secondSelect_x][secondSelect_y] == 0 &&
			animalArray[firstSelect_x][firstSelect_y] == animalArray[secondSelect_x][secondSelect_y]) {
			printf("\n\n\n빙고! %s를 발견했습니다!\n\n", strAnimal[animalArray[firstSelect_x][firstSelect_y]]);

			checkAnimal[firstSelect_x][firstSelect_y] = 1;
			checkAnimal[secondSelect_x][secondSelect_y] = 1;
		}
		// 아니면
		else {
			printf("\n\n땡! 틀렸거나 이미 뒤집힌 카드를 선택했어요!\n\n");
			printf("%d : %s\n", select1, strAnimal[animalArray[firstSelect_x][firstSelect_y]]);
			printf("%d : %s\n\n", select2, strAnimal[animalArray[secondSelect_x][secondSelect_y]]);
			failCount++;
		}
		if (foundAllAnimals() == 1) {
			printf("\n======축하합니다! 모든 동물들을 다 찾았네요!======\n이번에 총 %d번을 틀리셨네요!\n", failCount);
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
	strAnimal[0] = "정창원";
	strAnimal[1] = "유승지";
	strAnimal[2] = "정재희";
	strAnimal[3] = "김우혁";
	strAnimal[4] = "최지연";
	strAnimal[5] = "박윤성";
	strAnimal[6] = "박태욱";
	strAnimal[7] = "강주찬";
	strAnimal[8] = "권수혁";
	strAnimal[9] = "나원석";
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

// 좌표에서 빈 공간 찾기
int getEmptyPosition() {
	while (1) {
		int randPos = rand() % 20; // 0~9 사이의 숫자 반환
		int x = conv_pos_x(randPos);
		int y = conv_pos_y(randPos);

		if (animalArray[x][y] == -1) {			// 비어있으면 거기에 randPos를 반환한다
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
	printf("\n==이건 비밀인데 몰래 보여줄게요==\n\n");
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%8s", strAnimal[animalArray[i][j]]);
		}
		printf("\n");
	}
	printf("\n============================\n\n");
}

void printQuestion() {
	printf("\n\n(문제)\n");
	int seq = 0;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			// 정답을 맞추었으면 그 동물 이름을 보여주고
			if (checkAnimal[i][j] != 0) {
				printf("%8s", strAnimal[animalArray[i][j]]); // 이름 보여주기
			}
			// 아니면 뒷면이 나와야 한다 뒷면 -> 위치를 나타내는 숫자
			else {
				printf("%8d", seq); // 숫자 보여주기
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