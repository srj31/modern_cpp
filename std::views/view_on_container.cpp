#include <iomanip>
#include <iostream>
#include <ranges>
#include <string>
#include <tuple>
#include <vector>
#include <unordered_map>


int main() {
    
    std::unordered_map<std::string, int> freqWord{ {"witch", 25}, {"wizard", 33}, {"tale", 45},
                                                   {"dog", 4}, {"cat", 34}, {"fish", 23} };
    std::cout << "Keys of the map: " << std::endl;
    for(const auto& name: std::views::keys(freqWord)) {std::cout<<name<< " ";}
    std::cout << "\n";

 	std::cout << "Values of the map: " << std::endl;
    for(const auto& name: std::views::values(freqWord)) {std::cout<<name<< " ";}
    std::cout << "\n";
}