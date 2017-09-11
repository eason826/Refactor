#include "Flyweight.h"

int main()
{
    CPieceFactory *pPieceFactory = new CPieceFactory();
    CChessboard *pCheseboard = new CChessboard();

    // The player1 get a white piece from the pieces bowl
    CPiece *pPiece = pPieceFactory->GetPiece(WHITE);
    pPiece->SetPoint(POINT(2, 3));
    pCheseboard->Draw(pPiece);

    // The player2 get a black piece from the pieces bowl
    pPiece = pPieceFactory->GetPiece(BLACK);
    pPiece->SetPoint(POINT(4, 5));
    pCheseboard->Draw(pPiece);

    // The player1 get a white piece from the pieces bowl
    pPiece = pPieceFactory->GetPiece(WHITE);
    pPiece->SetPoint(POINT(2, 4));
    pCheseboard->Draw(pPiece);

    // The player2 get a black piece from the pieces bowl
    pPiece = pPieceFactory->GetPiece(BLACK);
    pPiece->SetPoint(POINT(3, 5));
    pCheseboard->Draw(pPiece);

    /*......*/

    //Show all cheses
    cout<<"Show all cheses"<<endl;
    pCheseboard->ShowAllPieces();

    RELEASE(pCheseboard);
    RELEASE(pPieceFactory);

    return 0;
}
