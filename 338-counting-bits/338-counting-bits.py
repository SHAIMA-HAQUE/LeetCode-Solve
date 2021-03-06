class Solution:
    def countBits(self, n: int) -> List[int]:
        # list = []
        # for i in range(n+1):
        #     sum = 0
        #     num = i
        #     while num>0:
        #         sum += num%2
        #         num = num//2
        #     list.append(sum)
        # return list
        list = []
        for i in range(n+1):
            c = 0
            num = i
            while num>0:
                c += 1
                num = num &(num-1)
            list.append(c)
        return list