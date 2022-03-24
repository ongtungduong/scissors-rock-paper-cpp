#include <iostream>
#include <cstdlib>
#include <ctime>

int main () {
    
    while (1) {
        
        std::cout << "Welcome to Scissors, Rock, Paper game" << std::endl;
        std::cout << "-------------------------------------" << std::endl;
        std::cout << std::endl;
        std::cout << "Press 1 to choose Scissors" << std::endl;
        std::cout << "Press 2 to choose Rock" << std::endl;
        std::cout << "Press 3 to choose Paper" << std::endl;
        std::cout << "Press 0 to Exit" << std::endl;
        std::cout << "-------------------------------------" << std::endl << std::endl;

        short select;
        std::cout << "Your selection is ";
        std::cin >> select;
        
        if (select == 0) {
            std::cout << "Good bye";
            break;
        }
    
        srand((int)time(0));
        short computer = rand() % (3);

        short player = select - 1;
        
        short result = player - computer;
        
        if (select > 3) {
            
            std::cout << "Wrong number, please read the instruction" << std::endl;
            std::cout << "-------------------------------------" << std::endl << std::endl;
            system ("pause");

        } else {

            std::string selection[3] = {"Scissors", "Rock", "Paper"};
            std::cout << "You choose " << selection[player] << std::endl;
            std::cout << "Computer chooses " << selection[computer] << std::endl;
            
            if (result == -1 || result == 2) {
                std::cout << "You lose" << std::endl << std::endl;
                std::cout << "-------------------------------------" << std::endl;
            }
            
            if (result == 1 || result == -2) {
                std::cout << "You win" << std::endl << std::endl;
                std::cout << "-------------------------------------" << std::endl;
            }
            
            if (result == 0) {
                std::cout << "Draw" << std::endl << std::endl;
                std::cout << "-------------------------------------" << std::endl;
            }
            system ("pause");
        }
    }
    return 0;
}