#include<stdio.h>
#include<time.h>

int main() {

	srand(time(NULL));
	int ¹ä = rand() % 4;
	switch (¹ä)
	{
	case 0: printf("À¯°¡³×\n"); 
	case 1: break;
	case 2: printf("´ß°¥ºñ Á¦ÀÛ¼Ò\n"); 
	case 3: break;
	default:
		break;
	}

	return 0;
}