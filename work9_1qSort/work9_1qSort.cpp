#include "stdafx.h"
#include <algorithm>
#include <iostream>
using namespace std;
int compare_int(const void *a, const void *b);
int compare_char(const void *a, const void *b);



int main( )
{
	int list1[10] = { 3,-8,9,6,-9,5,2,-6,7,1 };

	char list2[5][10] = { "catwq", "cariuy", "cab", "capuytre", "can2" };
	char list3[5] = "bca";
	for (size_t i = 0; i < 10; i++)
		cout << list1[i] << "\t";
	cout << endl << endl;

	qsort(list1, 10, sizeof list1[0], compare_int);
	for (size_t i = 0; i < 10; i++)
		cout << list1[i] << "\t";
	cout << endl << endl;

	for (size_t i = 0; i < 5; i++)
		cout << list2[i] << "\t";
	cout << endl << endl;

	for (size_t i = 0; i < 5; i++)
		qsort(list2[i], strlen(list2[i]), sizeof(char), compare_char);
	for (size_t i = 0; i < 5; i++)
		cout << list2[i] << "\t";
	cout << endl << endl;


	system("pause");
	return 0;
}

int compare_int(const void *a, const void *b)
{
	return (*(int*)a - *(int*)b);

}

int compare_char(const void *a, const void *b)
{
	return (*(char*)a - *(char*)b);

}