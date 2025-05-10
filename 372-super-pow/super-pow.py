def modpow(base,exp,mod):
    result=1
    base=base%mod
    while exp>0:
        if exp%2==1: 
            result=(result*base)%mod
        base=(base*base)%mod  
        exp//=2  
    return result

class Solution:
    def superPow(self, a: int, b: List[int]) -> int:
        ans=1
        for i in range(len(b)):
            if i==0:
                ans=modpow(a,b[i],1337)
            else:
                ans=(ans*modpow(a,b[i],1337))%1337 
            if i!=len(b)-1:
                ans=modpow(ans,10,1337)
        return ans%1337