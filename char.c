#include <stdio.h>

//全局变量的声明周期是main函数的生命周期，main的生命周期就是整个程序的生命周期

//int main()
//{
//	{
//		int a = 1;
//		printf("%d\n", a);//打印ok，因为这个变量出了这个大括号，生命周期就结束了。
//	}
//	printf("%d\n", a);//打印error，这里生命周期结束了，就没有可以调用的变量了。
//	return 0;
//}



//int main()
//{
//	extern int global;//外部符号声明extern
//	printf("%d\n", global);
//	return 0;
//}


//个人测试
//int main()
//{ 
//	int num1;
//	int num2;
//	int sum;
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum=%d\n", sum);
//	return 0;
//}




//int main()
//{
//	int sum = 0;//C语言的变量定义不能放在中间，必须得放在开头才行。
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);//&去地址符号，把这个值放在这个地址
//	
//	sum = num1 + num2;
//	printf("sum=%d\n", sum);
//	return 0;
//}
//int main()
//{
//	{
//		int a = 0;//局部只能在局部使用
//	}
//	printf("%d\n",a);//这个a是未声明的变量，因为上面那个a是在大括号里面的，属于局部变量，用不了。
//	return 0;
//}
//
//int a = 100;
//int main()
//{
//	int a = 20;
//	printf("%d\n", a);
	//局部变量名字和全局变量名字相同的时候，局部变量优先，不建议两个变量名字相同。


//int num2 = 20;//全局变量--定义在代码块之外的（{}）外部的
//
//int main()
//{
//	int num1 = 10;//局部变量--({})之内的

	//short age = 20;//短整型，2字节16比特位，可以用来表示2^16的数字（因为是二进制）
	//printf("%d\n", age);
	//printf("%d\n", sizeof(long long));//sizeof是表示这个数据类型的长度

	//double f = 3.14;
	//printf("%lf\n", f);//%lf打印双精度浮点数

	//float f = 5.0;
	//printf("%f\n", f);//%f打印浮点型；


	//int age = 21;
	//printf("%d\n",age);//%d打印整形十进制数据
	
	
	//char ch = 'a';//向系统申请内存
	//printf("%c\n", ch);//%c打印字符类型的数据
	//return 0;
