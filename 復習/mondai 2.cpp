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
	puts("���2\n");

	puts("���Ȃ��͉��΂ł���");

	int i;
	scanf_s("%3d", &i);
	//cin >> i;

	if (i < 12) {
		printf("700�~");
	}
	else if (i < 60) {
		printf("1700�~");
	}
	else {
		printf("1200�~");
	}
	puts("\n");
	system("PAUSE");
}

