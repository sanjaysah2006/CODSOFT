#include<iostream>
#include<cstring>
using namespace std;
void drawboard(char Square[3][3]){
    cout<<"Welcome to Tic Tac Toe Game!"<<endl;
    cout<<"Player 1 'X' and Player 2 'O'"<<endl;
    cout << "\n       |      |       \n   ";
    for (int i = 0; i < 3; i++) {
        if (i > 0) cout << "----------------------\n       |      |       \n   ";
        for (int j = 0; j < 3; j++) {
            cout << Square[i][j] << "   ";
            if (j < 2) cout << "|";
            cout << "  ";
        }
        cout << "\n       |      |       \n";
    }
}
int checkwin(char Square[3][3],char choice){
    for(int i=0 ; i<3 ; i++){
        if(Square[i][0]==choice && Square[i][1]==choice && Square[i][2]==choice) return 1;
        if(Square[0][i]==choice && Square[1][i]==choice && Square[2][i]==choice) return 1;
    }
    if(Square[0][0]==choice && Square[1][1]==choice && Square[2][2]==choice) return 1;
    if(Square[0][2]==choice && Square[1][1]==choice && Square[2][0]==choice) return 1;
    else return -1;
}

void resetBoard(char Square[3][3]) {
    char temp[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
    memcpy(Square, temp, sizeof(temp));
}


int main(){
char Square[3][3] ={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
    drawboard(Square);
    int player = 1,k;
    char choice,Another;
    bool gameover = false;
    do{
        
        choice =player ==1 ?'X':'O';
        cout<<"Player "<<player<<" : ";
        cin>>k;
        if (k < 1 || k > 9 || Square[(k-1)/3][(k-1)%3] == 'X' || Square[(k-1)/3][(k-1)%3] == 'O') {
            cout << "Invalid move! Try again.\n";
            continue;
        }
        Square[(k-1)/3][(k-1)%3] = choice;

        system("cls");
        drawboard(Square);
        
        if(checkwin(Square,choice)==1){
            cout<<"Player "<<player<<" Wins!"<<endl;
            cout<<"Want to play Again. If Yes! \nEnter y : ";
            cin>>Another;
             if (Another=='y') {
                gameover = false;
                resetBoard(Square);
                system("cls");
                drawboard(Square);
                continue;
            } 
            else {gameover = true;}
        }
        
        bool isBoardFull = true;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (Square[i][j] != 'X' && Square[i][j] != 'O') {
                    isBoardFull = false;
                    break;
                }
            }
        }

        if (isBoardFull) {
            cout << "It's a draw!" << endl;
            cout<<"Want to play Again. If Yes! \nEnter y : ";
            cin>>Another;
            
            if (Another=='y') {
                gameover = false;
                resetBoard(Square);
                system("cls");
                drawboard(Square);
                continue;
            } 
            else {gameover = true;}
            
        }

        player = ( player % 2 ==0 )? 1:2;
    }while(!gameover);
    return 0;
}