#include <iostream>
#include <vector>

void merge_vectors_int(std::vector<int> v1, std::vector<int> v2, std::vector<int> &v3) {
    int i = 0, j = 0;
    //int k = 0;
    while(i < v1.size() || j < v2.size()) {
        if(i >= v1.size()) {
            v3.push_back(v2[j]);
            j++;
            continue;
        } else if (j >= v2.size()){
            v3.push_back(v1[i]);
            i++;
            continue;
        }

        if(v1[i] < v2[j]) {
            v3.push_back(v1[i]);
            i++;
        } else {
            v3.push_back(v2[j]);
            j++;
        }

        //std::cout << v3[k] << std::endl;
        //k++;
    }
}

int main(){

    std::vector<int> v1;
    std::vector<int> v2;
    std::vector<int> out;

    std::vector<int> expected_output;

    v1 = {1, 3, 5, 6};
    v2 = {4, 6, 10};
    expected_output = {1, 3, 4, 5, 6, 6, 10};

    merge_vectors_int(v1, v2, out);

    //std::cout << out.size() << std::endl;

    if(out == expected_output){ // we can compare the content of vectors (at least in some cases)
        std::cout << "passed" << std::endl;
    }
    else{
        std::cout << "not passed" << std::endl;
    }
}