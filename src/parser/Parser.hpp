#include <nlohmann/json.hpp>
#include "../model/Demon.hpp"

using json = nlohmann::json;

class Parser
{
public:
    Demon parseDemon(string, json);
};