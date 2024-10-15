from collections import deque
import sys

queue = deque()
for line in sys.stdin:
    cmd = line.strip()
    if cmd == '#':
        break
    elif cmd.startswith("PUSH"):
        _, v = cmd.split()
        queue.append(int(v))
    elif cmd == "POP":
        if queue:
            print(queue.popleft())
        else:
            print("NULL")