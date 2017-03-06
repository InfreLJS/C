#pragma once

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <Windows.h>
#include <stdlib.h>

#define WORDNUM 30*2
#define WORDLEN 50
#define ESC 27
#define EtoK a+1
#define QUITKEY "#q"
#define SHOWKEY "#s"
#define PASSKEY "#p"
#define HINTKEY "#h"

int Fileopen(FILE *in, int day);
int FILEERR(FILE * in);
int Choose(int day, char VocaDic[][WORDLEN]);
void MakeVocaDic(FILE * in, char VocaDic[][WORDLEN]);
void ShowAll(char VocaDic[][WORDLEN]);
void Exam(char VocaDic[][WORDLEN]);
void Play(char VocaDic[][WORDLEN]);
void Correct(int * check, int a);
void BackToFir();
void End();
void CtoS(char * ch);