class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

    def insert(self, data):
        new_node = Node(data)
        if not self.head:
            self.head = new_node
        else:
            current = self.head
            while current.next:
                current = current.next
            current.next = new_node

    def delete(self, data):
        if not self.head:
            return
        if self.head.data == data:
            self.head = self.head.next
            return
        current = self.head
        while current.next:
            if current.next.data == data:
                current.next = current.next.next
                return
            current = current.next

    def search(self, data):
        current = self.head
        while current:
            if current.data == data:
                return True
            current = current.next
        return False

    def length(self):
        current = self.head
        count = 0
        while current:
            count += 1
            current = current.next
        return count

    def access(self, index):
        if index < 0 or index >= self.length():
            raise IndexError("Index out of range")
        current = self.head
        for i in range(index):
            current = current.next
        return current.data

    def concatenate(self, other_list):
        if not self.head:
            self.head = other_list.head
            return
        current = self.head
        while current.next:
            current = current.next
        current.next = other_list.head


linked_list = LinkedList()
linked_list.insert(1)
linked_list.insert(2)
linked_list.insert(3)

print(linked_list.length())
print(linked_list.search(2))
print(linked_list.access(1))

linked_list.delete(2)
print(linked_list.length()) 

other_list = LinkedList()
other_list.insert(4)
other_list.insert(5)

linked_list.concatenate(other_list)
print(linked_list.length()) 
print(linked_list.access(3)) 