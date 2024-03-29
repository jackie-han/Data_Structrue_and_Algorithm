#pragma once
#include<iostream>

void InsertSort(int A[], int N)
{
	int j, P;

	int Tmp;
	for (P = 1; P < N; P++)
	{
		Tmp = A[P];
		for (j = P; j > 0 && A[j - 1] > Tmp; j--)
			A[j] = A[j - 1];
		A[j] = Tmp;
	}
}

void  PrintArr(int A[], int N)
{
	for (int i = 0; i < N; i++)
		std::cout << A << " ";
	std::cout << std::endl;
}