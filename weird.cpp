#include<bits/stdc++.h>
using namespace std;
int weird(vector<int> arr,int n)
{
    int s=0;
    int i=0;
    while(i<n)
    {
        if(arr[i]==1)
        {
            s++;
        }
        else{
            s--;
        }
        i++;
    }
    if(s<0)
    {
        return 0;
    }
    i=0;
    int k=0;
    for(;i<n;i++)
    {
        if(k>=s)
        {
            return i;
        }
        if(arr[i]==1)
        {
            k++;
        }
        else
        {
            k--;
        }
    }
}
int main()
{
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(0);
    arr.push_back(0);
    arr.push_back(1);
    arr.push_back(1);
    cout<<weird(arr,arr.size());
}