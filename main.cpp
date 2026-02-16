#include <iostream> // headerfile
#include <iomanip> // Required for setprecision

// function order is important in C++. The function must be declared before it is called.

// 1. variable declarations
            // Variable initialization 
            // int i
            // int i = 0
            // int i{0}
            // static/global etc etc 
            // classes/struct etc
// 2. functions (declaring, defining, calling)
// WHY? performance ? (NO!!!) - code reuse, readability, organization, abstraction, modularity, maintainability  - DRY
// 3. function returning a value - int add(int a, int b) { return a + b; }
// 4. copy by value (pointer,reference)
// 5. function overloads
// 6. functions wih default parameters
// 7. functions without name - lambda functions


// 8. file handling



void printHelloWorld() { // function definition
    std::cout << "Hello World!" << std::endl; // output
}


// composite datatype - user defined
struct Player{ // same as class
    int jerseNumber;
    std::string name;
    int born;
};

// 
// std::     = namespace - "folder" on your computer
   ///               2025\summer.png
   ///               2024\summer.png

// using namespace std;  BAD PRACTICE


// lists 
// players = []
// List<Player>

int main(){



    // if( age == 15 || year == 2323)
    int selection;
    std::string name;
    while(true){
        std::cout << "1. Create a player " << std::endl;
        std::cout << "2. Delete a player " << std::endl;
        std::cout << "3. Exit" << std::endl;
        std::cout << "Enter action:";
        std::cin >> selection;
        if(selection == 1){
            std::cout << "Creating a new player" << std::endl;
            std::cout << "Enter a name:" ;
            std::getline(std::cin, name); // 
            //std::cin >> name; // Stefan Holmberg -> Stefan
        }else if(selection == 2){
            std::cout << "Delete a new player" << std::endl;
        }else if(selection == 3){
            break;
        }
    }


}