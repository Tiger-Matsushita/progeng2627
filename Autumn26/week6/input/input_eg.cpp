#include <iostream>
#include <fstream>
#include <cstdlib>
// cstdlib header needed for EXIT_FAILURE
//Before midterm therefore practice std::

int main() {
    std::ifstream infile;
    // we declare the object that will represent the text file
    // of type std::ifstream (infile is not a special name)
    //namespace std -> no std::

    infile.open("input.txt");
    //infile.open("onput.txt");
    //now infile becomes an object of class ifstream

    if(!infile.is_open()) {
        std::cout << "error opening file." << std::endl;

        return EXIT_FAILURE;
        // ...after we print an error message
        // we use the return to terminate function main
        // with code EXIT_FAILURE that represents something going wrong
    }
    else { 
        // if the operation was successful
        // we can read the content of the file
        // this is done in a remarkably 
        // similar way to using std::cin

        int tmp;

        while(infile >> tmp) {
            std::cout << tmp << std::endl;
        }

        infile.close();
    }
    //or just no else and write in main()


    return 0;
}