#include<stdio.h>
#include<stdlib.h>
#include"bstree.h"

BSTnode* insert(BSTnode *T, int x)
{
    BSTnode* temp;
    if(T == NULL)
    {
        temp = (BSTnode*)malloc(sizeof(BSTnode));
        temp->data = x;
        temp->left = NULL;
        temp->right = NULL;
        return temp;
    }
    else if(x < T->data)
    {
        T->left = insert(T->left,x);
    }
    else if(x > T->data)
    {
        T->right = insert(T->right,x);
    }
    return T;
}

int isBST(BSTnode *T)
{
    if(T == NULL)
    {
        return 1;
    }
    if(T->left == NULL && T->right == NULL)
    {
        return 1;
    }
    if(T->left != NULL)
    {
        if(T->data < T->left->data)
        {
            return 0;
        }
    }
    if(T->right != NULL)
    {
        if(T->data > T->right->data)
        {
            return 0;
        }
    }
    return isBST(T->left) && isBST(T->right);
}

void inorder(BSTnode *T)
{
    if(T!=NULL)
    {       
        inorder(T->left);
        printf("%d ", T->data);
        inorder(T->right);
    }
}

void preorder(BSTnode *T)
{
    if(T!=NULL)
    {    
        printf("%d ", T->data);   
        preorder(T->left);
        preorder(T->right);
    }
}

void postorder(BSTnode *T)
{
    if(T!=NULL)
    {       
        postorder(T->left);
        postorder(T->right);
        printf("%d ", T->data);
    }
}

void leftView(BSTnode *T)
{
    if(!T)
    {
        return;
    }
    if(T)
    {
        leftView(T->left);
        printf("%d ", T->data);
    }
    return;
}

void rightView(BSTnode *T)
{
    if(!T)
    {
        return;
    }
    if(T)
    {
        printf("%d ", T->data);
        rightView(T->right);
    }
    return;
}

void topView(BSTnode *T)
{
    if(!T)
    {
        return;
    }
    if(T)
    {
        leftView(T->left);
        printf("%d ", T->data);
        rightView(T->right);
    }
    return;
}

void degreeOfNode(BSTnode *T)
{
    if(T!=NULL)
    {
        if(T->left != NULL && T->right != NULL)
        {
            printf("Degree of %d is 2\n", T->data);
        }
        else if(T->left != NULL || T->right != NULL)
        {
            printf("Degree of %d is 1\n", T->data);
        }
        else 
        {
            printf("Degree of %d is 0\n", T->data);
        }
        degreeOfNode(T->left);
        degreeOfNode(T->right);
    }
}

int searchBST(BSTnode* T, int key)
{
    if(!T)
    {
        return 0;
    }
    BSTnode *p = T;
    while(p)
    {
        if(p->data == key)
        {
            return 1;
        }
        if(p->data < key)
        {
            p = p->right;
        }
        else
        {
            p = p->left;
        }
    }
    return 0;
}

int minvalue(BSTnode *T)
{
    if(T == NULL)
    {
        return -1;
    }
    while(T->left)
    {
        T = T->left;
    }
    return T->data;
}

int maxvalue(BSTnode *T)
{
    if(T == NULL)
    {
        return -1;
    }
    while(T->right)
    {
        T = T->right;
    }
    return T->data;
}

int countNodes(BSTnode *T)
{
    int cnt;
    
    if(T == NULL)
    {
        cnt = 0;
    }
    else
    {
        cnt = 1 + countNodes(T->left) + countNodes(T->right);
    }
    return cnt;
}

int countLeafNodes(BSTnode *T)
{
    int cntl;
    
    if(T == NULL)
    {
        cntl = 0;
    }
    else if(T->left == NULL && T->right == NULL)
    {
        cntl = 1 + countLeafNodes(T->left) + countLeafNodes(T->right);
    }
    else
    {
        cntl = 0 + countLeafNodes(T->left) + countLeafNodes(T->right);
    }
    return cntl;
}

int sumOfNodes(BSTnode *T)
{
    int sum;

    if(T == NULL)
    {
        sum = 0;
    }
    else
    {
        sum  = T->data + sumOfNodes(T->left) + sumOfNodes(T->right);
    }
    return sum;
}

int sumOfLeafNodes(BSTnode *T)
{
    int sum;

    if(T == NULL)
    {
        sum = 0;
    }
    else if(T->left == NULL && T->right == NULL)
    {
        sum  = T->data + sumOfLeafNodes(T->left) + sumOfLeafNodes(T->right);
    }
    else 
    {
        sum  = 0 + sumOfLeafNodes(T->left) + sumOfLeafNodes(T->right);
    }
    return sum;
}

int sumOfEvenNodes(BSTnode *T)
{
    int sum;

    if(T == NULL)
    {
        sum = 0;
    }
    else if(T->data % 2 == 0)
    {
        sum  = T->data + sumOfEvenNodes(T->left) + sumOfEvenNodes(T->right);
    }
    else 
    {
        sum  = 0 + sumOfEvenNodes(T->left) + sumOfEvenNodes(T->right);
    }
    return sum;
}

int sumOfOddNodes(BSTnode *T)
{
    int sum;

    if(T == NULL)
    {
        sum = 0;
    }
    else if(T->data % 2 != 0)
    {
        sum  = T->data + sumOfOddNodes(T->left) + sumOfOddNodes(T->right);
    }
    else 
    {
        sum  = 0 + sumOfOddNodes(T->left) + sumOfOddNodes(T->right);
    }
    return sum;
}

int compare(BSTnode *T1, BSTnode *T2)
{
    if(T1 == NULL && T2 == NULL)
    {
        return 1;
    }
    else if(T1 != NULL && T2 != NULL)
    {
        if(T1->data == T2->data && compare(T1->left,T2->left) && compare(T1->right, T2->right))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    return 0;
}

BSTnode* copy(BSTnode *T)
{
    BSTnode *T1 = NULL;
    
    if(T != NULL)
    {
        T1 = (BSTnode*)malloc(sizeof(BSTnode));
        T1->data = T->data;
        T1->left = copy(T->left);
        T1->right = copy(T->right);
    }
    return T1;
}

