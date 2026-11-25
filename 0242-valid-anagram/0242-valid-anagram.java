class Solution {
    public boolean isAnagram(String s, String t) {
        if (s.length() != t.length()) {
         return false;
        }
        ArrayList<Integer>arr = new ArrayList<>();
        for (int i = 0; i < 26; i++) {
          arr.add(0);
        }
        for(char c:s.toCharArray())
        {
            Integer index = c-'a';
            arr.set(index, arr.get(index) + 1);
        }
        for(char c:t.toCharArray())
        {
            Integer index = c-'a';
            arr.set(index, arr.get(index) - 1);
        }
        for(Integer i:arr)
        {
            if(i!=0)return false;
        }
        return true;
    }
}