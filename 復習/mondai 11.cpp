// ���K.cpp : �A�v���P�[�V�����̃G���g�� �|�C���g���`���܂��B
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
		cout << "0-100 �l����͂��Ă������� �F";
		cin >> number;
	} while (number < 0 || number > 100);
		
		if (number >= 50) {
			cout << "�N���A�I";
		}
		else {
			cout << "�~�X�I";
		}
	system("pause");
}


