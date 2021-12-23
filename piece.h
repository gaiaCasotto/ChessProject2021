#ifndef PIECE_H
#define PIECE_H

 class Piece { //classe padre dei vari pezzi

     public:
     bool isWhite() const; //funzione che controlla che un pezzo non vada su uno Spot su cui vi è già un pezzo dello stesso colore
     virtual void move(const int to_X, const int to_Y) = 0; //ho bisogno del solo parametro to perchè from lo uso quando cerco Spot nella matrice

     protected:
     bool white; //un pezzo è bianco (true) oppure negro (false)
 };

 #endif 
