#include<iostream>
#include<vector>
using namespace std;
bool pos(vector<int> arr,int sum,int n)
{
    if(sum==0)
    {
        return true;
    }
    if(n==0)
    {
        return false;
    }
    if(arr[n-1]>sum)
    {
        return pos(arr,sum,n-1);
    }
    return pos(arr,sum,n-1)|| pos(arr,sum-arr[n-1],n-1);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int pre[n];
    pre[0]=arr[0];
    int suf[n];
    suf[n-1]=arr[n-1];
    for(int i=1;i<n-1;i++)
    {
        pre[i]=pre[i-1]+arr[i];
    }
    for(int i=n-2;i>=0;i--)
    {
        suf[i]=suf[i+1]+arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(pre[i]==suf[i])
        {
            return i;
        }
    }
    return -1;
}