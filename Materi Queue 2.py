Q = []
f = None
r = None


def isEmpty(Que):
    if(Que == []):
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