//#include <stdio.h>
//
//int main(void)
//{
//	int num1=0, num2=0;
//	int num3 = 30, num4 = 40;
//	printf("num1 : %d, num2 : %d\n", num1, num2);
//	num1 = 10;
//	num2 = 20;
//	printf("num1 : %d, num2 : %d \n", num1, num2);
//	printf("num3 : %d, num4 : %d \n", num3, num4);
//	return 0;
//}

//#include <stdio.h>
//#pragma warning(disable:4996)
//int main(void)
//{
//	int num1, num2;
//	printf("정수 입력 :");
//	scanf("%d %d", &num1, &num2);
//	printf("%d - %d = %d \n", num1, num2, num1 - num2);
//	printf("%d * %d = %d", num1, num2, num1 * num2);
//	return 0;
//}

//#include <stdio.h>
//#pragma warning(disable:4996)
//int main(void)
//{
//	int num1, num2, num3;
//
//	printf("정수 입력 :");
//	scanf("%d %d %d", &num1, &num2, &num3);
//	printf("%d x %d + %d = %d", num1, num2, num3, num1 * num2 + num3);
//}

//#include <stdio.h>
//#pragma warning(disable:4996)
//int main(void)
//{
//	int num;
//	printf("정수 1개를 입력 :");
//	scanf("%d",&num);
//	printf("%d", num * num);
//}

//#include <stdio.h>
//#pragma warning(disable:4996)
//int main(void)
//{
//	int num1, num2;
//	printf("정수를 입력 :");
//	scanf("%d %d", &num1, &num2);
//	printf("%d...%d", num1 / num2,num1%num2);
// return 0;
//}

//#include <stdio.h>
//#pragma warning(disable:4996)
//int main(void)
//{
//	int num1,num2,num3,nums;
//	printf("정수를 입력 :");
//	scanf("%d %d %d", &num1,&num2,&num3);
//	nums = (num1 - num2) * (num2 + num3) * (num3 % num1);
//	printf("%d",nums);
//	return 0;
//}

#include <stdio.h>
#pragma warning(disable:4996)
int main(void)
{
	int num1, num2;
	printf("정수 두개를 입력 (x y)");
	scanf("%d %d", &num1, &num2);
	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %d\n", num1, num2, num1 / num2);
	printf("%d %% %d = %d\n", num1, num2, num1 % num2);
	printf("%d^2 = %d\n", num1, num1 * num1);
	printf("%d^2 = %d\n", num2, num2 * num2);
	return 0;
}
