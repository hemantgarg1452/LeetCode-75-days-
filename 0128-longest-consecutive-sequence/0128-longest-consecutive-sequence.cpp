class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>set;
        for(int i=0; i<nums.size(); ++i){
            set.insert(nums[i]);
        }
        int res = 0;
        for(int i=0; i<nums.size(); ++i){
            if(set.find(nums[i]-1)!=set.end()) continue;

            else{
            int count = 0;
            int current = nums[i];
            while(set.find(current)!=set.end()){
                count++;
                current++;
                }
            res = max(res, count);
            }
        }
        return res;
    }
};

static const int KDS = []() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
}();