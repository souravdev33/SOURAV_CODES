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

def Min_value_check(root):
    if root is None:
        return 0
    else:
        leftside=Min_value_check(root.left_child)
        return min(leftside)
        
        
        
        
        
        
        
        
        
        
root=T(10)

insert_BST(root,39)
insert_BST(root,29)
insert_BST(root,56)
insert_BST(root,90)
min=Min_value_check(root)
print("Min value is : ",min)
