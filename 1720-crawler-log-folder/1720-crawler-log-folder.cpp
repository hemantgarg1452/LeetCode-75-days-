class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string>st;

        for(string &log : logs){
            if(log=="../"){
                if(!st.empty()){
                    st.pop();
                }
            } else if(log!="./"){
                st.push(log);
            }
        }
        return st.size();

        // int depth = 0;

        // for(string &log : logs){
        //     if(log=="../"){
        //     depth = max(0, depth-1);
        //     } else if(log != "./"){
        //         depth++;
        //     }
        // }
        // return depth;
    }
};