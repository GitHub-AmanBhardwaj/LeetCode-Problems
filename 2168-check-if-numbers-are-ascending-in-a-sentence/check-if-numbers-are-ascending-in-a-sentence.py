class Solution:
    def areNumbersAscending(self, s: str) -> bool:
        arr=s.split(' ')
        p=-inf
        for i in arr:
            if i.isdigit():
                if p>=int(i):
                    return False
                p=int(i)
        return True