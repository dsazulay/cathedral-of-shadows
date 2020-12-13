#include "Parser.hpp"

Demon Parser::parseDemon(string demonName, json demonJson)
{
    Demon d;
    json affinities, skills;

    d.name = demonName;
    d.race = demonJson["race"];
    d.level = demonJson["level"];
    d.hp = demonJson["hp"];
    d.mp = demonJson["mp"];
    d.st = demonJson["st"];
    d.ma = demonJson["ma"];
    d.vi = demonJson["vi"];
    d.ag = demonJson["ag"];
    d.lu = demonJson["lu"];
    affinities = demonJson["affinities"];
    skills = demonJson["skills"];
    
    for (json::iterator it = affinities.begin(); it != affinities.end(); ++it) {
        vector<string> skillsType;
        for (int i = 0; i < it.value().size(); i++) {
            skillsType.push_back(it.value()[i]);
        }
        d.affinities.push_back(make_pair(it.key(), skillsType));
    }

    for (json::iterator it = skills.begin(); it != skills.end(); ++it) {
        d.skills.push_back(make_pair(it.key(), it.value()));
    }

    return d;
}