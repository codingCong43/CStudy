//if else的嵌套使用
/*#include<stdio.h>
int main()
{
	int a, b;
	printf("请输入两个数：");
		scanf("%d %d", &a, &b); //scanf（输入参数）
	if (a != b)
	{
		if (a > b)
		{
			printf("%d>%d\n", a, b);
		}
		else
		{
			printf("%d<%d\n", a, b);
		}
	}
	else {
		printf("%d=%d\n", a, b);
	}
	return 0;
}*/





/*#include<stdio.h>
int main()
{
	int i, n, y = 1;
	scanf("%d", &n);
		i=1;                                //while与for循环互换
		while(i<=n)                         for(表达式1，表达式2，表达式3）             while：表达式1
		{ y=y*i;                                   循环体语句                                   while（表达式2）{for的循环体语句；表达式3；}
		i++;   
		} 
	printf("%d", y);
	return 0;
}*/






/*#include <stdio.h>   if和while的结合使用
int main()
{
	int i = 500;
	while (i < 1000)
	{
		if (i % 5 == 3 && i % 7 == 6 && i % 11 == 4)//通过余数求原数
			printf("%d", i);

	}
	i++;

}*/


/*#include<stdio.h>    简易计算器
int main()
{
	double a, b, c;
	char op;
	scanf("%lf%c%lf", &a & op % b);
	if('+'==op){c=a+b}
	
	else if ('-' == op) { c = a - b }
	else if ('*' == op) { c = a * b }
	else if ('/' == op) { c = a / b }
	else { printf("invalid operator"); }
	printf("%lf", c);
}*/








//圆周率的计算 rand 的使用
/*#include<stdlib.h>   //三个必备头文件
#include<stdio.h>
#include<time.h>
#define N 1000000     //define N定义符号常量
int main(int argc,char*argv)
{
	srand((unsigned)time(NULL));//选取种子文件
	double x,y;
	int i;
	int Num = 0;
	for (i = 0; i < N; i++)
	{
		x = (double)rand()/RAND_MAX;  //double 强类型转化 双精度浮点型
		y = (double)rand()/RAND_MAX;    //rand 均匀分布的随机函数
			if (x * x + y * y < 1)Num++;
	}
	printf("%lf", 4.0 * Num / N);
	return 0;
}
*/





 //当break语句用于do - while、for、while循环语句中时，可使程序终止循环而执行循环后面的语句，通常break语句总是与if语句联在一起，即满足条件时便跳出循环。

//共有30跟火柴棍，由甲乙两人依次取火柴棍，每次至少取一根 最多取两根，谁抢到最后一根 谁胜出
/*
#include <stdio.h> //代替include"stdafx.h"
#include <tchar.h>
#include<stdlib.h>
int main(int argc, char* argv)
{
	int totalnum = 30, YouFirstnum, getnum, Computernum;
	do {
		printf("\nWho begings frist?Computer(0),You(1),:");
		scanf_s("%d", &YouFirstnum);
	} while (YouFirstnum != 1 && YouFirstnum != 0);  //1!=YouFirst && 0 != YouFirst

	while (1)
	{
		if (1 == YouFirstnum)
		{
			do { printf("\nThe remain is%d you put into 1or2: ", totalnum); scanf_s("%d", &getnum); } while (getnum < 0 || getnum>2 || totalnum < getnum);
			totalnum -= getnum; //x-=y <=>x=x-y
			if (totalnum == 0) { printf("you win"); break; }
			if (totalnum % 3 == 0) { Computernum = rand() % 2 + 1; }//printf("Computergetnum=rand()%2+1;")
			else {
				Computernum = totalnum % 3;
				totalnum -= Computernum;
			}
			printf("\ncomputer get %d", Computernum);
			if (totalnum == 0) { printf("conputer win\n"); break; }
		}
		else
		{
			if (totalnum % 3 == 0) { Computernum = rand() % 2 + 1; } //printf("Computergetnum=rand()%2+1;")
			else {
				Computernum = totalnum % 3;
			}
			totalnum -= Computernum;
			printf("\ncomputer get %d", Computernum);
			if (totalnum == 0) { printf("conputer win\n"); break; }
			do { printf("\nThe remain is%d you put into 1or2: ", totalnum); scanf_s("%d", &getnum); } while (getnum < 0 || getnum>2 || totalnum < getnum);
			totalnum -= getnum; //x-=y <=>x=x-y
			if (totalnum == 0) { printf("you win"); break; }
		}
	}
	return 0;
}
*/