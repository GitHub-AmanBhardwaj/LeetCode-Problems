class Solution:
    def convertToBase7(self, num: int) -> str:
        a=''
        b=0
        if num==0:
            return '0'
        if num<0:
            num*=-1
            b=1
        while num>0:
            a+=str(num%7)
            num=int(num/7)
        if b:
            a+='-'

        return a[::-1]
        