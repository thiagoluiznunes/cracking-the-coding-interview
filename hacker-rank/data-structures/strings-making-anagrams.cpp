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

    for (int i = 0; i < first.length(); i++) {
    	char c = first.at(i);
    	f_map.insert( std::pair<char, int>(c, i));
    }
    for (int i = 0; i < second.length(); i++) {
    	char c = second.at(i);
    	s_map.insert( std::pair<char, int>(c, i));
    }

    std::map<char,int>::iterator it;
    for (int i = 0; i < first.length(); i++) {
    	it = s_map.find(first.at(i));

    	if (it != s_map.end()) {
    		std::cout << it->first;
    	} else {
    		char aux = first.at(i);
    		f_map.erase(aux);
    		count++;
    	}
    }
    std::cout << '\n';
    for (int i = 0; i < second.length(); i++) {
    	it = f_map.find(second.at(i));

    	if (it != f_map.end()) {
    		std::cout << it->first;
    	} else {
    		char aux = second.at(i);
    		f_map.erase(aux);
    		count++;
    	}
    }

    std::cout << '\n';
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