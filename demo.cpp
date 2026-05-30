#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    unordered_map<int, int> mpp;
    // for(int i=0;i<n;i++)
    // {
    //     cin>>arr[i];
    //     mpp[arr[i]]++;
    // }
    while(n--)
    {
        int t;
        cin>>t;
        mpp[t]++;
    }
    for(auto i : mpp)
        cout<<i.first<<"->"<<i.second<<endl;
}