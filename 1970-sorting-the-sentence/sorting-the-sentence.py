class Solution:
    def sortSentence(self, s: str) -> str:
        arr=s.split(' ')
        arr=sorted(arr, key=lambda x: x[-1])
        s=''
        for i in range(len(arr)):
            s+=arr[i][:-1]
            if i!=(len(arr)-1):
                s+=' '
        return s

        