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
	float up;
	float down;
	float Height;
	float area;

		cout << "��� �F";
		cin >> up;
		cout << "���� �F";
		cin >> down;
		cout << "���� �F";
		cin >> Height;

		area = 0.5 * Height * (up + down);

		printf("��� %.1f ���� %.1f �����@%.1f �̑�`�̖ʐς� %.1f �ł�\n", up, down, Height, area);

	system("pause");
}


