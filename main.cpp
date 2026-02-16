#include <iostream> // headerfile
#include <iomanip> // Required for setprecision
#include <vector>


// OBS! Look at this code and ignore the const-things for a while
// You have a list(container/vector) and you create players and put into it

// function order is important in C++. The function must be declared before it is called.

// "THEME OF TODAY:" so you thought you knew functions - and parameters

// 1. variable declarations
            // Variable initialization 
            // int i
            // int i = 0
            // int i{0}
            // static/global etc etc 
            // classes/struct etc
// 2. functions (declaring, defining, calling)
// HOW? return type, name, parameters (optional), body
//      WHY? performance ? (NO!!!) - code reuse, readability, organization, abstraction, modularity, maintainability>  - DRY
                                     // DRY = Don't Repeat Yourself - principle of software development that emphasizes the importance of avoiding code duplication. By using functions, you can encapsulate a piece of code that performs a specific task and reuse it whenever needed, rather than writing the same code multiple times. This leads to cleaner, more maintainable, and less error-prone code.
//      WHAT? code block with a name (mostly...lambdas)
//      
// 3. function returning a value - int add(int a, int b) { return a + b; }
// 4. copy by value (pointer,reference)
// 5. function overloads
// 6. function pointers
// 7. functions without name - lambda functions

// function templates (generics) later!!!


// 9. file handling (maybe)



void printHelloWorld() { // function definition
    std::cout << "Hello World!" << std::endl; // output
}


// composite datatype - user defined
struct Player{ // same as class
    int jerseyNumber;
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


void doAdd(int &x){ // x = 12 // COPIED BY VALUE
   x = x + 1;  // 13
   std::cout << "The value of x is: " << x << std::endl; // output the value of x
   // 13
}


Player createPlayer(){
    std::cout << "Creating a new player..." << std::endl;
    
    Player p; // Creating a new player "object""

    std::cout << "Enter a name:" ;
    
    std::getline(std::cin >> std::ws, p.name);
    // can add space and then read the name - std::ws - consume any leading whitespace characters before reading the name

    std::cout << "Enter a jersey number:" ;
    std::cin >> p.jerseyNumber;
    std::cout << "Enter a birth year:" ;
    std::cin >> p.born;

    return p; // return a player struct
}


void listAllPlayers(const std::vector<Player> &players){ 
    std::cout << "Listing all players..." << std::endl;
    for(const Player &p : players){  // players[0] = "Foppa" p is a copy of the player in the vector - we can use references to avoid this - const std::vector<Player> &players - we can also use pointers - const std::vector<Player> *players
        std::cout << "Name: " << p.name << ", Jersey Number: " << p.jerseyNumber << ", Born: " << p.born << std::endl; // output the player's information
    }
}

int main(){
    int x = 12;
    //int* x = &x; 
    //int *x = &x; 


    std::cout << "The value of x is: " << x << std::endl; // output the value of x
    // 12
    
    doAdd(x); // reference is an alias - lets us modify the original variable passed to the function - COPIED BY REFERENCE
    std::cout << "The value of x is: " << x << std::endl; // output the value of x
    // 13 



    // this is KIND OF a python list [], List<Player>, ArrayList<>
    std::vector<Player> players; // "list" of players - kommer senare


    // if( age == 15 || year == 2323)
    int selection;
    std::string name;
    while(true){
        std::cout << "1. Create a player " << std::endl;
        std::cout << "2. Delete a player " << std::endl;
        std::cout << "3. List all players " << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Enter action:";
        std::cin >> selection;
        if(selection == 1){
            Player p = createPlayer(); // create a player struct
            players.push_back(p); // add the player to the list of players
                // emplace_back() - construct the player in place - more efficient
        }else if(selection == 2){
            std::cout << "Delete a new player" << std::endl;
        }else if(selection == 3){ // players vector 1 000 000 players
            listAllPlayers(players);  // all function parameters are passed by value - a copy of the argument is made and passed to the function - in this case, a copy of the vector of players is made and passed to the function - this can be inefficient for large data structures - we can use references to avoid this
        }else if(selection == 4){
            break;
        }
    }


}