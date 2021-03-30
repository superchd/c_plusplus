#include <cstdio>
#include <iostream>

using namespace :: std;

int main(void)
{
	int a[3];
	int i;
	int j = 0;
	i = 0;
	int temp;
	while (i < 3)
	{
		cin >> a[i];
		i++;
	}
	i = 0;
	while (i < 3)
	{
		j = i + 1;
		while (j < 3)
		{
			if (a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
			j++;
		}
		i++;
	}
 	i = 0;
	while (i < 3)
	{
		cout << a[i] << ", ";
		i++;
	}
}




