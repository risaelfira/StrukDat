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


def peek(Que):
    if (isEmpty(Que)):
        return ('UnderFlow!')
    else:
        f = 0
    return Que[f]


def Display(Que):
    if (len(Que) == 0):
        print('Que is Empty!')
    elif (len(Que) == 1):
        print (Que[0], '<-- Front <-- Rear')
    else:
        f = 0
        r = len(Que) - 1
        print(Que[f], '<--Front')
        for x in range(1, r):
            print(Que[x])
        print(Que[r], '<-- Rear')


while True:
    print('--MENU--')
    print('1. ENQUEUE')
    print('2. DEQUEUE')
    print('3. Peek')
    print('4. Display')
    print('5. Exit')
    ch = int(input('Enter the choice(1-5)='))
    if (ch == 1):
        item = int(input('Enter the element u want to insert :'))
        enqueue(Q, item)
        input('Press any key to continue...')
    if (ch == 2):
        item = dequeue(Q)
        if (item == 'UnderFlow!'):
            print('Queue is empty!, UNDERFLOW!')
        else:
            print('%d is dequeue!' % item)
            input('Press any key to continue...')
    if (ch == 3):
        item = peek(Q)
        if (item == 'UnderFlow!'):
            print('Queue is empty!, UNDERFLOW!')
        else:
            print('Front is %d' % item)
        input('Press any key to continue...')
    if (ch == 4):
        Display(Q)
        input('Press any key to continue...')
    if (ch == 5):
        break
    else:
        print('It does not exist, do u mean 1-5?')