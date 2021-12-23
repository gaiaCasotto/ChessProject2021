
#include "Cell.h"
#include "piece.h"

Cell::Cell(int i, int j) : x{i}, y{j}, piece{nullptr} {}

void Cell::setPiece(Piece* p){
    piece = &p;
}

bool Cell::isOccupied(){
    return (piece != NULL);
}

Piece* Cell::getPiecePointer(){
    return piece;
}
