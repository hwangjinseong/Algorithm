def push(value, stack):
    stack.append(value)

def pop(stack):
    if not stack:
        print("-1")
    else:
        print(stack.pop())

def size(stack):
    print(len(stack))

def empty(stack):
    if stack:
        print('0')
    else:
        print('1')

def top(stack):
    if stack:
        print(stack[-1])
    else:
        print('-1')

def extract_number(text):
    parts = text.split()  
    for part in parts:
        if part.isdigit():
            return int(part)
    return None

stack = []

num = int(input())

commands = [input() for _ in range(num)]

for command in commands:
    if 'push' in command:
        value = extract_number(command)
        push(value, stack)
    elif 'pop' in command:
        pop(stack)
    elif 'size' in command:
        size(stack)
    elif 'empty' in command:
        empty(stack)
    elif 'top' in command:
        top(stack)
    else:
        break