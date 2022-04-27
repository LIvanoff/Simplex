#include "pch.h"
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Simplex {
private:
	vector<int> Cj = { 3,5 }; // коэф зависимых переменных
	vector<int> Cb = { 0,0,0,0 }; // коэф базисных пременных
	float delta1 = 0;
	float delta2 = 0;
	float Q = 0;
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

		// расчёт delta1, delta2 и Q
		for(int i = 0; i < Cb.size(); i++)
		{

		}
		this->simp_arr[4][0] = delta1 - 3;
		this->simp_arr[4][1] = delta2 - 5;
		this->simp_arr[4][2] = Q;
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
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 3; j++)
				{

				}
			}
		}

	}

	int findCol()
	{
		int col = 0;
		for(int i = 4; i < 5 ; i++)
		{
			for (int j = 0; j < 1; j++)
			{
				
				float x1 = simp_arr[i][j];
				x1 = abs(x1);
				float x2 = simp_arr[i][j+1];
				x2 = abs(x2);
				cout << x1<< " "<<x2;
				if (x1 < x2 || x1 == x2)
				{
					col = 1;
					break;
				}
			}
		}
		return col;
	}

	int findRow(int col)
	{
		int row = 0;
		int temp = 0;
		for(int i = 0; i < 4; i++ )
		{
			for (int j = col; j < col+1; j++ )
			{
				if(simp_arr[i][j]>0 && temp > (simp_arr[i][2]/ simp_arr[i][j]) > 0 )
				{
					temp = simp_arr[i][2] / simp_arr[i][j];
					row = i;
				}
			}
		}
		return row;
	}
};

int main()
{
	float arr[5][3] = { {10,70,570},{20,50,420},{300,400,5000},{200,100,3400}, {0,0,0} };
	Simplex sp(arr);
	sp.printSimplex();
}