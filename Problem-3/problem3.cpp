// Pease

#include <iostream>
#include "ctype.h"
#include <string>

using namespace std;

int main(){
  string input;
  int inputSize;
  bool loopDone = false;

  getline(cin, input);

  string copy = input;

  inputSize = input.length();

  int j = inputSize - 1;
  int reset_i = 0, counter = 0;
  int index = 0;
  for(int i = 0; i < inputSize; i++){
    if(reset_i != 0){
      i = reset_i;
      reset_i = 0;
    }
    if(tolower(input[i]) != tolower(input[j])){
      if(input[i] != ' ' && input[j] != ' '){
        cout << i << " " <<  input[i] << " " << j << " " << input[j] << endl;
        if(counter != 0){
          index = j;
        }else{
          index = i;
          counter++;
        }
      }else if(input[j] == ' '){
        cout << i << " " <<  input[i] << " " << j << " Space" << input[j] << endl;
        reset_i = i;
        j--;
      }else if(input[i] == ' '){
        cout << i << " Space" <<  input[i] << " " << j << " " << input[j] << endl;
      }
    }else{
      cout << i << " " <<  input[i] << " " << j << " " << input[j] << endl;
      j--;
    }
  }

  if(index != 0){
    input.erase(index, 1);
    input.shrink_to_fit();
  }

  cout << input;

}
