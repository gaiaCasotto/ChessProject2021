//INCLUDERE LIBRERIE PEZZI ??
//INCLUDERE LIBRERIA SCACCHIERA
#include "ChessBoard.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main(){
    ChessBoard cb;
    std::string buf;
    cb.NewGame();
    cb.printBoard( buf);
    cout << buf;
	return 0;
}
