#include <iostream>
using namespace std;
int main() {
	string sub;
	int no[5];
	double gpa;
	char grade;
	int rows =5;
	int ** array= new int*[rows];
	for(int j=0; j<5; j++) {
		cout << "STUDENT NO " << j+1 << endl;
		cout << "how many subjects do you have: " << endl;
		cin >> no[j];
		array[j]= new int[no[j]];
		for(int i=0; i<no[j]; i++) {
			cout << "enter your grade :" << endl;
			cin >> grade;
			switch(grade) {
				case 'A':
					gpa=4;
					break;
				case 'B':
					gpa=3;
					break;
				case 'C':
					gpa=2;
					break;
				case 'D':
					gpa=1;
					break;
				case 'F':
					gpa=0;
					break;
				default:
					gpa=0;
					cout << "wrong values";
			}
			array[j][i]=gpa;
		}
	}
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<no[i];j++)
		{
			cout << " 		SUBJECT NO " << j+1 << " 		"; 
		}
		cout << endl;
		cout << "STUDENT NO " << i+1 <<  "		" ;
		for(int j=0;j<no[i];j++)
		{
			cout <<"" <<array[i][j] << "		" ;
		}
		cout << endl;
	}
	delete[] array;
}