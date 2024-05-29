#include<iostream>
using namespace std;

void drawboard(char board[3][3])
{
    cout<<"-------\n";
    for(int i=0;i<3;i++)
    {
        cout<<"|";
        for(int j=0;j<3;j++)
        {
            cout<<board[i][j]<<"|";
        }
        cout<<"\n";
    }
    cout<<"-------\n";
}

bool winchecker(char board[3][3],char player)
{
    for(int i=0;i<3;i++)
    {
        if(board[i][0]==player && board[i][1]==player && board[i][2]==player)
            return true;
        if(board[0][i]==player && board[1][i]==player && board[2][i]==player)
            return true;
    }
    if(board[0][0]==player && board[1][1]==player && board[2][2]==player)
        return true;
    if(board[0][2]==player && board[1][1]==player && board[2][0]==player)
        return true;
    return false;
}

int main()
{
    char board[3][3]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
    char player='X';
    int row,column,turn;
    for(turn=0;turn<9;turn++)
    {
        drawboard(board);
        while(true)
        {
            cout<<"player "<<player<<" enter row and column\n";
            cin>>row>>column;
            if(row<0 || row>2 || column<0 || column>2 || board[row][column] != ' ') {
                cout << "Invalid move. Try again.\n";
                continue;
            }
            board[row][column]=player;
            break;
        }
        if(winchecker(board,player))
        {
            drawboard(board);
            cout<<"Player "<<player<<" wins!\n";
            break;
        }
        // Switching to the other player
        player=(player=='X')?'O':'X';
    }
    if(turn==9 && !winchecker(board,'X') && !winchecker(board,'O'))
    {
        drawboard(board);
        cout<<"Draw match\n";
    }
    return 0;
}
