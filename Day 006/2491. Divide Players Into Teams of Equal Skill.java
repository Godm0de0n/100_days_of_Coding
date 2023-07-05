class Solution {
    public long dividePlayers(int[] skill) {
        Arrays.sort(skill);
        int right = skill.length - 1;
        int left = 0;
        int a = skill[0] + skill[skill.length - 1];
        long re = 0;
        while (left < right) {
            if ((skill[left] + skill[right]) == a) {
                re += (skill[left]) * skill[right];
                left++;
                right--;
            } else {
                return -1;
            }
        }
        return re;
    }
}
