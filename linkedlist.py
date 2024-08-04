class Node:
    def __init__(self, data=None):
        self.data = data
        self.link = None
    
class LinkedList:
    def __init__(self):
        self.head_end = None
        self.create_list()
    
    def create_list(self):
        ch = input("\nCreating new node. Do you want to enter data (y/n) ? ").strip()
        while ch == 'y':
            self.insert_at_rear_push()
            ch = input("\n\nDo you want to enter more data (y/n) ? ").strip().lower()

    def insert_at_front(self):
        data = int(input("Enter data: "))
        new_node = Node(data)

        if self.head_end is None:
            self.head_end = new_node
        else:
            current = self.head_end
            while current.link:
                current = current.link
            current.link = new_node
        
        self.traversal()

    def insert_at_rear_push(self):
        data = int(input("Enter data: "))
        new_node = Node(data)
        new_node.link = self.head_end
        self.head_end = new_node

        self.traversal()
    
    def insert_before(self):
        if self.head_end is None:
            print("\n\nData underflow !! please insert data!!\n")
            return
        
        compare_value = int(input("Enter value to compare to insert before: "))
        data = int(input("Enter data to add: "))
        new_node = Node(data)

        current = self.head_end
        previous = None
        while current:
            if current.data == compare_value:
                new_node.link = current
                if previous:
                    previous.link = new_node
                else:
                    self.head_end = new_node
            
                self.traversal()
                return
            
            previous = current
            current = current.link

        print("\n\nValue not found !! ")

    def insert_after(self):
        if self.head_end is None:
            print("\n\nData underflow !! please insert data!!\n")
            return
        
        compare_value = int(input("Enter value to compare to insert after: "))
        data = int(input("Enter data to add: "))
        new_node = Node(data)

        current = self.head_end
        while current:
            if current.data == compare_value:
                new_node.link = current.link
                current.link = new_node

                self.traversal()
                return
            
            current = current.link
        
        print("\n\nValue Not Found !! ")
    
    def delete_at_front(self):
        if self.head_end is None:
            print("\n\nData Underflow !! Nothing To Delete !!\n")
            return
        
        if self.head_end.link is None:
            self.head_end = None
        else:
            current = self.head_end
            while current.link:
                previous = current
                current = current.link
            previous.link = None
        
        self.traversal()

    def delete_at_rear_pop(self):
        if self.head_end is None:
            print("\n\nData Underflow !! Nothing To Delete !!\n")
            return
        
        if self.head_end.link is None:
            self.head_end = None
        else:
            self.head_end = self.head_end.link

        self.traversal()
    
    def delete_value(self):
        if self.head_end is None:
            print("\n\nData underflow !! Nothing to delete !!\n")
            return
        
        compare_value = int(input("Enter value to dalate: "))

        current = self.head_end
        previous = None
        while current:
            if current.data == compare_value:
                if current.link:
                    next_node = current.link
                else:
                    next_node = None

                if previous:
                    previous.link = next_node
                else:
                    self.head_end = next_node

                self.traversal()
                return
            
            previous = current
            current = current.link

        print("\n\nValue Not Found !! ")

    def traversal(self):
        print("\n\nElement:")
        print("Rear <<\t", end="")

        current = self.head_end
        while current:
            print(current.data, end="\t")
            current = current.link

        print(" << Front")


def main():
    ll = LinkedList()

    while True:
        print("\n--------------------Menu--------------------")
        print("1. Inset At Front\t2. Insert At Rear_push\t3. Insert Before\t4. Insert After")
        print("5. Delete At Front\t6. Delete At Rear_Pop\t7. Delete Value\t\t8. Display")
        print("\n\tEnter Other to terminate process")
        print("\n--------------------------------------------")

        choise = input("Enter your choice: ").strip()
        if choise == '1':
            ll.insert_at_front()
        elif choise == '2':
            ll.inset_at_rear_push()
        elif choise == '3':
            ll.insert_before()
        elif choise == '4':
            ll.insert_after()
        elif choise == '5':
            ll.delet_at_rear_front()
        elif choise == '6':
            ll.delete_at_rear_pop()
        elif choise == '7':
            ll.delete_value()
        elif choise == '8':
            ll.traversal()
        else:
            print("\nFunction Terminated.")
            break

if __name__ == "__main__":
    main()