#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu() {
	printf("*****************************************\n");
	printf("***********  1.Play  ********************\n");
	printf("***********  0.Exit  ********************\n");
	printf("*****************************************\n");
}
void game() {
	//生成随机数
	int random_num = rand() % 100 + 1;
	int input = 0;
	while (1) {
		printf("请输入你猜的数字->:\n");
		scanf("%d", &input);
		if (input > random_num) {
			printf("猜大了\n");
			
		}
		else if (input < random_num) {
			printf("猜小了\n");
		
		}
		else {
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}



int main() {
	int n = 0;
	int input = 0;
	//随机产生一个数字,每次程序运行时都能产生不同的数字
	srand((unsigned int)time(NULL));
	do {
		//进入菜单
		menu();
		printf("请选择->:\n");
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误,请重新输入！\n");
			break;
		}
	} while (input);


	return 0;
}