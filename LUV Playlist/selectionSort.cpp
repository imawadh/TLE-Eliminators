# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
void selectionSort(int arr[],int size)
{
    for(int i=0; i<size-1; i++)
    {
        int idx = i;
        for(int j =i+1; j<size; j++)
        {
            if(arr[idx]>arr[j])
            {
                idx =j;
            }
        }
        swap(arr[idx],arr[i]);
    }

}
 
void awadh_solution(){
    int arr[] = {1,2,3,4,3,2,1,4,2,7,89,6,5,3,2,1,3,2,4,6,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    cout<<"Original Array :: ";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<' ';
    }

    selectionSort(arr,size);

    cout<<"\nSorted Array :: ";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<' ';
    }

 
 
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test;
    cin>>test;
    while(test--){
       awadh_solution();
    }
}