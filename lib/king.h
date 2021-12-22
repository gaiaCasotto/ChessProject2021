#ifndef KING_H
#define KING_H

#include "piece.h"

class King : public Piece {

    public:
    King(bool white); //quando creo un King viene usato questo costruttore che inizializza white definita in Piece
    void move(const int to_X,const int to_Y) override; //si preoccupa anche di controllare se si possa fare l'arrocco
    bool isValidCastle() const; //ritorna castlingDone

    private:
    bool castlingDone = false; //tipica di King quindi definita qui
};

#endif
