// 復習.cpp : アプリケーションのエントリ ポイントを定義します。
//
#include "stdafx.h"
#define  _CRT_SECURE_NO_WARNINGS
#include "stdlib.h"
#include <iostream>
#include <stdio.h>
using namespace std;

int main(void)
{
	float number;

	do {
		cout << "0-100 値を入力してください ：";
		cin >> number;
	} while (number < 0 || number > 100);
		
		if (number >= 50) {
			cout << "クリア！";
		}
		else {
			cout << "ミス！";
		}
	system("pause");
}


