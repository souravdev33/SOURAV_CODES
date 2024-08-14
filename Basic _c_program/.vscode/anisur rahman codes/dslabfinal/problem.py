class T:
    def __init__(self, data):
        self.data = data
        self.left_child = None
        self.right_child = None

def insert_BST(root, val):
    if root is None:
        return T(val)
    else:
        if val < root.data:
            root.left_child = insert_BST(root.left_child, val)
        else:
            root.right_child = insert_BST(root.right_child, val)
        return root

def min_value(root):
    if root is None:
        return None
    elif root.left_child is None:
        return root.data
    else:
        return(min_value(root.left_child))

def in_order(root):
    if root:
        in_order(root.left_child)
        print(root.data,end=' ')
        in_order(root.right_child)
        

root = T(70)
insert_BST(root, 39)
insert_BST(root, 29)
insert_BST(root, 56)
insert_BST(root, 90)

print("INorder List : ")
in_order(root)
print()

min = min_value(root)
print("Min value is:", min)
