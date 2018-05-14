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
	float up;
	float down;
	float Height;
	float area;

		cout << "上底 ：";
		cin >> up;
		cout << "下底 ：";
		cin >> down;
		cout << "高さ ：";
		cin >> Height;

		area = 0.5 * Height * (up + down);

		printf("上底 %.1f 下底 %.1f 高さ　%.1f の台形の面積は %.1f です\n", up, down, Height, area);

	system("pause");
}


