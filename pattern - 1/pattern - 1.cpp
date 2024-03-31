#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

class Figure abstract
{
protected:
	string name;
	int color;
	string figureArr[4][4];
public:
	Figure(string n, int col)
	{
		name = n;
		color = col;

		for (int i = 0; i < 4; ++i) {
			for (int j = 0; j < 4; ++j) {
				figureArr[i][j] = " ";
			}
		}
	}

	virtual void CreateFigure() = 0;
	void ShowFigure()
	{
		cout << name << endl;
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				SetConsoleTextAttribute(h, this->color);
				cout << figureArr[i][j];
			}
			cout << endl;
		}
	}

};

class Figure1 : public Figure
{
public:
	Figure1() : Figure("Figure 1", 14) {
		CreateFigure(); 
	}
	void CreateFigure() override
	{
		figureArr[0][0] = " ";
		figureArr[0][1] = " ";
		figureArr[0][2] = " ";
		figureArr[0][3] = " ";

		figureArr[1][0] = " ";
		figureArr[1][1] = " ";
		figureArr[1][2] = " ";
		figureArr[1][3] = " ";

		figureArr[2][0] = "#";
		figureArr[2][1] = "#";
		figureArr[2][2] = " ";
		figureArr[2][3] = " ";

		figureArr[3][0] = "#";
		figureArr[3][1] = "#";
		figureArr[3][2] = " ";
		figureArr[3][3] = " ";
	}
};

class Figure2 : public Figure
{
public:
	Figure2() : Figure("Figure 2", 11) {
		CreateFigure();
	}
	void CreateFigure() override
	{
		figureArr[0][0] = "#";
		figureArr[0][1] = " ";
		figureArr[0][2] = " ";
		figureArr[0][3] = " ";

		figureArr[1][0] = "#";
		figureArr[1][1] = " ";
		figureArr[1][2] = " ";
		figureArr[1][3] = " ";

		figureArr[2][0] = "#";
		figureArr[2][1] = " ";
		figureArr[2][2] = " ";
		figureArr[2][3] = " ";

		figureArr[3][0] = "#";
		figureArr[3][1] = " ";
		figureArr[3][2] = " ";
		figureArr[3][3] = " ";
	}
};

class Figure3 : public Figure
{
public:
	Figure3() : Figure("Figure 3", 4) {
		CreateFigure();
	}
	void CreateFigure() override
	{
		figureArr[0][0] = " ";
		figureArr[0][1] = " ";
		figureArr[0][2] = " ";
		figureArr[0][3] = " ";

		figureArr[1][0] = " ";
		figureArr[1][1] = " ";
		figureArr[1][2] = " ";
		figureArr[1][3] = " ";

		figureArr[2][0] = " ";
		figureArr[2][1] = "#";
		figureArr[2][2] = "#";
		figureArr[2][3] = " ";

		figureArr[3][0] = "#";
		figureArr[3][1] = "#";
		figureArr[3][2] = " ";
		figureArr[3][3] = " ";
	}
};

class Figure4 : public Figure
{
public:
	Figure4() : Figure("Figure 4", 10) {
		CreateFigure();
	}
	void CreateFigure() override
	{
		figureArr[0][0] = " ";
		figureArr[0][1] = " ";
		figureArr[0][2] = " ";
		figureArr[0][3] = " ";

		figureArr[1][0] = " ";
		figureArr[1][1] = " ";
		figureArr[1][2] = " ";
		figureArr[1][3] = " ";

		figureArr[2][0] = " ";
		figureArr[2][1] = "#";
		figureArr[2][2] = "#";
		figureArr[2][3] = " ";

		figureArr[3][0] = " ";
		figureArr[3][1] = " ";
		figureArr[3][2] = "#";
		figureArr[3][3] = "#";
	}
};

class Figure5 : public Figure
{
public:
	Figure5() : Figure("Figure 5", 6) {
		CreateFigure();
	}
	void CreateFigure() override
	{
		figureArr[0][0] = " ";
		figureArr[0][1] = " ";
		figureArr[0][2] = " ";
		figureArr[0][3] = " ";

		figureArr[1][0] = "#";
		figureArr[1][1] = " ";
		figureArr[1][2] = " ";
		figureArr[1][3] = " ";

		figureArr[2][0] = "#";
		figureArr[2][1] = " ";
		figureArr[2][2] = " ";
		figureArr[2][3] = " ";

		figureArr[3][0] = "#";
		figureArr[3][1] = "#";
		figureArr[3][2] = " ";
		figureArr[3][3] = " ";
	}
};

class Figure6 : public Figure
{
public:
	Figure6() : Figure("Figure 6", 13) {
		CreateFigure();
	}
	void CreateFigure() override
	{
		figureArr[0][0] = " ";
		figureArr[0][1] = " ";
		figureArr[0][2] = " ";
		figureArr[0][3] = " ";

		figureArr[1][0] = " ";
		figureArr[1][1] = " ";
		figureArr[1][2] = " ";
		figureArr[1][3] = "#";

		figureArr[2][0] = " ";
		figureArr[2][1] = " ";
		figureArr[2][2] = " ";
		figureArr[2][3] = "#";

		figureArr[3][0] = " ";
		figureArr[3][1] = " ";
		figureArr[3][2] = "#";
		figureArr[3][3] = "#";
	}
};


class Figure7 : public Figure
{
public:
	Figure7() : Figure("Figure 7", 9) {
		CreateFigure();
	}
	void CreateFigure() override
	{
		figureArr[0][0] = " ";
		figureArr[0][1] = " ";
		figureArr[0][2] = " ";
		figureArr[0][3] = " ";

		figureArr[1][0] = " ";
		figureArr[1][1] = " ";
		figureArr[1][2] = " ";
		figureArr[1][3] = " ";

		figureArr[2][0] = " ";
		figureArr[2][1] = "#";
		figureArr[2][2] = "#";
		figureArr[2][3] = "#";

		figureArr[3][0] = " ";
		figureArr[3][1] = " ";
		figureArr[3][2] = "#";
		figureArr[3][3] = " ";
	}
};

class Creator abstract
{
public:
	virtual Figure* CreateFigure() = 0;
};

class CreatorFig1 : public Creator
{
public:

	Figure* CreateFigure() override
	{
		return new Figure1;
	}
};

class CreatorFig2 : public Creator
{
public:

	Figure* CreateFigure() override
	{
		return new Figure2;
	}
};

class CreatorFig3 : public Creator
{
public:

	Figure* CreateFigure() override
	{
		return new Figure3;
	}
};

class CreatorFig4 : public Creator
{
public:

	Figure* CreateFigure() override
	{
		return new Figure4;
	}
};

class CreatorFig5 : public Creator
{
public:

	Figure* CreateFigure() override
	{
		return new Figure5;
	}
};

class CreatorFig6 : public Creator
{
public:

	Figure* CreateFigure() override
	{
		return new Figure6;
	}
};

class CreatorFig7 : public Creator
{
public:

	Figure* CreateFigure() override
	{
		return new Figure7;
	}
};

Figure* Client(Creator* pDev)
{
	return pDev ->CreateFigure();
}

int main()
{

	Creator* pDev1 = new CreatorFig1();
	Figure* pFig1 = Client(pDev1);
	pFig1 ->CreateFigure();
	pFig1 ->ShowFigure();
	cout << endl << endl;
	SetConsoleTextAttribute(h, 7);
	delete pFig1;
	delete pDev1;

	Creator* pDev2 = new CreatorFig2();
	Figure* pFig2 = Client(pDev2);
	pFig2->CreateFigure();
	pFig2->ShowFigure();
	cout << endl << endl;
	SetConsoleTextAttribute(h, 7);
	delete pFig2;
	delete pDev2;


	Creator* pDev3 = new CreatorFig3();
	Figure* pFig3 = Client(pDev3);
	pFig3->CreateFigure();
	pFig3->ShowFigure();
	cout << endl << endl;
	SetConsoleTextAttribute(h, 7);
	delete pFig3;
	delete pDev3;

	Creator* pDev4 = new CreatorFig4();
	Figure* pFig4 = Client(pDev4);
	pFig4->CreateFigure();
	pFig4->ShowFigure();
	cout << endl << endl;
	SetConsoleTextAttribute(h, 7);
	delete pFig4;
	delete pDev4;

	Creator* pDev5 = new CreatorFig5();
	Figure* pFig5 = Client(pDev5);
	pFig5->CreateFigure();
	pFig5->ShowFigure();
	cout << endl << endl;
	SetConsoleTextAttribute(h, 7);
	delete pFig5;
	delete pDev5;


	Creator* pDev6 = new CreatorFig6();
	Figure* pFig6 = Client(pDev6);
	pFig6->CreateFigure();
	pFig6->ShowFigure();
	cout << endl << endl;
	SetConsoleTextAttribute(h, 7);
	delete pFig6;
	delete pDev6;

	Creator* pDev7 = new CreatorFig7();
	Figure* pFig7 = Client(pDev7);
	pFig7->CreateFigure();
	pFig7->ShowFigure();
	cout << endl << endl;
	SetConsoleTextAttribute(h, 7);
	delete pFig7;
	delete pDev7;

}

