#include <iostream>
using namespace std;
const int MAXLEN = 20;
typedef char DATE;

struct CBTType
{
	DATE date;
	CBTType * left;
	CBTType * right;
};

CBTType * InitTree()
{
	CBTType * node;
	if (node = new CBTType)
	{
		cout << "请输入一个根节点数据：" << endl;
		cin >> node->date;
		node->left = NULL;
		node->right = NULL;
		if (node != NULL)
		{
			return node;
		}
		else
		{
			return NULL;
		}
	}
	return NULL;
}
int TreeDepth(CBTType *treeNode);
void AddTreeNode(CCTType *treeNode);
CBTType *TreeFindNode(CBTType *treeNode, DATE date)
{
	CBTType *ptr;
	if (treeNode == NULL)
	{
		return NULL;
	}
	else
	{
		if (treeNode->date == date)
		{
			return treeNode;
		}
		else
		{
			if (ptr = TreeFindNode(treeNode->left, date))
			{
				return ptr;
			}
			else if (ptr = TreeFindNode(treeNode->right, date))
			{
				return ptr;
			}
			else
			{
				return NULL;
			}
		}
	}
}

void AddTreeNode(CCTType *treeNode)
{
	CBTType *pnode, *parent;
	DATE date;
	char menusel;
	if (pnode = new CBTType)
	{
		cout << "输入而茶树节点数据：" << endl;
		cin >> ponde->date;
		ponde->left = NULL;
		ponde->right = NULL;
		cout << "输入该节点的父亲节点数据" << endl;
		cin >> date;
		parent = TreeFindNode(treeNode, date);
		if (!parent)
		{
			cout << "没有找到父节点" << endl;
			delete pnode;
			return;
		}
		cout << "1.添加该节点到左子树；2.添加该节点到右子树。" << endl;
		do
		{
			switch (menusel)
			{
			case '1':
				if (parent->left)
				{
					cout << "左子树节点不为空" << endl;
				}
				else
				{
					parent->left = pnode;
					cout << "数据添加成功" << endl;
				}
				break;
			case '2':
				if (parent->right)
				{
					cout << "右子树节点不为空" << endl;
				}
				else
				{
					parent->right = pnode;
					cout << "数据添加成功" << endl;
				}
				break;
			}
		} while (menusel != '1'&&menusel != '2');
	}
}

int TreeDepth(CBTType *treeNode)
{
	int depleft, depright;
	if (treeNode == NULL)
	{
		return 0;
	}
	else
	{
		depleft = TreeDepth(treeNode->left);
		depright = TreeDepth(treeNode->right);
		if (depleft)
		{
			return ++depleft;
		}
		else
		{
			++depright;
		}
	}
}

int main()
{
	CBTType *root = NULL;
	char menusel;
	root = InitTree();
	do
	{
		cout << "请选择：" << endl;
		cout << "0.退出；1.添加二叉树的节点。" << endl;
		cin >> menusel;
		switch (menusel)
		{
		case '1':
			AddTrreeNode(root);
			break;
		case '0':
			break;
		}
	} while (menusel != '0');
	cout << "depth:" << TreeDepth(root) << endl;
	do
	{
		cout <<"请选择：" << endl;
		cout << "1.按层遍历" << endl;
		cout << "2.先序遍历" << endl;
		cout << "3.中序遍历" << endl;
		cout << "4.后序遍历" << endl;
		cin >> menusel;
		switch (menusel)
		{
		case '0':
			break;
		case '1':
			cout << "按层次遍历的结果：" << endl;
			LevelTree(root);
			cout << endl;
			break;
		case '2':
			cout << "先序遍历的结果：" << endl;
			DLRTree(root);
			cout << endl;
			break;
		case '3':
			cout << "中序遍历的结果：" << endl;
			LDRTree(root);
			cout << endl;
			break;
		case '4':
			cout << "后序遍历的结果：" << endl;
			LRDTree(root);
			cout << endl;
			break;
		}
	} while (menusel != '0');
	ClearTree(root);
	return 0;
}