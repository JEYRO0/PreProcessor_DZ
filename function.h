#ifndef FUNCTION_H
#define FUNCTION_H

#include <iostream>

void FillInt(int massive[], int size);
void ShowInt(int massive[], int size);
int MinInt(int massive[], int size);
int MaxInt(int massive[], int size);
void SortInt(int massive[], int size);
void EditInt(int massive[], int size, int index, int newValue);


void FillDouble(double massive[], int size);
void ShowDouble(double massive[], int size);
double MinDouble(double massive[], int size);
double MaxDouble(double massive[], int size);
void SortDouble(double massive[], int size);
void EditDouble(double massive[], int size, int index, double newValue);


void FillChar(char massive[], int size);
void ShowChar(char massive[], int size);
char MinChar(char massive[], int size);
char MaxChar(char massive[], int size);
void SortChar(char massive[], int size);
void EditChar(char massive[], int size, int index, char newValue);


#ifdef INTEGER
#define FillMassive FillInt
#define ShowMassive ShowInt
#define Min MinInt
#define Max MaxInt
#define SortMassive SortInt
#define EditMassive EditInt
#elif defined(DOUBLE)
#define FillMassive FillDouble
#define ShowMassive ShowDouble
#define Min MinDouble
#define Max MaxDouble
#define SortMassive SortDouble
#define EditMassive EditDouble
#elif defined(CHAR)
#define FillMassive FillChar
#define ShowMassive ShowChar
#define Min MinChar
#define Max MaxChar
#define SortMassive SortChar
#define EditMassive EditChar
#endif

#endif
#pragma once
