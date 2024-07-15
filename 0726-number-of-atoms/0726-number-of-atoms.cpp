class Solution {
public:
    string countOfAtoms(string formula) {
        stack<unordered_map<string , int>> stack;
        stack.push({});
        
        int i = 0 , n = formula.length();

        while( i < n) {
            if(formula[i] == '(') {
                stack.push({});
                i++;
            } else if(formula[i] == ')') {
                unordered_map<string , int> top = stack.top();
                stack.pop();
                i++;
                int start = i;

                while(i < n && isdigit(formula[i])) {
                    i++;
                }
                int multiplier = start < i ? stoi(formula.substr(start , i-start)) : 1;

                for(auto& mul : top) {
                    stack.top()[mul.first] += mul.second*multiplier; 
                }
                
            } else {
                int start = i++;
                while ( i < n && islower(formula[i])) { 
                    i++;
                }
                string element = formula.substr(start , i - start);
                start = i;
                while( i < n && isdigit(formula[i])) {
                    i++;
                }

                int count = start < i ? stoi(formula.substr(start , i - start)) : 1 ;
                stack.top()[element] += count;
            }
        }

        unordered_map<string , int> result = stack.top();
        vector<string> elements;
        for(auto& An : result) {
            elements.push_back(An.first);
        }

        sort(elements.begin() , elements.end());

        string res;
        for(const auto& element : elements) {
            res += element;
            if(result[element] > 1) {
                res += to_string(result[element]);
            }
        }
        return res;
    }
};