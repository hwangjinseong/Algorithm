def push(value, queue):
    queue.append(value)

def pop(queue):
    if not queue:
        print("-1")
    else:
        queue.reverse()
        print(queue.pop())
        queue.reverse()

def size(queue):
    print(len(queue))

def empty(queue):
    if queue:
        print('0')
    else:
        print('1')

def front(queue):
    if len(queue) > 0:
        print(queue[0])
    else:
        print('-1')

def back(queue):
    if len(queue) > 0:
        queue.reverse()
        print(queue[0])
        queue.reverse()
    else:
        print('-1')

def extract_number(text):
    parts = text.split()  
    for part in parts:
        if part.isdigit():
            return int(part)
    return None

queue = []

num = int(input())

commands = [input() for _ in range(num)]

for command in commands:
    if 'push' in command:
        value = extract_number(command)
        push(value, queue)
    elif 'pop' in command:
        pop(queue)
    elif 'size' in command:
        size(queue)
    elif 'empty' in command:
        empty(queue)
    elif 'front' in command:
        front(queue)
    elif 'back' in command:
        back(queue)
    else:
        break