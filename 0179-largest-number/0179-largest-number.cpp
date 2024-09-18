class Solution {
public:
    string largestNumber(vector<int>& nums) {
        auto mySort = [](int a, int b){
            string s1 = to_string(a);
            string s2 = to_string(b);

            return s1+s2 > s2+s1;
        };

        sort(nums.begin(), nums.end(), mySort);

        if(nums[0]==0) return "0";

        string ans = "";
        for(int it: nums){
            ans += to_string(it);
        }
        return ans;
    }
};

static const int KDS = []() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
}();