#include "seqlist.h"

int main()
{
    SeqList <int> LA(20);
    int num;
    cout<<"��������Ŀ:"<<endl;
    cin>>num;
    int i;
    int x;
    int y;
    cout<<"���������ݣ�"<<endl;
    for(i=0;i<num;i++)
    {
        cin>>x;
        LA.Insert(i-1,x);
    }
    cout<<"�����������Ϊ:"<<endl;
    LA.Output();
    LA.Reverse();
    cout<<"ת�ú�"<<endl;
    LA.Output();
    cout<<"��������Ҫɾ����Ԫ��"<<endl;
    cin>>y;
    LA.DeleteX(y);
    cout<<"ɾ����"<<endl;
    LA.Output();
    return 0;
}
