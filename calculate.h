#include "seqstack.h"
#include <cmath>
using namespace std;
class calculator
{
public:
	calculator(int maxSize) :s(maxSize){};
	void Run();
	void Clear(){s.Clear();}
private:
	SeqStack<double> s;
	void PushOperand(double);
	bool GetOperand(double &, double &);
	void DoOperand(char);
};

void calculator::PushOperand(double op)
{
	s.Push(op);
}

bool calculator::GetOperand(double &op1, double &op2)
{
	if (!s.Top(op1))
	{
		cerr << "Missing operand!" << endl;
		return false;
	}
	s.Pop();
	if (!s.Top(op2))
	{
		cerr << "Missing operand!" << endl;
		return false;
	}
	s.Pop();
	return true;
}

void calculator::DoOperand(char oper)
{
	bool result;
	double oper1, oper2;
	result = GetOperand(oper1, oper2);
	if (result)
	{
		switch (oper)
		{
		case '+':
			s.Push(oper1 + oper2);
			break;
		case '-':
			s.Push(oper1 - oper2);
			break;
		case '*':
			s.Push(oper1*oper2);
			break;
		case '/':
			if (fabs(oper1) < 1e-6)
			{
				cerr << "Divide by 0!" << endl;
				Clear();
			}
			else
			{
				s.Push(oper2 / oper1);
			}
			break;
		case '^':
			s.Push(pow(oper1, oper2));
			break;
		}
	}
	else
		Clear();
}

void calculator::Run()
{
	char c;
	double newop;
	while (cin >> c, c != '#')
	{
		switch (c)
		{
		case '+':
		case '-':
		case '*':
		case '/':
		case '^':
			DoOperand(c);
			break;
		default:
			cin.putback(c);
			cin >> newop;
			PushOperand(newop);
			break;
		}
	}
	if (s.Top(newop))
		cout << newop << endl;
}