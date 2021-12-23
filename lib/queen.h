#ifndef QUEEN_H
#define QUEEN_H

#include "piece.h"

class Queen : public Piece {


    public:
    Queen(bool white); //quando creo una Queen viene usato questo costruttore che inizializza white definita in Piece
    void move(const int to_X, const int to_Y) override;

    //non ha mosse speciali quindi no particolari variabili membro
};

#endif
