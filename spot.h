#ifndef SPOT_H
#define SPOT_H

#include "piece.h"

/*L'idea sarebbe di creare nel main una matrice di Spot. Ciascuno spot viene inizializzato con le coordinate x y della matrice
ed un puntatore (di tipo Piece) ai vari oggetti creati in precedenza (King, Queen ecc). In questo modo Spot può restituire il pezzo (o meglio, il puntaore) 
che lo occupa e così il move è più facile da fare e più efficiente (credo lol)*/

class Spot { //una delle 64 caselle della scacchiera

    private:
    int x; 
    int y;
    Piece* piece; //su ogni casella vi è un pezzo oppure no (in questo caso piece = nullptr)

    public:
    Spot(int x, int y, Piece* piece); // crea lo Spot a partire dalle coordinate e dal puntatore che punta a Piece (King, Pawn ecc)
    Piece* getPiece() const; // ritorna il Piece presente sullo Spot
    void setPiece(Piece* piece); // cambia il Piece presente sullo Spot
    int getX() const;
    int getY() const;
};

#endif