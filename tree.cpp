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
		cout << "������һ�����ڵ����ݣ�" << endl;
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
		cout << "����������ڵ����ݣ�" << endl;
		cin >> ponde->date;
		ponde->left = NULL;
		ponde->right = NULL;
		cout << "����ýڵ�ĸ��׽ڵ�����" << endl;
		cin >> date;
		parent = TreeFindNode(treeNode, date);
		if (!parent)
		{
			cout << "û���ҵ����ڵ�" << endl;
			delete pnode;
			return;
		}
		cout << "1.��Ӹýڵ㵽��������2.��Ӹýڵ㵽��������" << endl;
		do
		{
			switch (menusel)
			{
			case '1':
				if (parent->left)
				{
					cout << "�������ڵ㲻Ϊ��" << endl;
				}
				else
				{
					parent->left = pnode;
					cout << "������ӳɹ�" << endl;
				}
				break;
			case '2':
				if (parent->right)
				{
					cout << "�������ڵ㲻Ϊ��" << endl;
				}
				else
				{
					parent->right = pnode;
					cout << "������ӳɹ�" << endl;
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
		cout << "��ѡ��" << endl;
		cout << "0.�˳���1.��Ӷ������Ľڵ㡣" << endl;
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
		cout <<"��ѡ��" << endl;
		cout << "1.�������" << endl;
		cout << "2.�������" << endl;
		cout << "3.�������" << endl;
		cout << "4.�������" << endl;
		cin >> menusel;
		switch (menusel)
		{
		case '0':
			break;
		case '1':
			cout << "����α����Ľ����" << endl;
			LevelTree(root);
			cout << endl;
			break;
		case '2':
			cout << "��������Ľ����" << endl;
			DLRTree(root);
			cout << endl;
			break;
		case '3':
			cout << "��������Ľ����" << endl;
			LDRTree(root);
			cout << endl;
			break;
		case '4':
			cout << "��������Ľ����" << endl;
			LRDTree(root);
			cout << endl;
			break;
		}
	} while (menusel != '0');
	ClearTree(root);
	return 0;
}