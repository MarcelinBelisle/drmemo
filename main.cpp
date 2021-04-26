#include <iostream>
int main() {
 float* ptr_flottant;
 int* ptr_entier;
 // New sans delete : fuite de mémoire de 4 octets.
 ptr_flottant = new float;
 *ptr_entier = 4;
 std::cout << *ptr_entier << std::endl;
 int* ptr_tableau = new int[3];
}
//ujtrfjr

///jtfj