#include <iostream>
#include "hashmap.h"

int main() {
    HashMap<std::string, int> map;

    map.insert("bob", 1);
    map.insert("rob", 2);

    std::cout << "bob: " << map.at("bob") << "\n";

    map.insert("bob", 99);
    std::cout << "bob after update: " << map.at("bob") << "\n";

    if (map.contains("rob"))
        std::cout << "rob found!\n";

    map.remove("rob");
    if (!map.contains("rob"))
        std::cout << "rob removed!\n";

    std::cout << "size: " << map.size() << "\n";
    return 0;
}
