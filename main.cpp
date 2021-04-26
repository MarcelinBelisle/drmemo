#include <iostream>
int main() {
 float* ptr_flottant;
 int* ptr_entier;
 // New sans delete : fuite de mémoire de 4 octets.
 ptr_flottant = new float;
 // Écriture utilisant un pointeur non-initialisé : comportement indéterminé.
 *ptr_entier = 5;
 // Lecture utilisant un pointeur non-initialisé : comportement indéterminé.
 std::cout << *ptr_entier << std::endl;
 // New sans delete : fuite de mémoire de 12 octets.
 int* ptr_tableau = new int[3];
}
