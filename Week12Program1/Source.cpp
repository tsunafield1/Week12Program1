#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void changeToUpper(char*);
int main()
{
	int n;
	char str[205],*left,*right;
	scanf("%s", str);
	changeToUpper(str);
	left = right = str;
	for (n = 0; *right != '\0'; right++,n++);
	right--;
	while (right > left)
	{
		if (*right != *left)break;
		right--;
		left++;
	}
	if (*right != *left)printf("No");
	else
	{
		left = right = str;
		for (; *right != '\0'; right++);
		right--;
		right -= (n + 1) / 2;
		while (right > left)
		{
			if (*right != *left)break;
			right--;
			left++;
		}
		if (*right != *left) printf("Palindrome");
		else
		{
			left = right = str;
			for (; *right != '\0'; right++);
			right--;
			left += (n + 1) / 2;
			while (right > left)
			{
				if (*right != *left)break;
				right--;
				left++;
			}
			if (*right != *left) printf("Palindrome");
			else printf("Double Palindrome");
		}
	}
}

void changeToUpper(char* a)
{
	for (int i = 0; *(a + i); i++)
	{
		if (*(a + i) > 'Z')
		{
			*(a + i) = *(a + i) - 'a' + 'A';
		}
	}
}