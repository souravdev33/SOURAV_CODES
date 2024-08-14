class T:
    def __init__(self,data):
        self.data=data
        self.left_child=None
        self.right_child=None
        
def insert_BST(root,val):
    if root is None:
        return T(val)
    else:
        if val<root.data:
            root.left_child=insert_BST(root.left_child,val)
        else:
            root.right_child=insert_BST(root.right_child,val)
            
        return root
    
def in_order(root):
    if root:
        in_order(root.left_child)
        print(root.data,end=' ')
        in_order(root.right_child)

def pre_order(root):
    if root:
        print(root.data,end=' ')
        pre_order(root.left_child)
        pre_order(root.right_child)
        
def post_order(root):
    if root:
        post_order(root.left_child)
        post_order(root.right_child)
        print(root.data,end=' ')
    
def Height_of_the_tree(root):
    if root is None:
        return 0
    left_height=Height_of_the_tree(root.left_child)+1
    right_height=Height_of_the_tree(root.right_child)+1
    return max(left_height,right_height)

def full_binary_check(root):
    if root is None:
        return True
    
    elif root.left_child is None and root.right_child is None:
        return True
    elif root.left_child is not None and root.right_child is not None:
        return(full_binary_check(root.left_child) and full_binary_check(root.right_child))
    else:
        return False
     










root=T(10)

insert_BST(root,8)
insert_BST(root,15)
insert_BST(root,25)
insert_BST(root,5)
insert_BST(root,67)

Height=Height_of_the_tree(root)
print("Height of the tree is : ",Height)
print()

if full_binary_check(root):
    print("FUll binary tree")
else:
    print("Not a full binary tree")
                