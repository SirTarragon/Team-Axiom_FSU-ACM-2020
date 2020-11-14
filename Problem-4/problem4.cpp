#include <iostream>
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
  int sus_count;
  cout << n << " " << m << endl;

  int playerCounter = 1, lineCounter = 1;
  Player gameSession[m];
  Player playerList[n];
  // Seed playerList
  for(int i = 0; i < n; i++){
    playerList[i].color = "Player Num: "+(i+1);
  }
  //while(sus_count > 0 && lineCounter == m){
    for(int i = 0; i < m; i++){
      bool playerExists = false;
      cin >> gameSession[i].color >> gameSession[i].location  >> gameSession[i].movement;
      int j = 0;
      for(int j; j < n; j++){
        if(playerList[j].color == gameSession[i].color){
          playerExists = true;
        }
      }

      if(playerExists == false){
        playerList[j].color = gameSession[i].color;
      }
    }

    for(int i = 0; i < n; i++){
      cout << playerList[i].color << endl;
    }
  //}
}
