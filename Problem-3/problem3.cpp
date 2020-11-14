#include <iostream>
#include <string>

using namespace std;

int main(){
  string input;
  int inputSize;
  bool flag = false;

  getline(cin, input);

  inputSize = input.length();
  int j;
  for(int i = 0, j = inputSize; i < inputSize; i++){
    cout << input;
    if(input[i] != input[j - 1]){
        if(input[i] != ' ' && input[j] != ' '){
          input.erase(i);
        }else if(input[j] == ' '){
          j++;
        }
    }else{
      j++;
    }
  }

  if(flag){
    cout << input << " is not a palindrome." << endl;
  }else{
    cout << input << " is a  palindrome." << endl;
  }
}
