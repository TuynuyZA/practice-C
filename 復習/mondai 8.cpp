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
	char input = 'b';
	cout << "a うつまでにループを繰り返します\n";
	while (input != 'a') {
		cin >> input;
	}
	cout << "loop exited";
	system("pause");
}

