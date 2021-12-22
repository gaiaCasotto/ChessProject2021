
#ifndef ChessBoard_h
#define ChessBoard_h

#include <fstream>   //maybe we won't need tutti questi
#include <iostream>
#include <list>
#include <string>

#include "piece.h"

class ChessBoard{
private:
    piece* board[8][8];  //10x8 perche ci vanno ABCDEFG e 12345678
    
public:
    ChessBoard();  //costruttore del chessboard
    void printBoard(std::string nomeFile);
    bool isMoveAllowed(std::string position1, std::string position2); //controlla che la mossa sia lecita. Se non lo è, deve rifiutare il comando e chiederne un altro.  //chiama a seconda del pezzo che si trova nella position1, la funzione Move di quel pezzo e vede se può muoversi o no nella position2
    void Move(std::string position1, std::string position2); //move è metodo di scacchiera che chiama il move del pezzo specifico che si trova nella posizione 1.  GIUSTO????
    
    /* MOSSE SPECIALI */
    bool isCheck(piece* king);
    bool isCheckMate(piece* king);
    bool isTie(piece* king);   //patta
    bool canDoCastling(piece* king, piece* tower);   //arrocco
    bool canDoEnpassant(piece* pawn1, piece* pawn2);  //avevamo detto di farlo nella classe pawn ma forse va in scacchiera.  YES???
    //border check lo si fa nel main
    bool canBePromoted(piece* pawn);
    void Promotion(piece* pawn, piece* choiceOfPromotion);
    //funzione eat() ?
}

//forse per ogni pezzo servono getPosition() e getPossiblePositions()


#endif /* ChessBoard_h */
