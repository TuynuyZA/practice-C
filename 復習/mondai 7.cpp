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
	for (int i = 1; i < 8; ++i) {
		for (int j = 0; j < i; ++j) {
			cout << i;
		}
		cout << "\n";
	}
	system("pause");
}

