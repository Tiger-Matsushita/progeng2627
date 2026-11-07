#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>

struct S {
    std::string word;
    int n;
};

void search_vector(std::string word, std::vector<S> &v) {
    for(int i = 0; i < v.size(); i++) {
        if(word == v[i].word) v[i].n++;
    }
}

int main() {
    std::ifstream intext;
    std::ifstream insearch;
    std::ofstream outfile;

    intext.open("text.txt");
    insearch.open("words.txt");
    if(!intext.is_open() || !insearch.is_open()) {
        std::cout << "error infile" << std::endl;
        return EXIT_FAILURE;
    }

    std::vector<S> words;
    std::string tmp;
    while(insearch >> tmp) words.push_back({tmp, 0});

    while(intext >> tmp) {
        search_vector(tmp, words);
    }

    outfile.open("output.txt");
    if(!outfile.is_open()) {
        std::cout << "error outfile" << std::endl;
        return EXIT_FAILURE;
    }

    for(int i = 0; i < words.size(); i++) {
        outfile << words[i].word << ": " << words[i].n << std::endl;
    }

    intext.close();
    insearch.close();
    outfile.close();

    return 0;
}