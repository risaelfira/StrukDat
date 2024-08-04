from queue import Queue

# Initializing a queue
q = Queue(maxsize = 3)

#qsize give the maxsize of the queue
print(q.qsize())

# Adding of element to queue 
q.put('a')

q.put('b')

q.put('c')

#return boolean for full queue
print("\nFull: ", q.full())

# Removing element from queue
print("\nElements dequeued from the queue")

print(q.get())

print(q.get())

print(q.get())

# return boolean for empty queue
print("\nEmpty: ", q.empty())

q.put(1)

print("\nEmpty: ", q.empty())
print("\nFull: ", q.full())