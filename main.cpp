#include <iostream>
#include "header.h"
using namespace std;

int main()
{

    int x,y;
    char ans;
    int i = 0;

    cout<<"\tWelcome to the tic tac toe grand slam contestants"<<endl;
    game_board();
    cout<<"player 1 is x while player 2 is o, to play select the number of the position desired"<<endl;
    do{
    get_input(&x,&y);
    input_decode(x,y);
    game_board();
    ans = 'y';
    i++;

    if(game_end_one()==2){
        ans = 'n';
        cout<<"the winner is player 1"<<endl;
    }

    else if(game_end_one()==3){
        ans = 'n';
        cout<<"the winner is player 2"<<endl;
    }
    else if(i==4){
        ans = 'n';
        cout<<"the game is a draw"<<endl;
    }

    }while(ans =='y');


    return 0;
}
