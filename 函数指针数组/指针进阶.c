#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//int fun() {
//	printf("hehe\n");
//	return 10;
//}
//
//int add(int a, int b) {
//	printf("��ѧ�ˣ�����\n");
//	return 1000;
//}
//
//
int add(int a, int b) {
	return a + b;
}
int minus(int a, int b) {
	return a - b;
}
int mul(int a, int b) {
	return a * b;
}
int divs(int a, int b) {
	return a / b;
}

int main() {
	printf("====================================\n");
	printf("0.�˳�������\n");
	printf("1.add\n");
	printf("2.minus\n");
	printf("3.mul\n");
	printf("4.div\n");
	printf("====================================\n");
	//����ָ������
	int(*p[5])(int ,int ) = { 0,add,minus,mul,divs };
	
	while (1) {	
		printf("������ѡ�");
		int choice;
		scanf("%d", &choice);
		if (choice == 0) {
			break;
		}
		if (choice <= 4 && choice > 0) {
			printf("�������������");
			int a, b;
			scanf("%d%d", &a, &b);
			int result = p[choice](a, b);
			printf("result=%d \n", result);
		}
		else {
			printf("������󣡣���\n");
		}
	}
	system("pause");
	return 0;
}





	//printf("%d  \n", (*fun)());
	////printf("%p  \n", fun);
	//int(*p)() = fun;
	//printf("%d  \n", (*p)());
	////printf("%p  \n", (&fun) );

	////����p2�������� int (*) (int, int)
	//int(*p2) (int, int) = add;
	//printf("%d  \n", (*p2)(1,2));