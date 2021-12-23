#include "ChessBoard.h"
#include "Cell.h"
#include "lib/piece.h"

bool BLACK_PIECE = false;
bool WHITE_PIECE = true;

#define cA 0
#define cB 1
ChessBoard::ChessBoard(){
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            m_board[i][j].setCoordinates(i,j);
        }
    }
    /*for (int i = 0; i < 16; i++){
        listOfWhitePieces.push_back(nullptr);
        //listOfBlackPieces.push_back(nullptr);
    }*/
}

void ChessBoard::NewGame(){
    //ListOfPieces whitePieces( WHITE_PIECE );
    //ListOfPieces blackPieces( BLACK_PIECE );

    m_board[0][0].setPiece( new Rook(BLACK_PIECE ) );
    m_board[1][0].setPiece( new Knight(BLACK_PIECE));
    m_board[2][0].setPiece( new Bishop(BLACK_PIECE));
    m_board[3][0].setPiece( new Queen(BLACK_PIECE) );
    m_board[4][0].setPiece( new King(BLACK_PIECE)  );
    m_board[5][0].setPiece( new Bishop(BLACK_PIECE));
    m_board[6][0].setPiece( new Knight(BLACK_PIECE));
    m_board[7][0].setPiece( new Rook(BLACK_PIECE)  );
    for(int i = 0; i < 8; i++){
        m_board[i][1].setPiece( new Pawn(BLACK_PIECE));
    }

    for (int i = 0; i < 8; i++){
        m_board[i][6].setPiece(new Pawn(WHITE_PIECE));
    }
    m_board[0][7].setPiece( new Rook(WHITE_PIECE));
    m_board[1][7].setPiece( new Knight(WHITE_PIECE));
    m_board[2][7].setPiece( new Bishop(WHITE_PIECE));
    m_board[3][7].setPiece( new Queen(WHITE_PIECE));
    m_board[4][7].setPiece( new King(WHITE_PIECE));
    m_board[5][7].setPiece( new Bishop(WHITE_PIECE));
    m_board[6][7].setPiece( new Knight(WHITE_PIECE));
    m_board[7][7].setPiece( new Rook(WHITE_PIECE));
}

void ChessBoard::printBoard(std::string& buf){
    char row = '8';
    for(int j = 0; j < 8; j++){
        buf  += row;
        buf  += ' ';
        row--;
        for(int i = 0; i < 8; i++){
            m_board[i][j].printCell(buf);
        }
        buf += '\n';
        //nomeFile << endl;
    }
    buf += "  ";
    char col = 'A';
    for (int i = 0; i < 8; i++){
        buf += col;
        col++;
    }
    buf += '\n';
    //ofstream of(nomeFile);
    //of << buf;
}
