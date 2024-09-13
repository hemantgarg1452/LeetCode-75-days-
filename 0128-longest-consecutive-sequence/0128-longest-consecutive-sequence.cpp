class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s;
        for(int x : nums)
            s.insert(x);

        int res = 0;
        for(int i=0; i<nums.size(); ++i){
            int current = nums[i]; // 5
            int prev = nums[i]-1; // 4
            int count = 0;

            if(s.find(prev)==s.end()){
                while(s.find(current)!=s.end()){
                    current++;
                    count++;
                }
            }
            res = max(res, count);
        }
        return res;    
    }
};
