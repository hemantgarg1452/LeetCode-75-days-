class Solution {
public:
    int maximumGain(string s, int x, int y) {
        int score1 = 0, score2 = 0;
        if (x >= y) {
            score1 = removeString(s, "ab", x);
            score2 = removeString(s, "ba", y);
        } else {
            score2 = removeString(s, "ba", y);
            score1 = removeString(s, "ab", x);
        }
        int sum = score1 + score2;
        return sum;
    }

private:
    int removeString(string& s, const string& pattern, int score) {
        vector<char> st; 
        int scores = 0;
        for (char c : s) {
            if (!st.empty() && st.back() == pattern[0] && c == pattern[1]) {
                st.pop_back();
                scores += score;
            } else st.push_back(c); 
            
        }
        s = string(st.begin(), st.end()); 
        return scores;
    }    
};