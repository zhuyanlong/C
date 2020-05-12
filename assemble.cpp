#include "seqlist.h"

int main()
{
    SeqList <int> LA(20);
    int num;
    cout<<"请输入数目:"<<endl;
    cin>>num;
    int i;
    int x;
    int y;
    cout<<"请输入数据："<<endl;
    for(i=0;i<num;i++)
    {
        cin>>x;
        LA.Insert(i-1,x);
    }
    cout<<"你输入的数据为:"<<endl;
    LA.Output();
    LA.Reverse();
    cout<<"转置后"<<endl;
    LA.Output();
    cout<<"请输入你要删除的元素"<<endl;
    cin>>y;
    LA.DeleteX(y);
    cout<<"删除后"<<endl;
    LA.Output();
    return 0;
}
