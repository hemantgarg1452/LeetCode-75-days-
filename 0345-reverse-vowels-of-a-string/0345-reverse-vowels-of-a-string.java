class Solution {
    public String reverseVowels(String s) {
        char ch[] = s.toCharArray(); //to convert string into characters
        int i = 0;
        int j = s.length()-1;

        while(i<j){
            if(!isVowel(ch[i])) i++; // it means if the starting(i) pointer is not vowel then move forward..

            else if (!isVowel(ch[j])) j--; // it means if the ending(j) pointer is not vowel then move backward..

            else{ //it means both are point at vowel characters
                swap(ch, i, j); // swap them and increment i and decrement j pointer
                i++;
                j--;
            }
        }
        return new String(ch);
    }

    public void swap(char[] word, int i, int j){ // swap function
        char t = word[i];
        word[i] = word[j];
        word[j] = t;
    }

    public boolean isVowel(char c){ //vowels to check
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
                || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }
}