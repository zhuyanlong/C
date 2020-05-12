#include<iostream>
using namespace std;
#define MAXLEN 20
typedef char DATA;       //what's
struct  CBTType
{
    DATA data;
    CBTType * left;
    CBTType * right;
};

CBTType * InitTree()           //��ʼ��������
{
    CBTType * node;
    if(node = new CBTType)
    {
        cout<<"��������һ�����ڵ����ݣ�"<<endl;
        cin>>node->data;
        node->left=NULL;
        node->right=NULL;
        if(node!=NULL)
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
CBTType *TreeFindNode(CBTType *treeNode,DATA data)
{
    CBTType *ptr;
    if(treeNode==NULL)
    {
        return NULL;
    }
    else
    {
        if(treeNode->data==data)
        {
            return treeNode;
        }
        else
        {
            if(ptr=TreeFindNode(treeNode->left,data))
            {
                return ptr;
            }
            else if(ptr=TreeFindNode(treeNode->right,data))
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

void AddTreeNode(CBTType *treeNode)
{
 CBTType *pnode,*parent;
 DATA data;
 char menusel;
 if(pnode=new CBTType)              //�����ڴ�
 {
  cout<<"���������������ݣ�"<<endl;
  cin>>pnode->data;
  pnode->left=NULL;     //����������Ϊ��
  pnode->right=NULL;     //����������Ϊ��
  cout<<"����ý��ĸ��������"<<endl;
  cin>>data;
  parent=TreeFindNode(treeNode,data);                     //���Ҹ���㣬��ý��ָ��
  if(!parent)
  {
   cout<<"û���ҵ������"<<endl;
   delete pnode;
   return ;
  }
  cout<<"1.��Ӹý�㵽��������2.��Ӹý�㵽�������������������Ӧ�����֡�"<<endl;
  do
  {
   cin>>menusel;
   if(menusel=='1'||menusel=='2')
   {
    switch(menusel)
    {
     case '1':     //��ӽ�㵽������
      if(parent->left)                 //��������Ϊ��
      {
       cout<<"��������㲻Ϊ��"<<endl;
      }
      else
      {
       parent->left=pnode;
       cout<<"������ӳɹ���"<<endl;
      }
      break;
     case '2':     //��ӽ�㵽������
      if(parent->right)                 //��������Ϊ��
      {
       cout<<"��������㲻Ϊ��"<<endl;
      }
      else
      {
       parent->right=pnode;
       cout<<"������ӳɹ���"<<endl;
      }
      break;
     default:
      cout<<"�ӽڵ�ѡ��error!"<<endl;
      break;
    }
   }
  }while(menusel!='1'&&menusel!='2');
 }
}
/***********************��������������********************************/
int TreeDepth(CBTType *treeNode)
{
    int depleft,depright;
    if(treeNode==NULL)
    {
        return 0;     //���Ϊ�յ�ʱ�����Ϊ0
    }
    else
    {
        depleft=TreeDepth(treeNode->left);  //��������ȣ��ݹ���ã�
        depright=TreeDepth(treeNode->right);        //��������ȣ��ݹ���ã�
        if(depleft)
        {
            return ++depleft;
        }
        else
        {
            return ++depright;
        }
    }
}
/*************************��ʾ�������*********************************/
void ShowNodeData(CBTType *treeNode)
{
 cout<<treeNode->data<<"\t";     //ֱ������������
}
/***********************��ն�����************************************/
void ClearTree(CBTType *treeNode)
{
 if(treeNode)       //�жϵ�ǰ����Ϊ��
 {
  ClearTree(treeNode->left);    //���������
  ClearTree(treeNode->right);    //���������
  delete treeNode;     //�ͷŵ�ǰ�����ռ�õ��ڴ�
 }
}
/**************************��������㷨*********************************/
void LevelTree(CBTType *treeNode)
{
 CBTType *p;
 CBTType *q[MAXLEN];      //����һ������
 int head=0,tail=0;
 if(treeNode)       //�������ָ�벻Ϊ��
 {
  tail=(tail+1)%MAXLEN;     //����ѭ�����ж�β���
  q[tail]=treeNode;     //��������ָ��������
  while(head!=tail)
  {
   head=(head+1)%MAXLEN;    //����ѭ�����еĶ������
   p=q[head];     //��ȡ����Ԫ��
   ShowNodeData(p);    //�������Ԫ��
   if(p->left!=NULL)    //�������������
   {
    tail=(tail+1)%MAXLEN;   //������еĶ�β���
    q[tail]=p->left;   //���������
   }
   if(p->right!=NULL)    //�������������
   {
    tail=(tail+1)%MAXLEN;   //������еĶ�β���
    q[tail]=p->right;   //���������
   }
  }
 }
}
/*************************��������㷨**********************************/
void DLRTree(CBTType *treeNode)
{
 if(treeNode)
 {
  ShowNodeData(treeNode);     //��ʾ�������
  DLRTree(treeNode->left);    //��ʾ����������
  DLRTree(treeNode->right);    //��ʾ����������
 }
}
/***********************��������㷨************************************/
void LDRTree(CBTType *treeNode)
{
 if(treeNode)
 {
   LDRTree(treeNode->left);    //��ʾ����������
  ShowNodeData(treeNode);     //��ʾ�������
  DLRTree(treeNode->right);    //��ʾ����������
 }
}
/***********************��������㷨************************************/
void LRDTree(CBTType *treeNode)
{
 if(treeNode)
 {
  LRDTree(treeNode->left);    //��ʾ����������
  DLRTree(treeNode->right);    //��ʾ����������
  ShowNodeData(treeNode);     //��ʾ�������
 }
}
/*************************����������************************************/
int main()
{
 CBTType *root=NULL;      //rootΪָ�������������ָ��
 char menusel;
 //���ø����
 root=InitTree();
 //��ӽ��
 do
 {
  cout<<"��ѡ��˵���Ӷ������Ľ�㣺"<<endl;
  cout<<"0.�˳�;1.��Ӷ������Ľ�㡣"<<endl;
  cin>>menusel;
  switch(menusel)
  {
   case '1':
    AddTreeNode(root);
    break;
   case '0':
    break;
   default:
    cout<<"��ӽ��error"<<endl;
    break;
  }
 }while(menusel!='0');
 //����������
 cout<<"depth:"<<TreeDepth(root)<<endl;
 //����������
 do
 {
  cout<<"��ѡ��˵�����������������0��ʾ�˳���"<<endl;
  cout<<"1.�������"<<endl;
  cout<<"2.�������DLR"<<endl;
  cout<<"3.�������LDR"<<endl;
  cout<<"4.�������LRD"<<endl;
  cin>>menusel;
  switch(menusel)
  {
   case '0':break;
    case '1':
     cout<<"��������Ľ����"<<endl;
     LevelTree(root);
       cout<<endl;
    break;
   case '2':
    cout<<"��������Ľ����"<<endl;
    DLRTree(root);
    cout<<endl;
    break;
   case '3':
    cout<<"��������Ľ����"<<endl;
    LDRTree(root);
    cout<<endl;
    break;
   case '4':
    cout<<"��������Ľ����"<<endl;
    LRDTree(root);
    cout<<endl;
    break;
   default:
    cout<<"������ʽѡ�����"<<endl;
    break;
  }
 }while(menusel!='0');
 //��ն�����
 ClearTree(root);
 return 0;
}
