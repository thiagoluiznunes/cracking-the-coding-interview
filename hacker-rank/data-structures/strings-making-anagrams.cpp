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

        if (it != s_map.end()) {
            
        } else {
            it = f_map.find(aux);
            count += it->second;
            // std::cout << "Erase first map : " << aux << std::endl;
            f_map.erase(aux);
            // count++;
        }
    }
    for (int i = 0; i < second.length(); i++) {
        char aux = second.at(i);
        it = f_map.find(aux);

        if (it != f_map.end()) {
        } else {
            it = s_map.find(aux);
            count += it->second;
            // std::cout << "Erase second map : " << aux << std::endl;
            s_map.erase(aux);
            // count++;
        }
    }
std::cout << std::endl;
for(auto it = f_map.cbegin(); it != f_map.cend(); ++it)
{
    std::cout << it->first << " " << it->second << "\n";
}
std::cout << std::endl;
for(auto it = s_map.cbegin(); it != s_map.cend(); ++it)
{
    std::cout << it->first << " " << it->second << "\n";
}
    // int f_sum = first.length() - f_map.size();
    // int s_sum = second.length() - s_map.size();
std::cout << std::endl;

// std::map<char, int> teste;
// teste.insert( std::pair<char, int>('a', 1));
// teste.insert( std::pair<char, int>('a', 2));
// teste.insert( std::pair<char, int>('b', 1));
// teste.insert( std::pair<char, int>('b', 1));
// std::cout << "Size teste map: " << teste.size() << std::endl;

// for(auto it = teste.cbegin(); it != teste.cend(); ++it)
// {
//     std::cout << it->first << " " << it->second << "\n";
// }

    return count;
    // return f_sum + s_sum;
}

int main(){
    std::string first;
    std::cin >> first;
    std::string second;
    std::cin >> second;
    std::cout << number_needed(first, second) << std::endl;

    return 0;
}