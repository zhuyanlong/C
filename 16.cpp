#include <iostream.h>
class CSample
{
	int i;
	public:
		CSample()
		{
			cout<<"Constructor1"<<endl;
		}
		CSample(int val)
		{
			cout<<"Constructor2"<<endl;
		}
		~CSample()
		{
			cout<<"Destructor"<<endl;
		}
		void disp()
		{
			cout<<"i="<<i<<endl;
		}
};
		void main()
		{
			CSample *a,b(10);
		//	a->disp();
			b.disp();
		}
