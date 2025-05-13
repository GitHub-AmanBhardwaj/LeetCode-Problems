class MinStack:

    def __init__(self):
        self.list=[]
        self.mins=inf       

    def push(self, val: int) -> None:
        self.list.append(val)
        if val<self.mins:
            self.mins=val

    def pop(self) -> None:
        if not self.list:
            return
        r=self.list.pop()
        if r==self.mins:
            self.mins=min(self.list) if self.list else float('inf')
        
    def top(self) -> int:
        return self.list[-1]

    def getMin(self) -> int:
        return self.mins


# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(val)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()