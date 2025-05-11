class Solution:
    def complexNumberMultiply(self, num1: str, num2: str) -> str:
        num1=complex(int(num1[:num1.index('+')]),int(num1[num1.index('+')+1:num1.index('i')]))
        num2=complex(int(num2[:num2.index('+')]),int(num2[num2.index('+')+1:num2.index('i')]))

        return str(int((num1*num2).real))+'+'+str(int((num1*num2).imag))+'i'