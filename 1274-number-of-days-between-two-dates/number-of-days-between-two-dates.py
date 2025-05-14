from datetime import datetime
class Solution:
    def daysBetweenDates(self, date1: str, date2: str) -> int:
        do1=datetime.strptime(date1, "%Y-%m-%d")
        do2=datetime.strptime(date2, "%Y-%m-%d")

        return abs((do1-do2).days)