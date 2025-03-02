#include <iostream>
#include <ctime> // Header File required for pseudo-random number generator

void check(int array1[], int array2[], int size, int value); // Function initialisation, parameters include both arrays for output, size of arrays due to pointer decay and value entered by user

int main(){
    int value;
    srand(time(NULL)); // Seed initialisation 

    const int SIZE = 10; // Setting constant size for both arrays
    int g1[SIZE], g2[SIZE];
    
    std::cout << "Enter a value 1-20: "; // User Input
    std::cin >> value;

    for (int i = 0; i < SIZE; i++){
        g1[i] = (rand()%20) + 1; // Making pseudo-random elements for both arrays
        g2[i] = (rand()%20) + 1;
    }
    std::cout << '\n';
    std::cout << "Array1:";
    for (int i = 0; i < SIZE; i++){ // output each element of array1
        std::cout << g1[i] << ' ';
    }
    std::cout << '\n';

    std::cout << "Array2:";
    for (int i = 0; i < SIZE; i++){ // output each element of array2
        std::cout << g2[i] << ' ';
    }

    check(g1, g2, SIZE, value); // Utilise check function to determine winner and loser scenarios

    return 0;
}

void check(int array1[], int array2[], int size, int value){
    for (int i = 0; i < size; i++){ // iterate over first array
        if (array1[i] == value){ // If statement to check if element is equal to value entered by user
            for (int j = 0; j < size; j++){ // Iterate over second array
            
                if (array1[i] == array2[j]){ // Check if element in first array equals any values in second array
                    std::cout << '\n';
                    std::cout << "You won! Thanks for playing GUESS THE ARRAY!!"; // output for victory
                    break;
                }
                else{
                    continue;
                }
            }
        }
    }
}
