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
	char input = 'b';
	cout << "a ���܂łɃ��[�v���J��Ԃ��܂�\n";
	while (input != 'a') {
		cin >> input;
	}
	cout << "loop exited";
	system("pause");
}

