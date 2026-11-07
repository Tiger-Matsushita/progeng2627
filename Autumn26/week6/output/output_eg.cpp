#include <iostream>
#include <fstream>
#include <cstdlib>

int main() {
    std::ofstream outfile;
    //notice the class name!!!!!

    outfile.open("output.txt");
    // this will associate outfile to a file called output.txt
    // if the file doesn't exist it is created
    // if the file already exists it will be overwritten!

    if(!outfile.is_open()) {
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    outfile << "hello" << std::endl;
    // prints on the output file

    outfile.close();
    //.close() prevents errors and RAM use. However, modern c++ uses RAII to resolve this issue, which aplies to main() too.

    return 0;
}