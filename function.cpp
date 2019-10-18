#include <iostream>
#include "header.h"
using namespace std;
char tic_tac[9] = {'1','2','3','4','5','6','7','8','9'};

void game_board(){


    cout<<"\t"<<tic_tac[0]<<" | "<<tic_tac[1]<<" | "<<tic_tac[2]<<endl;
    cout<<"\t---------"<<endl;
    cout<<"\t"<<tic_tac[3]<<" | "<<tic_tac[4]<<" | "<<tic_tac[5]<<endl;
    cout<<"\t---------"<<endl;
    cout<<"\t"<<tic_tac[6]<<" | "<<tic_tac[7]<<" | "<<tic_tac[8]<<endl;

}
void get_input(int *input_one,int *input_two){

    cout<<"player 1 turn"<<endl;
    cin >> *input_one;
    cout<<"player 2 turn"<<endl;
    cin>> *input_two;

}
void input_decode(int a, int b){
    tic_tac[a-1]='x';
    tic_tac[b-1]='o';
}
int game_end_one(){
    int finish;

    if( (tic_tac[1]==tic_tac[0]) && (tic_tac[2]==tic_tac[1]) ){
         if (tic_tac[0]=='x'){
            finish = 2;
         }
         else if(tic_tac[0]=='o'){
            finish = 3;
         }

    }
    else if((tic_tac[4]==tic_tac[3]) && (tic_tac[5]==tic_tac[4]) ){
        if (tic_tac[3]=='x'){
            finish = 2;
         }
         else if(tic_tac[3]=='o'){
            finish = 3;
         }
    }
    else if((tic_tac[7]==tic_tac[6]) && (tic_tac[8]==tic_tac[7]) ){
        if (tic_tac[6]=='x'){
            finish = 2;
         }
         else if(tic_tac[6]=='o'){
            finish = 3;
         }
    }
    else if((tic_tac[3]==tic_tac[0]) && (tic_tac[6]==tic_tac[3]) ){
        if (tic_tac[0]=='x'){
            finish = 2;
         }
         else if(tic_tac[0]=='o'){
            finish = 3;
         }
    }
    else if((tic_tac[4]==tic_tac[1]) && (tic_tac[7]==tic_tac[4]) ){
        if (tic_tac[1]=='x'){
            finish = 2;
         }
         else if(tic_tac[1]=='o'){
            finish = 3;
         }
    }
    else if((tic_tac[5]==tic_tac[2]) && (tic_tac[8]==tic_tac[5]) ){
        if (tic_tac[2]=='x'){
            finish = 2;
         }
         else if(tic_tac[2]=='o'){
            finish = 3;
         }
    }
    else if((tic_tac[4]==tic_tac[0]) && (tic_tac[8]==tic_tac[4]) ){
        if (tic_tac[0]=='x'){
            finish = 2;
         }
         else if(tic_tac[0]=='o'){
            finish = 3;
         }
    }
    else if( (tic_tac[4]==tic_tac[2]) && (tic_tac[6]==tic_tac[4]) ){
        if (tic_tac[2]=='x'){
            finish = 2;
         }
         else if(tic_tac[2]=='o'){
            finish = 3;
         }
    }
    return finish;
}
