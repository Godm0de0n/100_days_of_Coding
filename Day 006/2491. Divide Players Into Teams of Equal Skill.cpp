class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(), skill.end());
        int right = skill.size() - 1;
        int left = 0;
        int a = skill[0] + skill[skill.size() - 1];
        long long re = 0;
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
};
