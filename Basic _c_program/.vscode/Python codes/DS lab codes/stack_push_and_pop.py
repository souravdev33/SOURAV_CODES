class Stack:
    def __init__(self):
        self.items = []

    def push(self, item):
        self.items.append(item)

    def pop(self):
        if not self.is_empty():
            return self.items.pop()

    def is_empty(self):
        return len(self.items) == 0

    def peek(self):
        if not self.is_empty():
            return self.items[-1]

    def size(self):
        return len(self.items)

# Usage example:
stack = Stack()
stack.push(1)
stack.push(2)
stack.push(3)

print("Stack:", stack.items)  # Output: Stack: [1, 2, 3]

popped_item = stack.pop()
print("Popped item:", popped_item)  # Output: Popped item: 3

print("Stack after pop:", stack.items)  # Output: Stack after pop: [1, 2]
