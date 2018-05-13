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
	puts("問題3\n");

	int a[5] = {};
	int i;
	int j;

	for (i = 0; i < 5; i++) {
		puts("配列の中身を入れ");
		cin >> j;
		a[i] += j;
	}

	for (i = 0; i < 5; i++) {
		cout << a[i];
	}
	
	puts("\n");
	system("PAUSE");
}

