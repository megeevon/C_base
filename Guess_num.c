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
	//���������
	int random_num = rand() % 100 + 1;
	int input = 0;
	while (1) {
		printf("��������µ�����->:\n");
		scanf("%d", &input);
		if (input > random_num) {
			printf("�´���\n");
			
		}
		else if (input < random_num) {
			printf("��С��\n");
		
		}
		else {
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}



int main() {
	int n = 0;
	int input = 0;
	//�������һ������,ÿ�γ�������ʱ���ܲ�����ͬ������
	srand((unsigned int)time(NULL));
	do {
		//����˵�
		menu();
		printf("��ѡ��->:\n");
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������,���������룡\n");
			break;
		}
	} while (input);


	return 0;
}