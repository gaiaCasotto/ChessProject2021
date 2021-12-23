
#ifndef Cell_h
#define Cell_h

class Cell{
private:
    //std::string color;  //questo forse non servirà mai.
    int x, y;
    Piece* piece;
public:
    Cell(int i, int j);
    void setPiece(Piece* p);
    bool isOccupied();
    Piece* getPiecePointer();
};



#endif /* Cell_hpp */
