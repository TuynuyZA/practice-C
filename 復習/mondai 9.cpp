// ���K.cpp : �A�v���P�[�V�����̃G���g�� �|�C���g���`���܂��B
//
#include "stdafx.h"
#define  _CRT_SECURE_NO_WARNINGS
#include "stdlib.h"
#include <iostream>
#include <stdio.h>
using namespace std;

//�����Ɋ֐����쐬 
float InputFloatValue() {
	float data;
	cout << "�����̒l����́F";
	cin >> data;
	return data;
}

int main(void)
{
	float input;

	input = InputFloatValue();

	cout << "���͂��ꂽ�l�� " << input;
	puts("\n");
	system("pause");
}


