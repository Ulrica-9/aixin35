//���ҽṹ�������ֵ
//
//#include <stdio.h>
//#include <stdlib.h>
//struct student
//{
//	char name;
//	char sex;
//	int grade;
//	struct student* text;
//};
//void text(void)
//{
//	void fun(struct student* a, struct student* b);
//	void print(struct student* a);
//	struct student a, b, c;
//	a.name = 'l';
//	b.name = 't';
//	c.name = 'x';
//	a.sex = 'L';
//	b.sex = 'L';
//	c.sex = 'V';
//	a.grade = 99;
//	b.grade = 100;
//	c.grade = 98;
//	a.text = &b;
//	b.text = &c;
//	c.text = NULL;
//	print(&a);
//	fun(&a,&b);
//
//}
//void fun(struct student* a, struct student* b)
//{
//	struct student*head,* p,  * p2;
//	int max;
//	p = a;
//	p2 = b;
//	max = p->grade;
//	do
//	{
//		if (p->grade < p2->grade)
//		{
//			max = p2->grade;
//		}
//		p2 = p2->text;
//	} while (p2!=NULL);
//	printf("max is %d", max);
//}
//void print(struct student *a)
//{
//	struct student* p, * head;
//	p = head = a;
//	//����:
//	while (p != NULL)
//	{
//		printf("%c  %c   %d\n", p->name, p->sex, p->grade);
//		p = p->text;
//	}
//}
//int main()
//{
//	text();
//	
//	//print();
//	return 0;
//}


//��д�������㲢������ж���ʽ��ֵ

//#include <stdio.h>
//#include <string.h>
//int jc(int n)
//{
//	int i=1;
//	if (n == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		i = n * jc(n - 1);
//	}
//	return i;
//}
//double fun(int n)
//{
//	double sn = 1;
//	int i;
//	for (i = 1; i <= n; i++)
//	{
//		sn = sn + 1.0 / jc(i);
//	}
//	return sn;
//}
//int main(void)
//{
//	int n;
//	int i;
//	double sn;
//	while (1)
//	{
//		printf("������n�Ĵ�С:");
//		scanf_s("%d", &n);
//		if (n > 1 && n < 100)
//		{
//			break;
//		}
//		else
//		{
//			printf("������Χ����������!");
//		}
//	}
//	sn = fun(n);
//	printf("sn = %.6lf\n",sn);
//	return 0;
//}


//����λ����λ�û���
//#include <stdio.h>
//void main(void)
//{
//	int a, b;
//	int a1, a2, b1,b2;
//	
//	while (1)
//	{
//		printf("��������������������:");
//		scanf_s("%d,%d", &a, &b);
//		if ((a > 0 && a < 100) && (b > 0 && b < 100))
//		{
//			break;
//		}
//		else
//		{
//			printf("ֵ������Χ�����������룺");
//		}
//	}
//	//���ȱ���A��ʮλ�͸�λ
////��λ:
//	a1 = a % 10;
//	//ʮλ:
//	a2 = a / 10;
//	//����B��ʮλ�͸�λ
//	b1 = b % 10;
//	b2 = b / 10;
//	//������������������
//	printf("%d%d%d%d", a2,b1 , a1, b2);
//
//}

//����������м�����
//#include <stdio.h>
//#include <string.h>
//void fun(int n)
//{
//	double s=0;
//	int i;
//	for (i = 1; i <= n; i++)
//	{
//		s = s + (1.0 / (i * (i + 1)));
//	}
//	printf("s= %.6lf", s);
//}
//int main(void)
//{
//	int n;
//	printf("������N��ֵ:");
//	scanf_s("%d", &n);
//	fun(n);
//	return 0;
//}

//�ƶ��ַ����е�����:

//#include <stdio.h>
//#include <string.h>
//#include <math.h>
//int main(void)
//{
//	int i;
//	char c;
//	char a[20] = "stringxerz";
//	while (1)
//	{
//		printf("��������Ҫ���ҵ��ַ�");
//		c = getchar();
//		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
//		{
//			break;
//		}
//		else
//		{
//			printf("�����������!\n");
//		}
//	}
//	for (i = 0; i < strlen(a); i++)
//	{
//		if (a[i] == c)
//		{
//			printf("�����±�:%d", i);
//			break;
//		}
//
//
//	}
//	if (i >= strlen(a))
//	{
//		printf("û���ҵ�!");
//	}
//	
//	
//	return 0;
//}


#include <stdio.h>
#include <string.h>
void fun(char(*p)[20])
{
	int i;
	int max;
	char(*Max)[20] = p;
	max = strlen(p);
	for (i = 0; i < 3; i++)
	{
		if (max< strlen(p + i))
		{
			max =strlen(p + i);
			Max= p + i;
		}
	}
	printf("max is %d\n", max);
	printf("Max is %s\n", Max);

}
int main(void)
{
	char a[3][20];
	char(*p)[20] = a;
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("�������%d���ַ���", i);
		gets(p + i);
		printf("\n");
	}
	fun(p);
	//�������:
//	for(i=0;i<3;i++)
//	{
//
//printf("%s",p+i);
//printf("\n");
//	}
	
	return 0;
}

