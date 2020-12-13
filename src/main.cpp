#include "parser/Parser.hpp"
#include <iostream>
#include <fstream>

using json = nlohmann::json;
using namespace std;

int main()
{
    json j;
    Parser parser;

    ifstream file("../data/demons.json");
    file >> j;

    for (json::iterator it = j.begin(); it != j.end(); ++it)
    {
        Demon d = parser.parseDemon(it.key(), *it);
        d.prettyPrint();
    }

    return 0;
}