#include "Queue.h"
#include "Queue.cpp"

int main()
{
	try{
		Queue<int> a(2);
		a.add(1);
		a.add(2);
		a.add(2);
		a.print();
	}catch(exception &e){
		cout<<e.what()<<endl;
	}
	getchar();
	return 0;
}