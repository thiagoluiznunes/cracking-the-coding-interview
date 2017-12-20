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

int number_needed(std::string first, std::string second) {
    int count = 0;
    std::map<char, int> f_map, s_map;
    std::map<char,int>::iterator it;
    std::map<char,int>::iterator it2;

    for (int i = 0; i < first.length(); i++) {
        char c = first.at(i);
        it = f_map.find(first.at(i));

        if (it != f_map.end()) {
            it->second++;
        } else {
            f_map.insert( std::pair<char, int>(c, 1));
        }
    }
    for (int i = 0; i < second.length(); i++) {
        char c = second.at(i);
        it = s_map.find(second.at(i));

        if (it != s_map.end()) {
            it->second++;
        } else {
            s_map.insert( std::pair<char, int>(c, 1));
        }
    }
    for (int i = 0; i < first.length(); i++) {
        char aux = first.at(i);
        it = s_map.find(aux);
        it2 = f_map.find(aux);

        if (it == s_map.end()) {
            it = f_map.find(aux);
            count += it->second;
            f_map.erase(aux);
        } 
    }
    for (int i = 0; i < second.length(); i++) {
        char aux = second.at(i);
        it = f_map.find(aux);
        it2 = s_map.find(aux);

        if (it == f_map.end()) {
            it = s_map.find(aux);
            count += it->second;
            s_map.erase(aux);
        }
    }
    for(auto it = f_map.cbegin(); it != f_map.cend(); it++) {
        it2 = s_map.find(it->first);
        count += abs(it->second - it2->second);
    }
    return count;
}

int main(){
    std::string first;
    std::cin >> first;
    std::string second;
    std::cin >> second;
    std::cout << number_needed(first, second) << std::endl;

    return 0;
}