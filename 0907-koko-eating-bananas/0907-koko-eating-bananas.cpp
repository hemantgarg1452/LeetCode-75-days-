class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        
        int l = 1;
        int hg = 0;
        int sz = piles.size();

        for(int i=0; i<sz; ++i){
            hg = max(hg, piles[i]);
        }

        int ans = hg;
        while(l<=hg){
            int k = l+(hg-l)/2;
            long int hr = 0;

            for(int i=0; i<sz; ++i){
                hr += ceil((double)piles[i]/k);
            }

            if(hr <= h){
                ans = min(ans, k);
                hg = k-1;
            } else{
                l = k + 1;
            }
        }
        return ans;
    }
};