#define RIGHT 77
#define LEFT 75
#define UP 72
#define DOWN 80

#define B break;

#define cls system("cls");

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>

// 1.��   2.��   3.��   4.��

int main()
{
	int k = 0, r = 0;
	srand(time(NULL));

	int s = 0, f = 0;

	printf("ȭ�鿡 ��Ÿ���� ȭ��ǥ�� ���� ����Ű�� �Է��� �ּ���. ESC�� ������ ����˴ϴ�.\n\n\n");

	while (k != 27)
	{
	re:

		r = rand() % 5;
		if (r == 0)
			goto re;

		switch (r)
		{
		case 1:
			printf("��");
			B
		case 2:
			printf("��");
			B
		case 3:
			printf("��");
			B
		case 4:
			printf("��");
			B
		default:
			B
		}

	re_enter:

		printf("\n\n\n����: %d     ����: %d       \n\n�Է�: ", f, s);

		k = _getch();

		if (k == 13)
			goto re_enter;

		if (k == 224)
		{
			k = _getch();

			switch (k)
			{
			case LEFT:
				if (r == 1)
				{
					cls
					s += 1;
				}
				else
				{
					f += 1;
					goto re_enter;
				}
				B
			case RIGHT:
				if (r == 3)
				{
					cls
						s += 1;
				}
				else
				{
					f += 1;
					goto re_enter;
				}
				B
			case UP:
				if (r == 2)
				{
					cls
						s += 1;
				}
				else
				{
					f += 1;
					goto re_enter;
				}
				B
			case DOWN:
				if (r == 4)
				{
					cls
						s += 1;
				}
				else
				{
					f += 1;
					goto re_enter;
				}
				B
			default:

			goto re_enter;
		
			}

		}
		else goto re_enter;
	}

	return 0;
}