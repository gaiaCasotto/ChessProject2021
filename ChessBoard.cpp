#include "ChessBoard.h"


ChessBoard::ChessBoard(){
    bool black = false;    //pezzi neri.
    board[0][0] { rook(black);  }
    board[1][0] { knight(black);}
    board[2][0] { bishop(black);}
    board[3][0] { queen(black); }
    board[4][0] { king(black);  }
    board[5][0] { bishop(black);}
    board[6][0] { knight(black);}
    board[7][0] { rook(black);  }
    for(int i = 0; i < 8; i++){
        board[i][1] { pawn(black);}
    }
    
    for(int j = 2; j < 6; j++){     //spazi vuoti.
        for(int i = 0; i < 8; i++){
            board[i][j] {nullptr};
        }
    }
    
    bool white = true;     //pezzi bianchi.
    for (int i = 0; i < 8; i++){
        board[i][6] {pawn(white);}
    }
    board[0][7] { rook(white);  }
    board[1][7] { knight(white);}
    board[2][7] { bishop(white);}
    board[3][7] { queen(white); }
    board[4][7] { king(white);  }
    board[5][7] { bishop(white);}
    board[6][7] { knight(white);}
    board[7][7] { rook(white);  }
}
