#include <iostream>
using namespace std;
int main() {
	int num;
	cin >> num;    //Reading input from STDIN
	cout << "Input number is " << num << endl;
	for(int i=1; i<=num; i++)
	{
		for(int j=1; j<=num; j++)
		{
			if(i==1 || i==num || num-i-j==-1)
			{
				cout<<"*";
			}
			else{
				cout<<" ";
			}

		}
		cout<<'\n';
	}	// Writing output to STDOUT
}