#include <stdio.h>
#include <stdlib.h>
int main()
{
	int point1, point2, point3, point4, point5, point6, point7;
	int point01, point02, point03, point04, point05, point06, point07;
	int ans1, ans2, ans3, ans4, ans5, ans6, ans7;
	int i;

	printf("Welcome to the jungle bee Game\n\n");
	printf("> press 1 to enter, press 0 to exit\n\n");
	scanf("%d\n" &i);

	if (i == 1)
	{
		printf("1. What command is used to list items in the shell?\n\n");
		ptintf("1.ls\n");
		printf("2.nm\n");
		printf("3.less\n");
		printf("4.cat\n");
		scanf("%d\n" &ans1);

		if (ans == 1)
		{
			printf("Thats the correct answer");
			point1 = 5;
			printf("You hav been rewarded %d points\n", point1);
		}
		else
		{
			printf("Thats the wrong answer\n");
			point01 = 1;
			printf("You have been awarded %d points\n", point01);
		}

		printf("2. What command is used to change direction of directory?\n\n");
		printf("1.pwd\n");
		printf("2.cd \n");
		printf("3.touch\n");
		printf("4.grep\n");
		scanf("%d\n" &ans2);

		if (ans == 2)
		{
			printf("Thats the correct answer");
			point2 = 5;
			printf("You hav been rewarded %d points\n", point2);
		}
		else
		{
			printf("Thats the wrong answer\n");
			point02 = 1;
			printf("You have been awarded %d points\n", point02);
		}
		printf("3. What is the most popular programming language?\n\n");
		printf("1.python\n");
		printf("2.javasript \n");
		printf("3.C\n");
		printf("4.java\n");
		scanf("%d\n" &ans3);

		if (ans == 2)
		{
			printf("Thats the correct answer");
			point3 = 5;
			printf("You hav been rewarded %d points\n", point3);
		}
		else
		{
			printf("Thats the wrong answer\n");
			point03 = 1;
			printf("You have been awarded %d points\n", point03);
		}

		printf("4. Which language is not included in web development?\n\n");
		printf("1.Javascript\n");
		printf("2.HTML\n");
		printf("3.CSS\n");
		printf("4.python\n");
		scanf("%d\n" &ans4);

		if (ans == 4)
		{
			printf("Thats the correct answer");
			point4 = 5;
			printf("You hav been rewarded %d points\n", point4);
		}
		else
		{
			printf("Thats the wrong answer\n");
			point04 = 1;
			printf("You have been awarded %d points\n", point04);
		}

		printf("5. Which country broke the limits of computer science in programming?\n\n");
		printf("1.America\n");
		printf("2.China \n");
		printf("3.England\n");
		printf("4.Japan\n");
		scanf("%d\n" &ans5);

		if (ans == 1)
		{
			printf("Thats the correct answer");
			point5 = 5;
			printf("You hav been rewarded %d points\n", point5);
		}
		else
		{
			printf("Thats the wrong answer\n");
			point05 = 1;
			printf("You have been awarded %d points\n", point05);
		}

		printf("6. Which of the following is a Javascript library?\n\n");
		printf("1.Bootstrap\n");
		printf("2.Standard library\n");
		printf("3.Angular\n");
		printf("4.Flex\n");
		scanf("%d\n" &ans6);

		if (ans == 3)
		{
			printf("Thats the correct answer");
			point6 = 5;
			printf("You hav been rewarded %d points\n", point6);
		}
		else
		{
			printf("Thats the wrong answer\n");
			point06 = 1;
			printf("You have been awarded %d points\n", point06);
		}

		printf("7. Which of the following is not a CSS extension?\n\n");
		printf("1.Flex\n");
		printf("2.Grid\n");
		printf("3.Bootstrap\n");
		printf("4.pandas\n");
		scanf("%d\n" &ans7);

		if (ans == 4)
		{
			printf("Thats the correct answer");
			point7 = 5;
			printf("You hav been rewarded %d points\n", point7);
		}
		else
		{
			printf("Thats the wrong answer\n");
			point07 = 1;
			printf("You have been awarded %d points\n", point07);
		}
	}

	else if (i == 0)
	{
		printf("Exit, This is the end of the game\n\n");
	}

	else
	{
		printf("invalid option:\n\n");
	}
}

