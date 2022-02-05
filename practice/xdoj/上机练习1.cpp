#include<stdio.h>
int main()
{
	/* 和差积商
    int a,b;
	scanf("%d %d",&a,&b);
	printf("%d\n",a+b);
		printf("%d\n",a-b);
	printf("%d\n",a*b);
	printf("%d\n",a/b);*/
	/*三个数之和
    int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	printf("%d\n",a+b+c);*/
	
	/*计算长方体体积
    float lenth,wide,high;
	scanf("%f %f %f",&lenth,&wide,&high);
		printf("%0.3f\n",lenth*wide*high);*/
	/*球体体积，声明常量的两种格式要牢记
	const double pi=3.14;
	float r;
	scanf ("%f",&r);
	printf("%0.2f\n",4.0/3*pi*r*r*r);*/
    /*1.字符输入输出
char a,b,c,d,e;
scanf("%c|%c|%c|%c|%c",&a,&b,&c,&d,&e);
printf("%c%c%c%c%c!",a+32,b+32,c+32,d+32,e+32);*/
/*1.数字字符
问题描述：
通过键盘输入1个整数a（0<=a<=4）,1个数字字符b（’0’<=b<=’5’），求a+b。

输入说明：
整形数据、数字字符通过键盘输入，输入的整形数据介于0和4之间，输入的数字字符介于‘0’和‘5’之间，二个输入数之间用“，”分隔。

输出说明：
分别以整数形式及字符形式输出a+b，输出的二个数之间用“，”分隔。

输入样例：
3 ,5

输出样例：
56，8
*/
int a;char b;
scanf("%d,%c",&a,&b);

printf("%d %c",a+b,);

}
