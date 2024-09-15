#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int size;
        cin >> size;
        vector<vector<int>> v1(size, vector<int>(size)); // Initialize the 2D vector
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                cin>>v1[i][j];
            }
        }
        vector<vector<int>> v2(size, vector<int>(size));
        for(int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                v2[i][j]=v1[size-i-1][];
            }
        }
        for(int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                cout<<v1[i][j]<<' ';
            }
            cout<<'\n';
        }
        for(int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                cout<<v2[i][j]<<' ';
            }
            cout<<'\n';
        }

    }
    return 0;
}
