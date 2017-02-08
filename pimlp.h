#ifndef _PIMLP_H
#define _PIMLP_H

class Line
{
	class LineImpl;
public:

	Line(int,int,int,int);
	~Line();
	void printLine();
private:
	LineImpl* _pImp;
};


#endif