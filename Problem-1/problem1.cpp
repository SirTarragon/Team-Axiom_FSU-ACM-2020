#include <iostream>
using namespace std;

const int CAKE = 9, PIE = 5, APPLE = 2, CANDY_CORN = 1;

int main(){
  int input, cake_count = 0, pie_count = 0, apple_count = 0, corn_count = 0;

  cin >> input;

  while(input >= CAKE || input == CAKE){
    input -= CAKE;
    cout << input << endl;
    cake_count++;
  }

  while(input >= PIE || input == PIE){
    input -= PIE;
    cout << input << endl;
    pie_count++;
  }

  while(input > APPLE || input == APPLE){
    input -= APPLE;
    cout << input << endl;
    apple_count++;
  }

  while(input > CANDY_CORN || input == CANDY_CORN){
    input -= CANDY_CORN;
    cout << input << endl;
    corn_count++;
  }

  cout << "Cake: " << cake_count << endl
       << "Pie: " << pie_count << endl
       << "Apple: " << apple_count << endl
       << "Corn: " << corn_count << endl;

  return 0;
}
