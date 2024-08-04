class Graduate:
    def __init__(self, name, nim):
        self.name = name
        self.nim = nim

class Queue:
    def __init__(self):
        self.graduates = []

    def enqueue(self, graduate):
        self.graduates.append(graduate)

    def dequeue(self):
        if not self.is_empty():
            return self.graduates.pop(0)
        else:
            return None

    def is_empty(self):
        return len(self.graduates) == 0

    def size(self):
        return len(self.graduates)


queue = Queue()


queue.enqueue(Graduate("ELFIRA RISA HIDAYAT ", "202332017"))
queue.enqueue(Graduate("HELEN KEZIA NOFITRI SIAHAAN", "202332035"))
queue.enqueue(Graduate("ELISABETH HERMINA TANIA TANABOLENG", "202332054"))
queue.enqueue(Graduate("AMILOVA SHOGAVARA SITOMPUL", "202332077"))

# Call graduates in the order they were added
while not queue.is_empty():
    graduate = queue.dequeue()
    print(f"Calling {graduate.name} with NIM {graduate.nim}")