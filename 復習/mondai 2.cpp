// 復習.cpp : アプリケーションのエントリ ポイントを定義します。
//
#include "stdafx.h"
#define  _CRT_SECURE_NO_WARNINGS
#include "stdlib.h"
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	puts("問題2\n");

	puts("あなたは何歳ですか");

	int i;
	scanf_s("%3d", &i);
	//cin >> i;

	if (i < 12) {
		printf("700円");
	}
	else if (i < 60) {
		printf("1700円");
	}
	else {
		printf("1200円");
	}
	puts("\n");
	system("PAUSE");
}

