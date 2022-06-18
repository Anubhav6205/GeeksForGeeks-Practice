#include <bits/stdc++.h>
#include <vector>
using namespace std;

void replaceel(vector<int> &arr)
{
    int num[1000] = {0};
    int i , j;
    for (i = 0; i < arr.size(); i++)
    {
        num[arr[i]]++;
        cout<<"num[arr[i]]="<<num[arr[i]]<<" arr[i]="<<arr[i]<<endl;
        if (num[arr[i] ]>1)
        {
            cout<<"entered"<<endl;
            for (j = arr[i]; j < 1000; j++)
            {
                if (num[j] == 0)
                {
                    arr[i] = j;
                    num[j]++;
                    break;
                }
            }
        }
    }
    for(int x:arr)
    {
        cout<<x<<" ";
    }
}

int main()
{
    vector<int> arr{9,9,9,9,9};
    replaceel(arr);
}
