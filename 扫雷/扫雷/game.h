#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define row 9
#define col 9
#define EASY_COUNT 10

#define rows row+2
#define cols col+2

void a(char a[rows][cols],char set);

void b(char b[rows][cols], int q, int e);

void SetMine(char board[rows][cols], int q, int e);

void FinfMine(char m[rows][cols],char s[rows][cols], int q, int e);