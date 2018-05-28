#include <iostream>
using namespace std;

void sort(int *arrint)
{
	for (int k = 0; k < 2; k++)
	{
		for (int m = 0; m < 2; m++)
		if (arrint[m+1] < arrint[m])
		{
			int memory = arrint[m+1];
			arrint[m+1] = arrint[m];
			arrint[m] = memory;
		}
	}
}
void sort(double *arrdouble)
{
	for (int k=0; k < 2; k++)
	{
		for (int m = 0; m < 2; m++)
		if (arrdouble[m+1] < arrdouble[m])
		{
			double memory = arrdouble[m+1];
			arrdouble[m+1] = arrdouble[m];
			arrdouble[m] = memory;
		}
	}
}

int main()
{
	int arr1[3];    // Создание массивов
	double arr2[3]; //
	
	for (int i=0; i<3; i++)
	  cin>> arr1[i];
	for (int i=0; i<3; i++)
	  cin >> arr2[i];
	sort(arr1);
	sort(arr2);
	cout << "--------------------------------" << endl;
	cout << "Integers: " << endl;
	for (int k = 0; k < 3; k++)
	  cout << "a[" << k+1 << "]= " << arr1[k] << endl;
	cout << "Doubles: " << endl;
	for (int k = 0; k < 3; k++)
	  cout << "b[" << k+1 << "]= " << arr2[k] << endl;
	return 0;
}
