class Solution(object):
    def dividePlayers(self, skill):
        skill.sort()
        right = len(skill) - 1;
        left = 0;
        a = skill[0] + skill[len(skill) - 1];
        re =0
        while left < right:
            if (skill[left] + skill[right]) == a:
                re += (skill[left]) * skill[right];
                left+=1;
                right-=1;
            else:
                return -1
            
        return re
        """
        :type skill: List[int]
        :rtype: int
        """
