class Solution {
    public String reverseStr(String str) {
        char[] charArray = str.toCharArray();
        int n = charArray.length;
        for (int i = 0; i < n / 2; i++) {
            char temp = charArray[i];
            charArray[i] = charArray[n - i - 1];
            charArray[n - i - 1] = temp;
        }
        return new String(charArray);
    }

    public String finalString(String s) {
        StringBuilder s1 = new StringBuilder();
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == 'i') {
                s1 = new StringBuilder(reverseStr(s1.toString()));
            } else {
                s1.append(s.charAt(i));
            }
        }
        return s1.toString();
}
}