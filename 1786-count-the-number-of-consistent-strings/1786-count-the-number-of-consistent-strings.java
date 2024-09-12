class Solution {
    public int countConsistentStrings(String allowed, String[] words) {
        Set<Character> set = new HashSet<>();
        for(int i=0;i<allowed.length(); ++i){
            set.add(allowed.charAt(i));
        }

        int count = 0;
        for(String it : words){
            int flag = 1;
            for(int i=0; i<it.length(); ++i){
                if(!set.contains(it.charAt(i))) {
                    flag = 0;
                    break;
                }
            }
            count+=flag;
        }
        return count;
    }
}