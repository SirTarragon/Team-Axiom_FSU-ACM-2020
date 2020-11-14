#include <iostream>
#include <string>

using namespace std;

int main()
{
  string input;
  int inputSize;

  getline(cin, input);

  inputSize = input.length();
  int j;
  for(int i = 0, j = (inputSize - 1); i < j; i++)
  {
    if(input[i] != input[j])
    {
      if (input[i] != ' ' && input[j] == ' ')
      {
	j--;
	i--;
      }
      else if (input[i] != ' ' && input [j] != ' ')
      {
        input.erase(i);
	j--;
      }
    }
    else
      j--;
  }

  cout << input;
}
