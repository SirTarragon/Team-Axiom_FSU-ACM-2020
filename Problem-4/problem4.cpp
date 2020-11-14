// Pease
// Solved

#include <iostream>
#include "ctype.h"
#include <string>

using namespace std;


struct Player{
  string color;
  string location;
  char movement;
};


int main(){
  int n, m;
  cin >> n >> m;
  string sus;
  int sus_count = 0;
  //cout << n << " " << m << endl;

  Player gameSession[m];
  Player playerList[n];

  int ptr = 0;
  for(int i = 0; i < m; i++){
    bool playerExists = false;
    cin >> gameSession[i].color >> gameSession[i].location  >> gameSession[i].movement;
    // Lowercasing color
    for(int c = 0; c < gameSession[i].color.length(); c++){
      gameSession[i].color[c] = tolower(gameSession[i].color[c]);
    }
    // Lowercasing location
    for(int c = 0; c < gameSession[i].location.length(); c++){
      gameSession[i].location[c] = tolower(gameSession[i].location[c]);
    }
    // Uppercasing movement
    gameSession[i].movement = toupper(gameSession[i].movement);

    for(int j = 0; j < n; j++){
      if(playerList[j].color == gameSession[i].color){
        playerExists = true;
      }
    }

    if(playerExists == false){
      playerList[ptr].color = gameSession[i].color;
      playerList[ptr].location = gameSession[i].location;
      playerList[ptr].movement = gameSession[i].movement;
      ptr++;
    }else{
      for(int j = 0; j < n; j++){
        if(playerList[j].color == gameSession[i].color){
          //cout << "Is " << playerList[j].color << " sus?" << endl;
          if(playerList[j].location != gameSession[i].location){
            if(playerList[j].movement == 'I' && gameSession[i].movement == 'O'){
              //cout << "Yes, because there was a sus loc change" << endl;
              sus = playerList[j].color;
              sus_count++;
              //cout << sus_count;
              playerList[j].location = gameSession[i].location;
              playerList[j].movement = gameSession[i].movement;
              j = m;
            }else{
              //cout << "No, but there was a loc change" << endl;
              playerList[j].location = gameSession[i].location;
              playerList[j].movement = gameSession[i].movement;
            }
          }else{
              //cout << "No" << endl;
              playerList[j].location = gameSession[i].location;
              playerList[j].movement = gameSession[i].movement;

          }
        }
      }
    }
  }

    cout << sus << endl << sus_count << endl;
}
