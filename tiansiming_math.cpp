#include <iostream>
#include <cmath>
using namespace std;
int const MAX = 1e6;
short true_value[MAX]; //真值
short true_table[MAX][10]; //真值表
short pdnf[MAX];    //主析取范式
short pcnf[MAX];    //主合取范式
char varible[10] = {'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y'}; //定义变元
int cnt1 = 0, cnt2 = 0; //cnt1记录真值为1的数目，cnt2记录真值为0的数目
void Output_pdnf()  //输出主析取范式
{
    cout << "主析取范式为 : " << endl;
    if(cnt2 == 1)
        cout << 'm' << pdnf[0] << endl;
    else
    {
        for(int i = 0; i < cnt2 - 1; i++)
            cout << 'm' << pdnf[i] << " V ";
        cout << 'm' << pdnf[cnt2 - 1] << endl;
    }
}

void Output_pcnf() //输出主合取范式
{
    cout << "主合取范式为 : " << endl;
    if(cnt1 == 1)
        cout << 'M' << pcnf[0] << endl;
    else
    {
        for(int i = 0; i < cnt1 - 1; i++)
            cout << 'M' << pcnf[i] << " ∧ ";
        cout << 'M' << pcnf[cnt1 - 1] << endl;
    }
}

int main()
{
    int n, i;
    cout << "请输入命题变元的个数 :" << endl;
    cin >> n;
    cout << "请输入表达式的真值 :" << endl;
    for(i = 0; i < (int) pow(2.0, n * 1.0); i++)
    {
        cin >> true_value[i]; //输入真值
        if(true_value[i])
            pcnf[cnt1++] = i;
        else
            pdnf[cnt2++] = i;
    }
    cout << "真值表为 :" << endl;
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
