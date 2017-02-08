#include "pimlp.h"
#include <iostream>
using namespace std;

class Line::LineImpl
{
public:
	class Point
	{
	public:
		Point(int ix = 0,int iy = 0)
			:_ix(ix)
			,_iy(iy)
		{
			cout<<"Point(int,int)"<<endl;
		}
		void printPoint();
	private:
		int _ix;
		int _iy;
	};

public:
	LineImpl(int x1,int y1,int x2,int y2)
		:_p1(x1,y1)
		,_p2(x2,y2)
	{
	
	}
	void printLine()
	{
		_p1.printPoint();
		cout<<"---->";
		_p2.printPoint();
		cout<<endl;
	}
private:
	Point _p1;
	Point _p2;
};

void Line::LineImpl::Point::printPoint()
{
	cout<<"("<<_ix<<" , "<<_iy<<")"<<endl;
}

 Line::Line(int x1,int y1,int x2,int y2)
	:_pImp(new LineImpl(x1,y1,x2,y2))
{
	cout<<"Line()"<<endl;
}
Line::~Line()
{
	cout<<"~Line()"<<endl;
	delete _pImp;
}
void Line::printLine()
{
	_pImp->printLine();
}
int main()
{
	Line line(1,2,3,4);
	line.printLine();

	return 0;
}
