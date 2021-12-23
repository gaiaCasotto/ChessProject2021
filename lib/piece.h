#ifndef PIECE_H
#define PIECE_H


class Piece { //classe padre dei vari pezzi
    
public:
    Piece( bool isWhite ): white{isWhite} {}
    bool isWhite() const {return white;}   //funzione che controlla che un pezzo non vada su uno Spot su cui vi è già un pezzo dello stesso colore
    virtual void move(const int to_X, const int to_Y) = 0; //ho bisogno del solo parametro to perchè from lo uso quando cerco Spot nella matrice
    virtual char printable(void) const { return '?'; }

protected:
    bool white; //un pezzo è bianco (true) oppure negro (false)
};

class Rook: public Piece {
public:
    Rook( bool isWhite) : Piece(isWhite ) {}
    void move(const int to_X, const int to_Y){
        return;
    }
    virtual char printable( void ) const { return 'r';}
};
class Knight: public Piece{
public:
    Knight( bool isWhite) : Piece(isWhite ) {}
    void move(const int to_X, const int to_Y){
        return;
    }
    char printable( void ) const { return 'c';}
};
class Bishop: public Piece{
public:
    Bishop( bool isWhite) : Piece(isWhite ) {}
    void move(const int to_X, const int to_Y){
        return;
        
    }
    char printable( void ) const { return 'b';}
};
class Queen: public Piece{
public:
    Queen( bool isWhite) : Piece(isWhite ) {}
    void move(const int to_X, const int to_Y){
        return;
    }
    char printable( void ) const { return 'q';}
};
class King: public Piece{
public:
    King( bool isWhite) : Piece(isWhite ) {}
    void move(const int to_X, const int to_Y){
        return;
    }
    char printable( void ) const { return 'k';}
};
class Pawn: public Piece{
public:
    Pawn( bool isWhite) : Piece(isWhite ) {}
    void move(const int to_X, const int to_Y){
        return;
    }
    char printable( void ) const { return 'p';}
};

#endif
