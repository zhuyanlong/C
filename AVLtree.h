#pragma once
#include <iostream>
using namespace std;

enum ResultCode { NotPresent, Overflow, Success, Duplicate, };

template <class T>
struct AVLNode
{
	AVLNode(const T& x)
	{
		element = x;
		lChild = rChild = NULL;
		bF = 0;
	}
	T element;
	int bF;
	AVLNode* lChild, *rChild;
};

template <class T>
class AVLTree
{
public:
	AVLTree() { root = NULL; }
	ResultCode Search(T& x)const;
	ResultCode Insert(T& x);
private:
	AVLTree<T> *root;
	ResultCode Insert(AVLNode<T>* &p, T& x, bool &unBalanced);
	void LRotation(AVLNode<T>* &s, bool &unBalanced);
	void RRotation(AVLNode<T>* &s, bool &unBalanced);

};

template <class T>
void AVLtree<T>::LRotation(AVLNode<T>* &s, bool &unBalanced)
{
	AVLNode<T>*u, *r = s->lChild;
	if (r->bF == 1)
	{
		s->lChild = r->rChild;
		r->rChild = s;
		s->bF = 0;
		s = r;
	}
	else
	{
		u = r->rChild;
		r->rChild = u->lChild;
		u->lChild = r;
		u->rChild = s;
		switch (u->bF)
		{
		case 1:
			s->bF = -1;
			r->bF = 0;
			break;
		case 0:
			s->bF = r->bF = 0;
			break;
		case -1:
			s->bF = 0;
			r->bF = 1;
		}
		s = u;
	}
	s->bF = 0;
	unBalanced = false;
}

template <class T>
ResultCode AVLTree<T>::Insert(T &x)
{
		
}

template <class T>
ResultCode AVLTree<T>::Insert(AVLNode<T>* &p, T& x, bool &unBalanced)
{
	ResultCode result = Success;
	if (p == NULL)
	{
		p = new AVLNode<T>(x);
		unBalanced = true;
	}
	else if (x < p->element)
	{
		result = Insert(p->lChild, x, unBalanced);
		if(unBlanced)
			switch (p->bF)
			{
			case -1:
				p->bF = 0;
				unBlanced = false;
				break;
			case 0:
				p->bF = 1;
				break;
			case 1:
				LRotation(p,unBlanced);
			}
	}
	else if (x == p->element)
	{
		unBlanced = false;
		x = p->element;
		result = Duplicate;
	}
	else
	{
		result = Insert(p->rChild, x, unBalanced);
		if (unBlanced)
		{
			case 1:
				p->bF = 0;
				unBlanced = false;
				break;
			case 0:
				p->bF = -1;
				break;
			case -1:
				RRotation(p, unBlanced);
		}
	}
	return result;
}