class Solution {
public:
    int findTheLongestSubstring(string s) {
        int n = s.size();
        int bitMask = 0, maxLen = 0;
        vector<int>visited(32, -1);

        for(int i=0; i<n; ++i){
            if(s[i] == 'a') bitMask ^= (1 << 0);
            if(s[i] == 'e') bitMask ^= (1 << 1);
            if(s[i] == 'i') bitMask ^= (1 << 2);
            if(s[i] == 'o') bitMask ^= (1 << 3);
            if(s[i] == 'u') bitMask ^= (1 << 4);

            if(bitMask != 0 && visited[bitMask] == -1 ) visited[bitMask] = i;

            maxLen = max(maxLen, i-visited[bitMask]);
        }
        return maxLen;
    }
};

static const int KDS = []() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
}();