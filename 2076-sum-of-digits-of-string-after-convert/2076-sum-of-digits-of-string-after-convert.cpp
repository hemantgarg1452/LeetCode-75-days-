class Solution {
public:
    int getLucky(string s, int k) {
        string res = "";

        for(int i : s){
            int val = i-'a' +1;
            res += to_string(val);
        }

        while(k--){
            int sum = 0;
            for(int i : res){
                sum += i-'0';
            }

            res = to_string(sum);
        }
        return stoi(res);
    }
};