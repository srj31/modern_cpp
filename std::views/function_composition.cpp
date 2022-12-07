#include <iostream>
#include <ranges>
#include <numeric>
#include <string>
#include <map>


int main() {
    
    std::map<std::string, int> freqWord{ {"witch", 25}, {"wizard", 33}, {"tale", 45},
                                                   {"dog", 4}, {"cat", 34}, {"fish", 23} };
    auto onlyLenght4orMore = [](const std::string& name){ return name.length() >= 4; };
    auto lengthOf = [](const std::string& name){ return name.size(); };
    auto values = std::views::keys(freqWord) | std::views::filter(onlyLenght4orMore) 
                                                            | std::views::transform(lengthOf) | std::views::common;
    auto res = std::accumulate(values.begin(), values.end(), 0);
    std::cout << "Sum of words which have 4 or more letters: " << res << std::endl;
   
}