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
	puts("���4\n");

	int a[5] = {1,2,3,4,5};
	int i;

	for (i = 0; i < 5; i++) {
		cout << a[i];
	}
	puts("\n");
	puts("����ւ�\n");

	for (i = 0; i < 5 / 2; i++) {
		int tmp		 = a[i];
		a[i]		 = a[5 - i - 1];
		a[5 - i - 1] = tmp;
	}

	for (i = 0; i < 5; i++) {
		cout << a[i];
	}
	puts("\n");
	system("pause");
}

