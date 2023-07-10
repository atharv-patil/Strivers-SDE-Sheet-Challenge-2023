from os import *
from sys import *
from collections import *
from math import *

'''
    Following is the Binary Tree node structure:
    class TreeNode:
        def __init__(self, data=0, left=None, right=None):
            self.data = data
            self.left = left
            self.right = right
'''


def getInOrderTraversal(root):
    
    if not root:
        return []
    ans = []
    def f(root):
        nonlocal ans
        if root.left:
            f(root.left)
        ans.append(root.data)
        if root.right:
            f(root.right)
    f(root)
    return ans

