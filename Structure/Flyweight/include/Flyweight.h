#include <iostream>
#include <map>
#include <vector>
using namespace std;

#define RELEASE(p)	\
{			\
    if(p)		\
    {			\
	delete p;	\
	p = NULL;	\
    }			\
}

typedef struct pointTag
{
    int x;
    int y;

    pointTag(){}
    pointTag(int a, int b)
    {
        x = a;
	y = b;
    }

    bool operator <(const pointTag& other) const
    {
        if (x < other.x)
        {
            return true;
        }
        else if (x == other.x)
        {
            return y < other.y;
        }

        return false;
    }
}POINT;

typedef enum PieceColorTag
{
    BLACK,
    WHITE
}COLOR;

class CPiece
{
public:
    CPiece(COLOR color) : m_color(color){}
    COLOR GetColor() { return m_color; }

    // Set the external state
    void SetPoint(POINT point) { m_point = point; }
    POINT GetPoint() { return m_point; }

protected:
    // Internal state
    COLOR m_color;

    // external state
    POINT m_point;
};

class CGomoku : public CPiece
{
public:
    CGomoku(COLOR color) : CPiece(color)
    {
	if(color) cout<<"--------Create a White Piece---------"<<endl;
	else cout<<"--------Create a Black Piece---------"<<endl;
    }
};

class CPieceFactory
{
public:
    CPiece *GetPiece(COLOR color);
    ~CPieceFactory();

private:
    vector<CPiece *> m_vecPiece;
};

class CChessboard
{
public:
    void Draw(CPiece *piece);
    void ShowAllPieces();
private:
    map<POINT, CPiece *> m_mapPieces;
};
