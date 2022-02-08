//Code is currently very faulty, working to fix it.
#include <iostream>

int main() {

  double weight;
  int planet;
  int x;

  std::cout << "What is your earth weight?\n";
  std::cin >> weight;

  std::cout << "List of planets:\n";
  std::cout << "1. Mercury \n2. Venus \n3. Mars \n4. Jupiter \n5. Saturn \n6. Uranus \n7. Neptune \n";

  std::cout << "Enter Planert number: ";
  std::cin >> planet;
   
    if (x== 1){
      weight = weight * 0.38;
    }
    else if (x== 2){
      weight = weight * 0.91;
    }
    else if (x== 3){
      weight = weight * 0.38;
    }
    else if (x== 4){
      weight = weight * 2.34;
    }
    else if (x== 5){
      weight = weight * 1.06;
    }
    else if (x== 6){
      weight = weight * 0.92;
    }
    else if (x= 7){
      weight = weight * 1.19;
    }
  
  std::cout << "Your weight: "<< weight *  << "\n";
  
 
}

