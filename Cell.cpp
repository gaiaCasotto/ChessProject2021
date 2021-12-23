
#include "Cell.h"
#include "lib/piece.h"
//#inlcude "lib/queen.h"
#include <fstream>
#include <ctype.h>
  


Cell::Cell(int i, int j): x{i} {
    
    y = j;
    m_piecePtr = nullptr;
}

void Cell::setPiece(Piece* p){
    m_piecePtr = p;    
}

bool Cell::isOccupied(){
    return (m_piecePtr != nullptr);
}

Piece* Cell::getPiecePointer(){
    return m_piecePtr;
}

void Cell::printCell(std::string& buf){
    Piece* p = m_piecePtr;
    if(p == nullptr){
        buf += ' ';
    } else {
        char pr = p->printable();
        buf += p->isWhite() ? pr  : toupper(pr);
    }

}
