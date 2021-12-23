
#ifndef Cell_h
#define Cell_h

#include <string>
#include "lib/piece.h"
#include <fstream>
using namespace std;



class Cell{
private:
    //std::string color;  //questo forse non servirà mai.
    int x, y;
    Piece* m_piecePtr;
public:
    Cell(): x{-1},y{-1}, m_piecePtr{nullptr} {}
    Cell(int i, int j);
    void setCoordinates(int col, int row ) { x=col; y=row;}
    void setPiece(Piece* p);
    bool isOccupied();
    Piece* getPiecePointer();
    void printCell(std::string& buf);
};



#endif /* Cell_hpp */
