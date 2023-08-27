vector<int> countFrequency(int n, int x, vector<int> &nums){
    vector<int> ans(n, 0);
    for( int i = 0; i < n; i++ ) {
        ans[nums[i] - 1 ]++;
    }
    return ans;    
}