class Solution {
    public String[] uncommonFromSentences(String s1, String s2) {
        HashMap<String,Integer>map = new HashMap<>();

        for(String ch : s1.split(" ")){
            map.put(ch, map.getOrDefault(ch,0)+1);
        }

        for(String ch : s2.split(" ")){
            map.put(ch, map.getOrDefault(ch,0)+1);
        }

        ArrayList<String>list = new ArrayList<>();
        for(Map.Entry<String, Integer>entry : map.entrySet()){
            if(entry.getValue()==1) list.add(entry.getKey());
        }
    
        String res[] = new String[list.size()];
        list.toArray(res);
        return res;
    }
}