#include<stdio.h>
#include<time.h>

int main() {

	srand(time(NULL));
	int �� = rand() % 4;
	switch (��)
	{
	case 0: printf("������\n"); 
	case 1: break;
	case 2: printf("�߰��� ���ۼ�\n"); 
	case 3: break;
	default:
		break;
	}

	return 0;
}