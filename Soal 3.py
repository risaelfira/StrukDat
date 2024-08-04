Q = []
f = None
r = None
def isEmpty(Que):
    if (Que == []):
        return True
    else:
        return False

def enqueue(Que, item):
    Que.append(item)
    if (len(Que) == 1):
        f = r = 0
    else:
        r = len(Que) - 1

def dequeue(Que):
    if (isEmpty(Que)):
        return ('UnderFlow!')
    else:
        i = Que.pop(0)

    if (len(Que) == 0):
        f = r = None

    return i 

while True:
    print('--Menu--')
    print('1. Enqueue')
    print('2. Dequeue')
    ch = int(input('Enter the choice = '))
    if (ch == 1):
        item =  int(input('Enter the element u want to insert : '))
        enqueue(Q, item)
        input('Press any key to contiue..')
    if (ch == 2):
        item = dequeue(Q)
        if (item == 'UnderFlow!'):
            print('Queue is empty!, UnderFlow!')
        else:
            print('%d is dequeue!' % item)
            input('Press any key to continue...')
    else:
        print('It does not exist!')