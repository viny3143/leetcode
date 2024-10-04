class Solution:
    def dividePlayers(self, skill: List[int]) -> int:
        skill.sort()
        check = skill[0] + skill[-1]
        total_sum = 0
        for i in range(len(skill) // 2):
            if skill[i] + skill[-i - 1] != check:return -1
            total_sum += skill[i] * skill[-i - 1]
        return total_sum
