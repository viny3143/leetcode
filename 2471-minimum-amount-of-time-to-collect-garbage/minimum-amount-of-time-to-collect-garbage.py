class Solution:
    def garbageCollection(self, garbage: List[str], travel: List[int]) -> int:
        pc=mc=gc=p=m=g=0
        n=len(garbage)
        for i in range(len(garbage)):
            if 'P' in garbage[i]:
                p+= garbage[i].count('P')
                pc=p
            if i!=(n-1):
                p=p+travel[i]
            if 'M' in  garbage[i]:
                m += garbage[i].count('M')
                mc=m
            if i!=n-1:
                m=m+travel[i]
            if 'G' in  garbage[i]:
                g += garbage[i].count('G')
                gc=g
            if i!=n-1:
                g=g+travel[i]
        return gc+mc+pc