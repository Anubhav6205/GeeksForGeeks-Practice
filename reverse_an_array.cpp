#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main() {
	//code
	int T;
	cin>>T;
	while(T--)
	{
	    int N;
	    cin>>N;
	    vector<int>A(N);
	    for(int i=0;i<N;i++)
	    {
	        cin>>A[i];
	    }
	    reverse(A.begin(),A.end());
	    for(int X:A)
	    {
	        cout<<X<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}