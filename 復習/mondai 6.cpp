// 復習.cpp : アプリケーションのエントリ ポイントを定義します。
//
#include "stdafx.h"
#define  _CRT_SECURE_NO_WARNINGS
#include "stdlib.h"
#include <iostream>
#include <stdio.h>
using namespace std;

struct Monster
{
	int			id;
	float		posX;
	float		posY;
};
void Input(Monster* data) {
	cin >> data->id >> data->posX >> data->posY;
}
void Output(Monster* data) {
	cout << data->id << " " << data->posX << " " << data->posY;
}
int main()
{
	Monster monster[3] = {};
	Input(monster);
	Output(monster);
	puts("\n");
	system("pause");
}

