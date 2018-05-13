// 復習.cpp : アプリケーションのエントリ ポイントを定義します。
//
#include "stdafx.h"
#define  _CRT_SECURE_NO_WARNINGS
#include "stdlib.h"
#include <iostream>
#include <stdio.h>
using namespace std;

//ここに関数を作成 
float InputFloatValue() {
	float data;
	cout << "小数の値を入力：";
	cin >> data;
	return data;
}

int main(void)
{
	float input;

	input = InputFloatValue();

	cout << "入力された値は " << input;
	puts("\n");
	system("pause");
}


