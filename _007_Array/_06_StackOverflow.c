#include <stdio.h>

void stackOverflow(int num) {
	printf("%d", num);

	return stackOverflow(num);
}

void main() {
	int num0 = 0;
	stackOverflow(num0);
}
/*
* <메모리 위계>
* 
* 레지스터
* 캐시
* 메모리 - 코드, 데이터, 스택, 힙
* 하드
* 
*/