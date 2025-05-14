from datetime import datetime
class Solution:
    def dayOfYear(self, date: str) -> int:
        do=datetime.strptime(date, "%Y-%m-%d")

        return do.timetuple().tm_yday