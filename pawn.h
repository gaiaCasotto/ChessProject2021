#ifndef PAWN_H
#define PAWN_H



#include "piece.h"

class Pawn : public Piece {

    public:
    Pawn(bool white); //quando creo un Pawn viene usato questo costruttore che inizializza white definita in Piece
    void move(const int to_X, const int to_Y) override; ////si preoccupa anche di controllare se si possa fare l'en passant
    bool isValidEnPassant() const; //controlla anche se si può fare l'en passant (ritorna EnPassant)

    private:
    bool EnPassant = false; //tipica di Pawn quindi definita in questa classe 
                            //(la setto true solo quando sono nella casella appena dopo la metà, poi di nuovo false) MA MANCA QUALCOSA...

};

#endif
