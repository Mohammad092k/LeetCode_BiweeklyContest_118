/*
Problem
You are given two positive integers n and limit.
Return the total number of ways to distribute n candies among 3 children such that no child gets more than limit candies.
Constraints:
1 <= n <= 106
1 <= limit <= 106
*/

class Solution {
public:
#define ll long long
    long long solve(int number) {
        
    return 1ll*number*(number-1)/2;
        
}
    long long distributeCandies(int n, int limit) {
        if (n>3*limit) {
        return 0;
    }

    long long val= solve(n+2);
        
        

    if (n>limit) {
        val-=3*solve(n-limit+1);
    }
 
       if (n-2>=2*limit) {
        val+=3*solve(n-2*limit);
          }

        return val;
    }
};
