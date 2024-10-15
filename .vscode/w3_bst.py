class Node:
    def __init__(self, key):
        self.key = key
        self.left = None
        self.right = None

def insert (root,key):
    if root is None:
        return Node(key)
    else:
        if key <root.key:
            root.left = insert(root.left,key)
        elif key > root.key:
            root.right = insert(root.right,key)
    return root

def preOrder(root):
    if root:
        print(root.key, end=" ")  
        preOrder(root.left)  
        preOrder(root.right) 


root = None

while True:

    cmd = input().strip()
    if cmd == "#":
        break
    if cmd.startswith("insert"):
        key = int (cmd.split()[1])
        root = insert(root,key)

preOrder(root)