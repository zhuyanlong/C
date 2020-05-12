#include <iostream>
#include <cmath>
using namespace std;
int const MAX = 1e6;
short true_value[MAX]; //��ֵ
short true_table[MAX][10]; //��ֵ��
short pdnf[MAX];    //����ȡ��ʽ
short pcnf[MAX];    //����ȡ��ʽ
char varible[10] = {'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y'}; //�����Ԫ
int cnt1 = 0, cnt2 = 0; //cnt1��¼��ֵΪ1����Ŀ��cnt2��¼��ֵΪ0����Ŀ
void Output_pdnf()  //�������ȡ��ʽ
{
    cout << "����ȡ��ʽΪ : " << endl;
    if(cnt2 == 1)
        cout << 'm' << pdnf[0] << endl;
    else
    {
        for(int i = 0; i < cnt2 - 1; i++)
            cout << 'm' << pdnf[i] << " V ";
        cout << 'm' << pdnf[cnt2 - 1] << endl;
    }
}

void Output_pcnf() //�������ȡ��ʽ
{
    cout << "����ȡ��ʽΪ : " << endl;
    if(cnt1 == 1)
        cout << 'M' << pcnf[0] << endl;
    else
    {
        for(int i = 0; i < cnt1 - 1; i++)
            cout << 'M' << pcnf[i] << " �� ";
        cout << 'M' << pcnf[cnt1 - 1] << endl;
    }
}

int main()
{
    int n, i;
    cout << "�����������Ԫ�ĸ��� :" << endl;
    cin >> n;
    cout << "��������ʽ����ֵ :" << endl;
    for(i = 0; i < (int) pow(2.0, n * 1.0); i++)
    {
        cin >> true_value[i]; //������ֵ
        if(true_value[i])
            pcnf[cnt1++] = i;
        else
            pdnf[cnt2++] = i;
    }
    cout << "��ֵ��Ϊ :" << endl;
    for(i = 0; i < n; i++)
        cout << "\t" << varible[i];
    cout << "\t" << 'A' << endl;
    for(i = 0; i < (int) pow(2.0, n * 1.0); i++)
    {
        int tmp = (int) pow(2.0, n * 1.0) - 1 - i;
        for(int j = n - 1; j >= 0; j--)
        {
            true_table[i][j] = tmp % 2;
            tmp /= 2;
        }
    }
    for(i = 0; i < (int) pow(2.0, n * 1.0); i++)
        true_table[i][n] = true_value[i];
    for(i = 0; i < (int) pow(2.0, n * 1.0); i++)
    {
        for(int j = 0; j < n + 1; j++)
            cout << "\t" << true_table[i][j];
        cout << endl;
    }
    Output_pdnf();
    Output_pcnf();
    return 0;
}
