/*squeeze prints s1 removing all characters found in s2 */
/* any returns index of first appearance of something in s2 found in s1 */


#include <stdio.h>

void squeeze(char s1[], char s2[]);
int is_in(char c, char s[]);
int any(char s1[], char s2[]);

int main()
{
	char s1[] = "hello my name is Bruce";
	char s2[] = "lmn";
	squeeze(s1,s2);
	char s3[] = "hello my name is Bruce"; /* reset for test case */
	printf("%d\n", any(s3,s2));
	return 0;
}

void squeeze(char s1[], char s2[])
{
	int i ,j;
	for (i = j = 0; s1[i] != 0; ++i)
	{
		if (is_in(s1[i],s2) == 0)
			s1[j++] = s1[i];
	}
	s1[j++] = '\0';
	printf("%s\n",s1);
}

int any(char s1[], char s2[])
{
	int i;
	for (i = 0; s1[i] != '\0'; ++i)
	{
		if (is_in(s1[i], s2) == 1)
			return i; 
	}
	return -1;
}


int is_in(char c, char s[])
{
	int i;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return 1;
	}
	return 0;
}
