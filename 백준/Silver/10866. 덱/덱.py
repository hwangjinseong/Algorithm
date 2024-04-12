def push_front(value, queue):
    queue.reverse()
    queue.append(value)
    queue.reverse()

def push_back(value, queue):
    queue.append(value)


def pop_front(queue):
    if not queue:
        print("-1")
    else:
        queue.reverse()
        print(queue.pop())
        queue.reverse()

def pop_back(queue):
    if not queue:
        print("-1")
    else:
        print(queue.pop())

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
    if 'push_front' in command:
        value = extract_number(command)
        push_front(value, queue)
    elif 'push_back' in command:
        value = extract_number(command)
        push_back(value, queue)
    elif 'pop_front' in command:
        pop_front(queue)
    elif 'pop_back' in command:
        pop_back(queue)
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