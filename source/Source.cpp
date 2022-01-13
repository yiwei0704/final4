#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<time.h>


int main()
{
	int a=0;
	int tol = 0;

	printf("* * * * * * * *catch thirty* * * * * * * \n");
	printf("Game Begin\n");
	srand((unsigned)time(NULL));
	while (tol <= 30)
	{
		tol = input(tol);
		if (tol == 30)
		{
			printf("You Win!!\n");
			break;
		}
		tol = copu(tol);
		if (tol == 30)
		{
			printf("Com Win!!\n");
			break;
		}
	}

	printf(" * * * * * * * *Game Over * * * * * * * *\n");
	return 0;
}
