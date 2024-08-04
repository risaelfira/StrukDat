class Stack:
    def __init__(self):
        self.items = []

    def push(self, item):
        self.items.append(item)

    def pop(self):
        if not self.is_empty():
            return self.items.pop()

    def size(self):
        return len(self.items)

    def is_empty(self):
        return len(self.items) == 0

def main_menu():
    print("\nMenu")
    print("==========")
    print("1. Push")
    print("2. Pop")
    print("3. Size")
    print("4. Quit")

def main():
    stack = Stack()
    while True:
        main_menu()
        option = int(input("Enter an option: "))
        if option == 1:
            item = int(input("Enter a value to push: "))
            stack.push(item)
        elif option == 2:
            popped_item = stack.pop()
            if popped_item is not None:
                print(f"Popped item: {popped_item}")
        elif option == 3:
            print(f"Stack size: {stack.size()}")
        elif option == 4:
            print("Goodbye :)")
            break
        else:
            print("Menu Tidak Terseedia!!")

if __name__ == "__main__":
    main()
    