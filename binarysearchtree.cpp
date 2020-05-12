#include "tree.h"
using namespace std;

enum ResultCode{ NotPresent,Overflow,Success,Duplicate,};

template <class T>
class BSTree
{
public:
	BSTree() { cout << "Y"; root = NULL; }
    BSTree(T &x){root->element=x;}
	void Root() { root = NULL; }
    ResultCode Search(T &x)const;
    ResultCode Insert(T &x);
    ResultCode Remove(T &x);
    BTNode<T>* root;
private:
    ResultCode Search(BTNode<T> *p,T &x) const;
};


template <class T>
ResultCode BSTree<T>::Search(T &x)const
{
    return Search(root,x);
}

template <class T>
ResultCode BSTree<T>::Search(BTNode<T> *p, T &x) const
{
    if(!p)
        return NotPresent;
    else if(x<p->element)
        return Search(p->lChild,x);
    else if(x>p->element)
        return Search(p->rChild,x);
    else
    {
        x=p->element;
        return Success;
    }
}

template <class T>
ResultCode BSTree<T>::Insert(T &x)
{
	BTNode<T> *q = NULL;
	BTNode<T>*p = NULL;
	p = root;
	
    while(p)
    {
        q=p;
        if(x<p->element)
            p=p->lChild;
        else if(x>p->element)
            p=p->rChild;
        else
        {
            x=p->element;
            return Duplicate;
        }
    }
    p=new BTNode<T>(x);
    if(!root)
        root=p;
    else if(x<q->element)
        q->lChild=p;
    else
        q->rChild=p;
    return Success;
}

template <class T>
ResultCode BSTree<T>::Remove(T &x)
{
    BTNode<T> *c,*s,*r,*p=root,*q=NULL;
    while(p&&p->element!=x)
    {
        q=p;
        if(x<p->element)
            p=p->lChild;
        else
            p=p->rChild;
    }
    if(!p)
        return NotPresent;
    x=p->element;
    if(p->lChild&&p->rChild)
    {
        s=p->rChild;
        r=p;
        while(s->lChild)
        {
            r=s;
            s=s->lChild;
        }
        p->element=s->element;
        p=s;
        q=r;
    }
    if(p->lChild)
        c=p->lChild;
    else
        c=p->rChild;
    if(p==root)
        root=c;
    else if(p==q->lChild)
        q->lChild=c;
    else
        q->rChild=c;
    delete p;
    return Success;
}

int main()
{
    BSTree<int> p;
    int i=0;
    int x;
    while(i<8)
    {
        cin>>x;
        p.Insert(x);
        i++;
    }
	int y;
	y = 76;
	p.Remove(y);
	y = 45;
	p.Remove(y);
	BinaryTree<int> w;
	w.root = w.Copy(p.root);
	w.Levels(w.root);
	if(p.Search(y))
		cout<<"Y";
	cout << endl;
	cin.get();
	cin.get();
}
