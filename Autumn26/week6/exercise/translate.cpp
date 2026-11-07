#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>

void replace(std::string a, std::string b, std::vector<std::string> &v) {
    for(int i = 0; i < v.size(); i++) {
        if(v[i] == a) v[i] = b;
    }
}

int main() {
    std::ifstream intext;
    std::ifstream insearch;
    std::ofstream outfile;

    std::vector<std::string> text;

    intext.open("text.txt");
    insearch.open("words.txt");
    if(!intext.is_open() || !insearch.is_open()) {
        std::cout << "error infile" << std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp;
    while(intext >> tmp) {
        text.push_back(tmp);
    }

    int k = 0;
    std::string w1, w2;
    while(insearch >> tmp) {
        if(k % 2 == 0) {
            w1 = tmp;
        }
        else {
            w2 = tmp;

            replace(w1, w2, text);
        }
        k++;
    }

    outfile.open("output.txt");
    if(!outfile.is_open()) {
        std::cout << "error outfile" << std::endl;
        return EXIT_FAILURE;
    }

    for(int i = 0; i < text.size(); i++) {
        outfile << text[i] << ' ';
    }
    outfile << std::endl;

    intext.close();
    insearch.close();
    outfile.close();
    
    return 0;
}