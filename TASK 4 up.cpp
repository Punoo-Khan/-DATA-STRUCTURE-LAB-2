/*Write a program that creates a 2D array of 5x5 values of type Boolean. Suppose indices represent
people and the value at row i, column j of a 2D array is true just in case i and j are friends and false
otherwise. Use initializer list to instantiate and initialize your array to represent the following
configuration: (* means “friends”)*/

#include <iostream>

using namespace std;

int main() {
	bool array[5][5]= {{0,1,0,1,1},{1,0,1,0,1},{0,1,0,0,0},{1,0,0,0,1},{1,1,0,1,0}};
	for(int i=0; i<5; i++) {
		cout << i << "| " ;
		for(int j=0; j<5; j++) {
			if(array[i][j]==1)
				cout << "*";
			else
				cout << array[i][j];
		}
		cout << endl;
	}
		cout << "enter the 2 numbers to find relation betweens: " << endl;
	int a,b;
	cin >> a >> b;
		bool count=0;
	for(int i=0; i<5; i++) {
			if(array[i][a] && array[i][b])
			{
			//	cout << array[i][a] << "  " << array[i][b] << endl;
				count=1;
			cout << a << "and " << b << "are common friends with " << i << endl;
			}
		}   
			if(!count)
			cout << "both dont have common friends " << endl;

	return 0;
}
