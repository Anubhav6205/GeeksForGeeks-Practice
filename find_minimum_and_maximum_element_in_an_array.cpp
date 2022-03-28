/*Given an array A of size N of integers. Your task is to find the minimum and maximum elements in the array.*/

pair<long long, long long> getMinMax(long long a[], int n) {

       int i,maxx=INT_MIN,minn=INT_MAX;
    for(i=0;i<n;i++)
    {
    int mini=INT_MAX;
   int maxi=INT_MIN;
   for(int i=0;i<n;i++){
       if(a[i]<mini)
           mini=a[i];
       if(a[i]>maxi)
           maxi=a[i];
   }
   return {mini,maxi};
}

    
    
}