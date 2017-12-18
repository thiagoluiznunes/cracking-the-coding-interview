#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

std::vector<int> array_left_rotation(std::vector<int> my_vector, int size_vector, int left_shift) {
    std::rotate(my_vector.begin(), my_vector.begin() + left_shift, my_vector.end());
    return my_vector;
}

int main(){
    int size_vector;
    int left_shift;

    std::cin >> size_vector >> left_shift;
    std::vector<int> my_vector(size_vector);

    for(int i = 0; i < size_vector; i++){
        std::cin >> my_vector[i];
    }

    std::vector<int> output = array_left_rotation(my_vector, size_vector, left_shift);
    for(int i = 0; i < size_vector; i++) {
        std::cout << output[i] << " ";
    }

    std::cout << std::endl;
    return 0;
}
