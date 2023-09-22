class Solution {
    public boolean isSubsequence(String s, String t) {
        int a = s.length();
        int b = t.length();
        int i=0;
        for (int j=0; i<a && j<b ;j++){
            if (s.charAt(i)==t.charAt(j)){
                i++;
            }
        }
        if (i==a){
            return true;
        }
        else{
            return false;
        }
    }
}