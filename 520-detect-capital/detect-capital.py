class Solution:
    def detectCapitalUse(self, word: str) -> bool:
        if word.isupper()or word.islower()or word.istitle():
            return 1
        return 0