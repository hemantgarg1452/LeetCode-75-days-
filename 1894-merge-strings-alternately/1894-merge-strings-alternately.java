class Solution {
// Java Solution ----------->
    public String mergeAlternately(String word1, String word2) {
        StringBuffer result = new StringBuffer();
        int i=0; 
        while(i<word1.length() || i<word2.length()){
            if(i<word1.length()) {
                result.append(word1.charAt(i));
            }
            if(i<word2.length()){
                 result.append(word2.charAt(i));
            }
            i++;
        }
        return result.toString();
    }
}

//C++ Solution ---------->

// string mergeAlternately(string word1, string word2) {
//         string answer = "";
//         int i=0;
//         while(i < word1.length() || i < word2.length()){
//             if(i<word1.length()){ 
//             answer += word1[i];
//             }

//             if(i < word2.length()){
//             answer += word2[i];
//             }
//             i++;
//         } 
//         return answer;
//     }