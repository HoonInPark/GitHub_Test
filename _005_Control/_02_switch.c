#include "stdio.h"

void main() {
	char ch;
	printf("������ �Է�(+, -, *, /, %) >> ");
	scanf_s("%c", &ch);

	switch (ch) {
	case '+':
		printf("+ �������Դϴ�. \n");
		break;
	case '-':
		printf("- �������Դϴ�. \n");
		break;
	case '*':
		printf("- �������Դϴ�. \n");
		break;
	case '/':
		printf("- �������Դϴ�. \n");
		break;
	case '%':
		printf("- �������Դϴ�. \n");
		break;

	default:
		printf("%c >> �̰��� �����ڰ� �ƴմϴ�.", ch);
		break;
	}
}