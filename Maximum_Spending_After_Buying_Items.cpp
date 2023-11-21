/*
Problem
You are given a 0-indexed m * n integer matrix values, representing the values of m * n different items in m different shops. Each shop has n items where the jth item in the ith shop has a value of values[i][j]. Additionally, the items in the ith shop are sorted in non-increasing order of value. That is, values[i][j] >= values[i][j + 1] for all 0 <= j < n - 1.
On each day, you would like to buy a single item from one of the shops. Specifically, On the dth day you can:
Pick any shop i.
Buy the rightmost available item j for the price of values[i][j] * d. That is, find the greatest index j such that item j was never bought before, and buy it for the price of values[i][j] * d.
Note that all items are pairwise different. For example, if you have bought item 0 from shop 1, you can still buy item 0 from any other shop.
Return the maximum amount of money that can be spent on buying all m * n products.
*/

My Code
class Solution {
public:
    long long maxSpending(vector<vector<int>>& values) {
    vector<int> nums;

    int n = values.size();
    int m = values[0].size();

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            nums.push_back(values[i][j]);
        }
    }
        
        
    sort(nums.begin(), nums.end());
    long long ans = 0;

    for (int i = 0; i<nums.size();i++) {
        ans+=static_cast<long long>(nums[i]) * (i + 1);
    }

    return ans;
}

};
