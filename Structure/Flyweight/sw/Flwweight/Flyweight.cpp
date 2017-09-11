#include "Flyweight.h"

CPiece* CPieceFactory::GetPiece(COLOR color)
{
	CPiece *pPiece = NULL;
	if (m_vecPiece.empty())
	{
	    pPiece = new CGomoku(color);
	    m_vecPiece.push_back(pPiece);
	}
	else
	{
	    for (vector<CPiece *>::iterator it = m_vecPiece.begin(); it != m_vecPiece.end(); ++it)
	    {
	        if ((*it)->GetColor() == color)
		{
		    pPiece = *it;
		    break;
		}
	    }
	    if (pPiece == NULL)
	    {
		pPiece = new CGomoku(color);
		m_vecPiece.push_back(pPiece);
	    }
	 }
	    return pPiece;
    }    

CPieceFactory::~CPieceFactory()
{
        for (vector<CPiece *>::iterator it = m_vecPiece.begin(); it != m_vecPiece.end(); ++it)
        {
            if (*it != NULL)
	    {
		delete *it;
		*it = NULL;
	    }
	}
}


void CChessboard::Draw(CPiece *piece)
{
	if (piece->GetColor())
	{
            cout<<"Draw a White"<<" at ("<<piece->GetPoint().x<<","<<piece->GetPoint().y<<")"<<endl;
	}
	else
	{
	    cout<<"Draw a Black"<<" at ("<<piece->GetPoint().x<<","<<piece->GetPoint().y<<")"<<endl;
	}
	m_mapPieces.insert(pair<POINT, CPiece *>(piece->GetPoint(), piece));
}

void CChessboard::ShowAllPieces()
{
    	for (map<POINT, CPiece *>::iterator it = m_mapPieces.begin(); it != m_mapPieces.end(); ++it)
	{
            if (it->second->GetColor())
	    {
		cout<<"("<<it->first.x<<","<<it->first.y<<") has a White chese."<<endl;
	    }
	    else
	    {
		cout<<"("<<it->first.x<<","<<it->first.y<<") has a Black chese."<<endl;
	    }
	}
}
