class Solution {  
    public String reverseParentheses(String s) {
        char[] arr = s.toCharArray();
        return function(arr);
    }
    int i = 0;
    public String function(char[] s){
        StringBuilder stingb = new StringBuilder();

        while(i < s.length){
            if(s[i] == ')'){
                i++;
                return stingb.reverse().toString();
            }else if(s[i] == '('){
                i++;
                String st  = function(s);
                stingb.append(st);
            }else{
                stingb.append(s[i]);
                i++;
            }
        }
        return stingb.toString();

    }
};