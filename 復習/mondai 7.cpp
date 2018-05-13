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
	for (int i = 1; i < 8; ++i) {
		for (int j = 0; j < i; ++j) {
			cout << i;
		}
		cout << "\n";
	}
	system("pause");
}

