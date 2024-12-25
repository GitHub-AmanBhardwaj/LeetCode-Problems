class Solution:
    def clumsy(self, n: int) -> int:
        s=''
        j=0
        l=['*','//','+','-']
        for i in range(n,0,-1):
            s+=f'{i}'
            if i!=1:
                s+=l[j%4]
                j+=1
        return eval(s)