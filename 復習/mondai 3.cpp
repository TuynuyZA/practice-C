// ���K.cpp : �A�v���P�[�V�����̃G���g�� �|�C���g���`���܂��B
//
#include "stdafx.h"
#define  _CRT_SECURE_NO_WARNINGS
#include "stdlib.h"
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	puts("���3\n");

	int a[5] = {};
	int i;
	int j;

	for (i = 0; i < 5; i++) {
		puts("�z��̒��g�����");
		cin >> j;
		a[i] += j;
	}

	for (i = 0; i < 5; i++) {
		cout << a[i];
	}
	
	puts("\n");
	system("PAUSE");
}

