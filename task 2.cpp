/*Write a program that will read 10 integers from the keyboard and place them in an array. The program
then will sort the array into ascending and descending order and print the sorted list. The program must
not change the original array or not create any other integer arrays.*/
#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "how many numbers to write: ";
	cin >> n;
	int *array= new int(n);
	int *arr= new int(n);
	for(int i=0;i<n;i++)
	{
		cout << "enter number: ";
		cin >> array[i];
	}
		for(int i=0;i<n;i++)
	{
		arr[i]=array[i];
	}
		for(int i=0;i<n;i++) // descending
	{
		int temp;		
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]<arr[j])
			{
				temp  =arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	cout << "descending version: " << endl;
	for(int i=0;i<n;i++)
	{
		cout << arr[i];
	}
	cout << "\nascending version: " << endl;
	for(int i=n-1;i>=0;i--)
	{
		cout << arr[i];
	}
}
