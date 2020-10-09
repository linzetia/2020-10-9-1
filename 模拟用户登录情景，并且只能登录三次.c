//模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则提示
//示登录成功，如果三次输入错误，则退出程序）

#include<stdio.h>
#include<string.h>
int main()
{
	int i = 0;
	char password[30] = { 0 };
	
	
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码>");
		scanf("%s", &password);
		if (strcmp(password, "123456") == 0)
		{
			printf("密码输入正确\n");
			break;
		}
		else
		{
			printf("密码输入错误\n");
		}
	}
	if (3 == i)
	{
		printf("密码输入三次错误，退出程序\n");
	}
	return 0;
}