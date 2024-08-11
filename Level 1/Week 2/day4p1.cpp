#include <iostream>
using namespace std;
int main() {
	int num;
	cin >> num;    //Reading input from STDIN
	for(int i =1;i<=num; i++)
	{
		int val;
		if(i%2==1)
		{
			val = (i*(i+1))/2;
		}
		else
		{
			val = (i*(i-1))/2;
		}
		for(int j =1; j<=i; j++)
		{
			if(i%2==1)
			{
				cout<<val--;
				continue;
			}
			cout<<val++;
		}
		cout<<'\n';
	}	// Writing output to STDOUT
}