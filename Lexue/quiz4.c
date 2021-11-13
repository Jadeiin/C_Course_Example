/* PRESET CODE BEGIN - NEVER TOUCH CODE BELOW */

//周青课堂练习：递归判断回文串，是回文串返回Yes，否则返回No
#include <stdio.h>
#include <string.h>

int ispalind(char s[],int left, int right);  //left:开始下标，right：结束下标


int main()
{
	char a[100];
	int left,right;

	gets(a);
	left = 0;
	right = strlen(a)-1;
	if(ispalind(a,left,right)) printf("Yes\n");
	else printf("No\n");
}

/* PRESET CODE END - NEVER TOUCH CODE ABOVE */
int ispalind(char s[],int left, int right)  //left:开始下标，right：结束下标
{
	if (left!=right&&left<right)return (s[left]==s[right])&&(ispalind(s,left+1,right-1));
	else return 1;
}