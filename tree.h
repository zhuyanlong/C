#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED
#include <iostream>
using namespace std;

template <class T>
struct BTNode
{
    BTNode() {lChild=rChild=NULL;}
    BTNode(const T&x)
    {
        element=x;
        lChild=rChild=NULL;
    }
    BTNode(const T& x,BTNode<T>* l,BTNode<T>* r)
    {
        element=x;
        lChild=l;
        rChild=r;
    }
    T element;
    BTNode<T>* lChild, *rChild;
};

template <class T>
class BinaryTree
{
public:
    BinaryTree(){root=NULL;}
    ~BinaryTree(){delete root;}
    bool IsEmpty()const;
    void Clear();
    bool Root(T& x)const;
    void MakeTree(const T& x,BinaryTree<T>& left,BinaryTree<T>& right);
    void BreakTree(T &x,BinaryTree<T>& left,BinaryTree<T>& right);
    void PreOrder(void (*Visit)(T& x));
    void InOrder(void (*Visit)(T& x));
    void PostOrder(void (*Visit)(T & x));
    BTNode<T>* Copy(BTNode<T>* t);
    int Size();
    int Deepth() const;
    BTNode<T> *root;
    void Change(BTNode<T> *t);
    void Levels(BTNode<T> *t);
private:
    void Clear(BTNode<T>* t);
    void PreOrder(void (*Visit)(T &x),BTNode<T>*t);
    void InOrder(void (*Visit)(T& x),BTNode<T>*t);
    void PostOrder(void (*Visit)(T& x),BTNode<T>*t);
    int Size(BTNode<T> * t);
    int Deepth(BTNode<T> *t) const;
};

template <class T>
bool BinaryTree<T>::Root(T &x)const
{
    if(root)
    {
        x=root->element;
        return true;
    }
    else
        return false;
}

template <class T>
void BinaryTree<T>::MakeTree(const T& x,BinaryTree<T>& left,BinaryTree<T>& right)
{
    if(root||&left==&right)           //为什么是&left,&right
        return;
    root=new BTNode<T>(x,left.root,right.root);
    left.root=right.root=NULL;
}

template <class T>
void BinaryTree<T>::BreakTree(T &x,BinaryTree<T>& left,BinaryTree<T>& right)
{
    if(!root||&left==&right||left.root||right.root)
        return;
    x=root->element;
    left.root=root->lChild;
    right.root=root->rChild;
    delete root;
    root=NULL;
}

template <class T>
void Visit(T &x)
{
    cout<<x<<" ";
}

template <class T>
void BinaryTree<T>::PreOrder(void (*Visit)(T& x))
{
    PreOrder(Visit,root);
}

template <class T>
void BinaryTree<T>::PreOrder(void (*Visit)(T& x),BTNode<T>* t)
{
    if(t)
    {
        Visit(t->element);
        PreOrder(Visit,t->lChild);
        PreOrder(Visit,t->rChild);
    }
}

template <class T>
void BinaryTree<T>::InOrder(void (*Visit)(T&  x))
{
    InOrder(Visit,root);
}

template <class T>
void BinaryTree<T>::InOrder(void (*Visit)(T &x),BTNode<T>* t)
{
    if(t)
    {
        InOrder(Visit,t->lChild);
        Visit(t->element);
        InOrder(Visit,t->rChild);
    }
}

template <class T>
void BinaryTree<T>::PostOrder(void (*Visit)(T &x))
{
    PostOrder(Visit,root);
}

template <class T>
void BinaryTree<T>::PostOrder(void (*Visit)(T &x),BTNode<T>* t)
{
    if(t)
    {
        PostOrder(Visit,t->lChild);
        PostOrder(Visit,t->rChild);
        Visit(t->element);
    }
}

template <class T>
int BinaryTree<T>::Size()
{
    return Size(root);
}

template <class T>
int BinaryTree<T>::Size(BTNode<T> * t)
{
    if(!t)
        return 0;
    else
        return Size(t->lChild)+Size(t->rChild)+1;
}

template <class T>
BTNode<T>* BinaryTree<T>::Copy(BTNode<T>* t)
{
    if(!t)
        return NULL;
    BTNode<T> *q=new BTNode<T>(t->element);
    q->lChild=Copy(t->lChild);
    q->rChild=Copy(t->rChild);
    return q;
}

template <class T>
void BinaryTree<T>::Clear()
{
    Clear(root);
}

template <class T>
void BinaryTree<T>::Clear(BTNode<T>* t)
{
    if(t)
    {
        Clear(t->lChild);
        Clear(t->rChild);
        delete t;
        t=NULL;
    }
}

template <class T>
bool BinaryTree<T>::IsEmpty() const
{
    if(root!=NULL)
        return true;
    else
        return false;
}

template <class T>
int BinaryTree<T>::Deepth() const
{
    Deepth(root);
}

template <class T>
int BinaryTree<T>::Deepth(BTNode<T> *t) const
{
    int depleft=0,depright=0;
    if(t==NULL)
        return 0;
    else
    {
        depleft=Deepth(t->lChild);
        depright=Deepth(t->rChild);
        if(depleft)
            return ++depleft;
        else
            return ++depright;
    }
}

template <class T>
void BinaryTree<T>::Change(BTNode<T> *t)
{
    BTNode<T> *temp;
    if(t->lChild==NULL&&t->rChild==NULL)
        return;
    else
    {
        temp=t->lChild;
        t->lChild=t->rChild;
        t->rChild=temp;
    }
    if(t->lChild)
        Change(t->lChild);
    if(t->rChild)
        Change(t->rChild);
}

template <class T>
void BinaryTree<T>::Levels(BTNode<T> *t)
{
    BTNode<T> *p;
    BTNode<T> *q[20];      //定义一个队列
    int head=0,tail=0;
    if(t)       //如果队首指针不为空
    {
        tail=(tail+1)%20;     //计算循环队列队尾序号
        q[tail]=t;     //二叉树根指针进入队列
        while(head!=tail)
        {
            head=(head+1)%20;    //计算循环队列的队首序号
            p=q[head];     //获取队首元素
            Visit(p->element);    //输出队首元素
            if(p->lChild!=NULL)    //如果存在左子树
            {
                tail=(tail+1)%20;   //计算队列的队尾序号
                q[tail]=p->lChild;   //左子树入队
            }
            if(p->rChild!=NULL)    //如果存在右子树
            {
                tail=(tail+1)%20;   //计算队列的队尾序号
                q[tail]=p->rChild;   //右子树入队
            }
        }
    }
}
#endif // TREE_H_INCLUDED
