//if else��Ƕ��ʹ��
/*#include<stdio.h>
int main()
{
	int a, b;
	printf("��������������");
		scanf("%d %d", &a, &b); //scanf�����������
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
		i=1;                                //while��forѭ������
		while(i<=n)                         for(���ʽ1�����ʽ2�����ʽ3��             while�����ʽ1
		{ y=y*i;                                   ѭ�������                                   while�����ʽ2��{for��ѭ������䣻���ʽ3��}
		i++;   
		} 
	printf("%d", y);
	return 0;
}*/






/*#include <stdio.h>   if��while�Ľ��ʹ��
int main()
{
	int i = 500;
	while (i < 1000)
	{
		if (i % 5 == 3 && i % 7 == 6 && i % 11 == 4)//ͨ��������ԭ��
			printf("%d", i);

	}
	i++;

}*/


/*#include<stdio.h>    ���׼�����
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








//Բ���ʵļ��� rand ��ʹ��
/*#include<stdlib.h>   //�����ر�ͷ�ļ�
#include<stdio.h>
#include<time.h>
#define N 1000000     //define N������ų���
int main(int argc,char*argv)
{
	srand((unsigned)time(NULL));//ѡȡ�����ļ�
	double x,y;
	int i;
	int Num = 0;
	for (i = 0; i < N; i++)
	{
		x = (double)rand()/RAND_MAX;  //double ǿ����ת�� ˫���ȸ�����
		y = (double)rand()/RAND_MAX;    //rand ���ȷֲ����������
			if (x * x + y * y < 1)Num++;
	}
	printf("%lf", 4.0 * Num / N);
	return 0;
}
*/





 //��break�������do - while��for��whileѭ�������ʱ����ʹ������ֹѭ����ִ��ѭ���������䣬ͨ��break���������if�������һ�𣬼���������ʱ������ѭ����

//����30���������ɼ�����������ȡ������ÿ������ȡһ�� ���ȡ������˭�������һ�� ˭ʤ��
/*
#include <stdio.h> //����include"stdafx.h"
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