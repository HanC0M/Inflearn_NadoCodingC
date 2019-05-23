#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MAX 10000
int main() {
	// 파일 입출력
	// 파일에 어떤 데이터를 저장
	// 파일에 저장된 데이터를 불러오기

	// fputs, fgets -> 문자열
	// char line[MAX];

	//파일에 쓰기
	/*FILE* file = fopen("C:\\Users\\kohpn\\Documents\\test1.txt", "wb");
	if (file == NULL) {
		printf("파일 열기 실패!\n");
		return 1;
	}*/

	// 파일 불러오기
	/*FILE* file = fopen("C:\\Users\\kohpn\\Documents\\test1.txt", "rb");
	if (file == NULL) {
		printf("파일 열기 실패!\n");
		return 1;
	}

	while (fgets(line, MAX, file) != NULL) {
		printf("%s", line);
	}
	fclose(file);*/

	// fprintf, fscanf -> 정형화된 포맷
	int num[6] = { 0,0,0,0,0,0 }; // 추첨 번호
	int bonus = 0; // 보너스 번호
	char str1[MAX];
	char str2[MAX];
	FILE* file = fopen("C:\\Users\\kohpn\\Documents\\test2.txt", "rb");

	// 파일에 쓰기
	/*if (file == NULL) {
		printf("파일 열기 실패!\n");
		return 1;
	}

	// 로또 추첨 번호 저장
	fprintf(file, "%s %d %d %d %d %d %d\n", "추첨번호", 1, 2, 3, 4, 5, 6);
	fprintf(file, "%s %d\n", "보너스 번호", 7);*/

	// 파일 읽기
	if (file == NULL) {
		printf("파일 열기 실패!\n");
		return 1;
	}

	// 로또 추첨 번호 저장
	fscanf(file, "%s %d %d %d %d %d %d\n", str1, &num[0], &num[1], &num[2], &num[3], &num[4], &num[5]);
	printf("%s %d %d %d %d %d %d\n", str1, num[0], num[1], num[2], num[3], num[4], num[5]);

	fscanf(file, "%s %d\n", str2, &bonus);
	printf("%s %d\n", str2, bonus);

	fclose(file);

	return 0;
}