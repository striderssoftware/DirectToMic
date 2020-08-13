#include <iostream>

#include "Synth.h"

using namespace std;

int main()
{
  cout << "running Test::main" << endl;

  Synth mysynth;

  bool result = mysynth.Test();
  cout << "here is synth.Test result:" << result << endl;
  
}
