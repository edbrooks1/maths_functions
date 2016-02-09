#include <stdio.h>

int main()
{
	int c, a, b, t;
	printf("Enter function choice:\n'1' for +\t'2' for -\n'3' for *\t'4' for (division)\n");
	scanf("%i", &c);
	switch(c)
	{
	case 1:
		printf("Enter 1st value:");
		scanf("%i", &a);
		printf("Enter 2nd value:");
		scanf("%i", &b);
		t = a + b;
		printf("Total is %i\n", t);
		break;
	case 2:
		printf("Enter 1st(larger) value:");
		scanf("%i", &a);
		printf("Enter 2nd value:");
		scanf("%i", &b);
		t = a - b;
		printf("Total is %i\n", t);
		break;
	case 3:
		printf("Enter 1st value:");
		scanf("%i", &a);
		printf("Enter 2nd value:");
		scanf("%i", &b);
		t = a * b;
		printf("Total is %i\n", t);
		break;
	case 4:
		break;
	default:
		printf("ERROR");
		break;
	}
	return 0;
}
