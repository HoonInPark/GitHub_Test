#include <cstring>
#include <stdio.h>
#include <stdlib.h>

#define KOR_NUM 3

void main()
{
	int* pKor = (int*)malloc(sizeof(int) * KOR_NUM);
	memset(pKor, 0, sizeof(int) * KOR_NUM);

	for (int i = 0; i < KOR_NUM; i++)
	{
		printf("%d번째 국어점수 입력 >> ", i + 1);
		scanf_s("%d", &pKor[i]); // (pKor + 1)를 써줘도 된다.
	}
	printf("\n");

	for (int i = 0; i < KOR_NUM; i++)
	{
		printf("%d번째 국어점수 : %d\n", i + 1, pKor[i]);
	}

	free(pKor);
}