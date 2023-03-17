#include<stdio.h>
#include<stdlib.h>
#include"bstree.h"

int main()
{
    BSTnode *root = NULL;
    BSTnode *root2 = NULL;

    root = insert(root,35);
    root = insert(root,20);
    root = insert(root,48);
    root = insert(root,12);
    root = insert(root,32);
    root = insert(root,38);
    root = insert(root,53);

    // int ifBST = isBST(root);
    // if(ifBST == 1)
    // {
    //     printf("IS BST\n");
    // }
    // else
    // {
    //     printf("NOT BST\n");
    // }

    // root2 = copy(root);

    // root2 = insert(root2,35);
    // root2 = insert(root2,20);
    // root2 = insert(root2,48);
    // root2 = insert(root2,12);
    // root2 = insert(root2,32);
    // root2 = insert(root2,38);
    // root2 = insert(root2,53);

    printf("Inorder Traversal 1 : ");
    inorder(root);
    printf("\n");

    // printf("Left View Traversal 1 : ");
    // leftView(root);
    // printf("\n");

    // printf("Right View Traversal 1 : ");
    // rightView(root);
    // printf("\n");

    // printf("Top View Traversal 1 : ");
    // topView(root);
    // printf("\n");

    // degreeOfNode(root);

    // int nodeFound = searchBST(root,152);
    // if(nodeFound)
    // {
    //     printf("Found!\n");
    // }
    // else
    // {
    //     printf("Not Found!\n");
    // }

    // printf("Inorder Traversal 2 : ");
    // inorder(root2);
    // printf("\n");

    // printf("\nPreorder Traversal : ");
    // preorder(root);

    // printf("\nPostorder Traversal : ");
    // postorder(root);
    // printf("\n");

    // int min = minvalue(root);
    // printf("Minimum value in the tree : %d\n", min);

    // int max = maxvalue(root);
    // printf("Maximum value in the tree : %d\n", max);

    // int cnt = countNodes(root);
    // printf("Total number of nodes : %d\n", cnt);

    // int countleaf = countLeafNodes(root);
    // printf("Total number of leaf nodes : %d\n", countleaf);

    // int sum = sumOfNodes(root);
    // printf("Sum of all nodes : %d\n", sum);

    // int sumLeaf = sumOfLeafNodes(root);
    // printf("Sum of all leaf nodes : %d\n", sumLeaf);

    // int sumEven = sumOfEvenNodes(root);
    // printf("Sum of all even nodes : %d\n", sumEven);

    // int sumOdd = sumOfOddNodes(root);
    // printf("Sum of all odd nodes : %d\n", sumOdd);

    // int cmp = compare(root, root2);
    // if(cmp == 1)
    // {
    //     printf("\nBoth trees are equal!");
    // }
    // else
    // {
    //     printf("\nBoth trees are not equal!\n");
    // }


    return 0;
}