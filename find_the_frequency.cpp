/*Given a vector of N positive integers and an integer X. The task is to find the frequency of X in vector.*/
int findFrequency(vector<int> v, int x){
    
    int cnt=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==x)
        {
            cnt++;
        }
    }
    return cnt;
    // Your code here
}

