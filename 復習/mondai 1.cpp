// 復習.cpp : アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"
#define  _CRT_SECURE_NO_WARNINGS
#include "stdlib.h"
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	puts("問題1\n");
	int i;
	for (i = 0; i < 10; ++i) {
		printf("%2d",i);
	}
	puts("\n");
	int j;
	for (j = 0; j < 30; j = j + 3 ) {
		printf("%3d", j);
	}
	puts("\n");
	int k;
	for (k = 1; k < 20; k = k + 2) {
		printf("%3d", k);
	}
	puts("\n");
	int l;
	for (l = 0; l < 10; l++) {
		if (l == 0 || l == 4 || l == 8 ) {
			printf("○", l);
		}
		else {
			printf("●", l);
		}
	}
	puts("\n");
	system("PAUSE");
}

