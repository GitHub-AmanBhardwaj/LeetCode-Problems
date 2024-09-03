class Solution:
    def checkIfPangram(self, sentence: str) -> bool:
        arr=('a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z')
        for a in arr:
            if a not in sentence:
                return 0
        return 1