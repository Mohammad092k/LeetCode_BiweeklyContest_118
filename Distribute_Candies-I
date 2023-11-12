
/*
Problem
You are given two positive integers n and limit.
Return the total number of ways to distribute n candies among 3 children such that no child gets more than limit candies.
*/
My Code

class Solution {
public:
    int distributeCandies(int n, int limit) {
         int ans = 0;

    
    for (int i = 0; i <= limit; i++) {
        for (int j = 0; j <= limit; j++) {
            int val = n - i - j;
        
            if (val >= 0 && val <= limit) {
                
                if (i <= limit && j <= limit && val<= limit) {
                    ans++;
                                    }
            }
            
        }
        
    }

    return ans;

    }
};
