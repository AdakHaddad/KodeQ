#include <iostream>
//Tictactoe with private class 3x3 board?
using namespace std;
class TicTacToe
{
public:
    TicTacToe();
    void play();
    void printBoard();
    bool isWinner(char);
    bool isBoardFull();
    void changePlayer();
    void makeMove();
    void getMove(int&, int&);
    bool isValidMove(int, int);
private:
    char board[3][3];
    char player;
};
int main()
{
    TicTacToe game;
    game.play();
    return 0;
}
private class board {
    private int[][] board = new int[3][3];
    private int moveCount;
    private int n = 3;
    private int x = 0;
    private int y = 0;
    private int s = 0;
    public void Move(int x, int y, int s){
        if(board[x][y] == 0){
            board[x][y] = s;
        }
        moveCount++;
        
        //check end conditions
        
        //check col
        for(int i = 0; i < n; i++){
            if(board[x][i] != s)
                break;
            if(i == n-1){
                //report win for s
            }
        }
        
        //check row
        for(int i = 0; i < n; i++){
            if(board[i][y] != s)
                break;
            if(i == n-1){
                //report win for s
            }
        }
        
        //check diag
        if(x == y){
            //we're on a diagonal
            for(int i = 0; i < n; i++){
                if(board[i][i] != s)
                    break;
                if(i == n-1){
                    //report win for s
                }
            }
        }
            
        //check anti diag (thanks rampion)
        if(x + y == n - 1){
            for(int i = 0; i < n; i++){
                if(board[i][(n-1)-i] != s)
                    break;
                if(i == n-1){
                    //report win for s
                }
            }
        }

        //check draw
        if(moveCount == (Math.pow(n, 2) - 1)){
            //report draw
        }
    }

}


// Path: main.cpp

