class Solution {
    public int[] constructRectangle(int area) {
        int m = (int) Math.sqrt(area);
        int n = 0;
        for (int i = m; i > 0; i--) {
            if (area % i == 0) {
                n = i;
                break;
            }
        }
        int[] a = new int[2];
        a[0] = area / n;
        a[1] = n;
        return a;
    }
}