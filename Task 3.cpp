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
		if(array[i] < 0)
		{
			cout << "only postive integers " << endl;
			i--;
		}
		
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
			if(array[i]<array[j])
			{
				temp  =array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}

	for(int i=0;i<n;i++)  // ascending
	{
		int temp;
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp  =arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	int count=0;
	int count1=0;
	for(int i=0;i<= n ;i++)
	{
		if(i%2!=0)
		{
			cout << arr[count1] << endl;
			count1++;
		}
		else
		{
			cout << array[count] << endl;
			count++;
		}
	}
}
