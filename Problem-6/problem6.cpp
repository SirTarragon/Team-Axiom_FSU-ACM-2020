#include <iostream>
#include <string>

using namespace std;

class Person{
public:
  Person(int n, int k, string n){
    per_n = n;
    per_k = k;
    name = n;
  }

  Person(Person p){
    per_n = P.per_n;
    per_k = P.per_k;
    name = P.name;
  }

  string GetName(){return name;}
  int GetN(){return n;}
  int GetK(){return k;}

private:
  string name;
  int per_n, per_k;
}

double co_binomial(int, int);

int main(){
  Person * list = new Person[0];

  // Input and assignment
  while(!cin.eof()){
    
  }

  return 0;
}

double co_binomial(int n, int k){
  int numerator, denomiantor;
  //Calc numerator n!
  for(int i = n; i > 0; i--){
    numerator *= i;
  }

  // Calculating k! for denom
  for(int i = k; i > 0; i-- ){
      denominator *= i;
  }

  // diff calc (n-k)! for denom
  for(int i = n-k; i > 0; i--){
    demoniator *= i;
  }

  return (numerator/denominator);

}
