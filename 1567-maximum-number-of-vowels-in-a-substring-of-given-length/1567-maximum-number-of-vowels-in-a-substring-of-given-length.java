class Solution {
    private int isVowel(char ch){
        return (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') ? 1 : 0;
    }

    public int maxVowels(String s, int k) {
        int start=0, end=0, window=0, ans=0;
        for(; end<k; end++){
            window += isVowel(s.charAt(end));
        }

        ans = window;
        while(end<s.length()){
            window -= isVowel(s.charAt(start++));
            window += isVowel(s.charAt(end++));
            ans = Math.max(ans, window);
        }

        return ans;
    }
}