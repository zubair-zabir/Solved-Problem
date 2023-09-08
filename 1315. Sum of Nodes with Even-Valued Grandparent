"""Given the root of a binary tree, return the sum of values of nodes with an even-valued grandparent. If there are no nodes with an even-valued grandparent, return 0.
A grandparent of a node is the parent of its parent if it exists."""
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

def sumEvenGrandparent(root):
    def dfs(node, parent, grandparent):
        if not node:
            return 0
        total = 0
        if grandparent and grandparent.val % 2 == 0:
            total += node.val
        total += dfs(node.left, node, parent)
        total += dfs(node.right, node, parent)
        return total

    return dfs(root, None, None)
