class Solution:
    def findNthDigit(self, n: int) -> int:
        ## O(n)
        # i=0
        # c=1
        # while True:
        #     s=str(c)
        #     l=len(s)
        #     if i+l<n:
        #         i+=l
        #     else:
        #         return int(s[n-i-1])
        #     c+=1
        # return 0

        dl=1
        b=9
        i=1
        while True:
            if n-dl*b>0:
                n-=dl*b
                dl+=1
                b*=10
                i*=10
            else:
                break
        i+=(n-1)//dl
        s=str(i)
        return int(s[(n - 1) % dl])
