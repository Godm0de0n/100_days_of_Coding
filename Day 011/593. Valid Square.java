import java.util.HashSet;

class Solution {
    public int cal(int[] p1, int[] p2) {
        return (int) (Math.pow((p1[0] - p2[0]), 2) + Math.pow((p1[1] - p2[1]), 2));
    }
    
    public boolean validSquare(int[] p1, int[] p2, int[] p3, int[] p4) {
        int l1 = cal(p1, p2);
        int l2 = cal(p2, p3);
        int l3 = cal(p3, p4);
        int l4 = cal(p4, p1);
        int d1 = cal(p1, p3);
        int d2 = cal(p2, p4);
        
        HashSet<Integer> set = new HashSet<>();
        set.add(l1);
        set.add(l2);
        set.add(l3);
        set.add(l4);
        set.add(d2);
        set.add(d1);
        
        if (l1 == 0 || l2 == 0 || l3 == 0 || l4 == 0 || d1 == 0 || d2 == 0) {
            return false;
        }
        
        return set.size() == 2;
    }
}