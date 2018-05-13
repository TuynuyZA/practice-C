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
	char str[100];

	cin >> str;

	int Cnt = 0;
	int Cnt2 = 0;
	for (int i = 0; str[i] != '\0';++i) {
		Cnt++;
	}
	cout << "�������@= "<< Cnt <<"\n";

	for (int i = 0; str[i] != '\0'; ++i) {
		if (str[i] == 'z')
		{
			Cnt2++;
		}
	}

	// Keng change this
	cout << "z �������@= " << Cnt2 << "\n";
	system("pause");

}


