#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;

class Simplex {
private:
	vector<int> Cj = { 3,5 }; // коэф зависимых переменных
	vector<int> Cb = { 0,0,0,0 }; // коэф базисных пременных
	float simp_arr[5][3];
public:
	Simplex(float (&arr)[5][3]) 
	{
		for(int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				this->simp_arr[i][j] = arr[i][j];
			}
		}
	};
	void printSimplex()
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				cout << this->simp_arr[i][j] << " ";
			}
			cout << "\n";
		}
	}

	bool IsItEnd()
	{
		bool flag = true;

		for (int j = 1; j < 3; j++)
		{
			if (this->simp_arr[4, j] < 0)
			{
				flag = false;
				break;
			}
		}

		return flag;
	}

	void Calculate()
	{
		while(!IsItEnd())
		{

		}
	}

	int findCol()
	{
		int col = 0;
		for (int j = 0; j < 2; j++)
		{
			if (this->simp_arr[4, j] > this->simp_arr[4,j+1])
			{
				col = 1;
				break;
			}
		}
		return col;
	}

	int findRow(int col)
	{
		int row;
		for(int i = 0; i < 4)
		return row;
	}
};

int main()
{
	float arr[5][3] = { {10,70,570},{20,50,420},{300,400,5000},{200,100,3400}, {0,0,0} };
	Simplex sp(arr);
	sp.printSimplex();
}