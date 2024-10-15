stack = []
import sys
for line in sys.stdin:
    line = line.strip()
    if line == "#":
        break
    if line[:4] == "PUSH":
        stack.append(int(line[5:]))
    elif line == "POP":
        if stack:
            print(stack.pop())
        else:
            print("NULL")
