#include <iostream>
//#include <bits/stdc++.h>
//#include <array>
//#include <functional>
#include <algorithm>
//#include <vector>


using namespace std;


int Mas[10] = { 10,3,-2,3,23,1,1,1,9,2 };
int Mas1[10];
int isMax() {

	int n = sizeof(Mas) / sizeof(Mas[0]);
	sort(Mas, Mas + n, greater<int>());

	for (int i = 0; i < 10; i++)
	{
		cout << Mas[i] << endl;
	}


	Mas1[0] = Mas[0];
	Mas1[1] = Mas[1];
	Mas1[2] = Mas[2];


	for (int i = 0; i < 10; i++)
	{
		if (Mas1[0] <= Mas[i])
		{
			Mas1[0] = Mas[i];
		}
		else if (Mas1[1] <= Mas[i])
		{
			Mas1[1] = Mas[i];
		}
		else if (Mas1[2] < Mas[i]) 
		{
			Mas1[2] = Mas[i];
		}
	}

	cout << Mas1[0] << " " << Mas1[1] << " " << Mas1[2] << endl;







	return 1;
}




int main() {
	for (int i = 0; i < 10; i++)
	{
	//	cin >> Mas[i];
	}
	isMax();




	return 1;
}
