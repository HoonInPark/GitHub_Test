#include "stdio.h"

void main() {
	char ch;
	printf("연산자 입력(+, -, *, /, %) >> ");
	scanf_s("%c", &ch);

	switch (ch) {
	case '+':
		printf("+ 연산자입니다. \n");
		break;
	case '-':
		printf("- 연산자입니다. \n");
		break;
	case '*':
		printf("- 연산자입니다. \n");
		break;
	case '/':
		printf("- 연산자입니다. \n");
		break;
	case '%':
		printf("- 연산자입니다. \n");
		break;

	default:
		printf("%c >> 이것은 연산자가 아닙니다.", ch);
		break;
	}
}