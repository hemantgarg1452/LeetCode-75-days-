class Solution {
public:
    vector<int> countBits(int n) {
    // follow-up (2nd)    
        // vector<int>ans(n+1);

        // for(int i=0; i<=n; ++i){
        //     ans[i] = __builtin_popcount(i);
        // }
        // return ans;

    // follow-up (1st)
        vector<int>ans(n+1);
        if(n==0) return ans;

        // set 0 to 0th bit
        ans[0] = 0;

        for(int i=1; i<=n; ++i){
            if(i%2!=0) ans[i] = ans[i/2]+1;

            if(i%2==0) ans[i] = ans[i/2];
        }

        return ans;
    }
};