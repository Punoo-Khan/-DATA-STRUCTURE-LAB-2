#include <iostream>
using namespace std;

int main()
{
	int count =0;
	int array[3][3];
	for(int i=0;i<3;i++)
	{
		for(int j=0; j< 3;j++)
		{
			cout << "Row: " << i+1 << " coloumn: " << j+1 << " ";
			cin >> array[i][j];
			if(i==j && array[i][j]==1)
			{
				count++;
				}	
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0; j< 3;j++)
		{
			cout << array[i][j];
		}
		cout << endl;
	}
	if(count == 3)
	{
		cout << "it is identity matrix";
	}
	
}
