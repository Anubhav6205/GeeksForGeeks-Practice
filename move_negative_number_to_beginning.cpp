vector<int> separateNegativeAndPositive(vector<int> &nums){
    vector<int>ans;
    int i;
    for(i=0;i<nums.size();i++)
    {
        if(nums[i]<0)
        {
            ans.insert(ans.begin(),nums[i]);
        }
        else
        {
            ans.push_back(nums[i]);
        }
    }
    return ans;
    // Write your code here.
}