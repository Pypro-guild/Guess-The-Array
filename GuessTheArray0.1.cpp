#include <iostream>
#include <ctime>

void check(int array1[], int array2[], int size, int value);

int main(){
    int value;
    srand(time(NULL));

    char choice;
    const int SIZE = 10;
    int g1[SIZE], g2[SIZE];

    do{
        std::cout << '\n';
        std::cout << "Enter a value 1-20: ";
        std::cin >> value;

        for (int i = 0; i < SIZE; i++){
            g1[i] = (rand()%20) + 1;
            g2[i] = (rand()%20) + 1;
        }
        std::cout << '\n';
        std::cout << "Array1:";
        for (int i = 0; i < SIZE; i++){
            std::cout << g1[i] << ' ';
        }
        std::cout << '\n';

        std::cout << "Array2:";
        for (int i = 0; i < SIZE; i++){
            std::cout << g2[i] << ' ';
        }

        check(g1, g2, SIZE, value);
        
        std::cout << '\n';
        std::cout << "Do you want to continue playing?";
        std::cin >> choice;
    }while(choice == 'y');
    return 0;
}

void check(int array1[], int array2[], int size, int value){
    for (int i = 0; i < size; i++){
        if (array1[i] == value){
            for (int j = 0; j < size; j++){
            
                if (array1[i] == array2[j]){
                    std::cout << '\n';
                    std::cout << "You won! Thanks for playing GUESS THE ARRAY!!";
                    break;
                }
                else{
                    continue;
                }
            break;
            }
        }
    }
}