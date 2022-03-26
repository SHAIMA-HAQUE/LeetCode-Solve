class Solution:
    def buildArray(self, target: List[int], n: int) -> List[str]:
        x=[i for i in range(1,n+1)][::-1]
        y=[]
        i=0
        while i<len(target):
            if target[i]!=x[-1]:
                y.append("Push")
                y.append("Pop")
                x.pop()
            elif target[i]==x[-1]:
                y.append("Push")
                x.pop()
                i+=1
        return y