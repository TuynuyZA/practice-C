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
	char str[100];

	cin >> str;

	int Cnt = 0;
	int Cnt2 = 0;
	for (int i = 0; str[i] != '\0';++i) {
		Cnt++;
	}
	cout << "文字数　= "<< Cnt <<"\n";

	for (int i = 0; str[i] != '\0'; ++i) {
		if (str[i] == 'z')
		{
			Cnt2++;
		}
	}
	cout << "z 文字数　= " << Cnt2 << "\n";
	system("pause");

}


