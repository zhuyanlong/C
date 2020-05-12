#include <iostream>
using namespace std;

int front=-1,rear=-1;
int maxsize=0;
int q[10];

void Enqueue(int x);
void Dequeue();

int main()
{
    int num=0;
    cin>>num;
    maxsize=num;
    int i=0;
    int x;
    for(i=0;i<num;i++)
    {
        cin>>x;
        Enqueue(x);
    }
}

void Enqueue(int x)
{
    q[(rear=(rear+1)%maxsize)]=x;
}

void Dequeue()
{
    front=(front+1)%maxsize;    //向前移一位
}
