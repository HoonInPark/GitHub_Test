#include <stdio.h>

void main() {
	int num = 100;
	int* pnum;
	pnum = &num;

	printf("%llu, %p\n", pnum, pnum);
	printf("%llu, %p\n", &num, &num);

	printf("%d, %d\n", num, *pnum);

	num = 999;
	printf("%d, %d\n", num, *pnum);

	*pnum = 1200;
	printf("%d, %d\n", num, *pnum);
}