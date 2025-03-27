#include<bits/stdc++.h>
#include "selectionsort.h"
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[n];
    }

    for(int i=n; i>1; i--){
        for(int j=0; j<n; j++){
            swap(arr[j], arr[j+1]);
        }
    }

    for(auto it: arr){
        cout<<it<<" ";
    }

    // selectionsort();
    return 0;
}
void selectionsort()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i <= n - 2; i++)
    {
        int min = i;
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
    }
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;
}