#include <string>
#include <vector>
#include <utility>

using namespace std;

class Demon
{
public:
    void prettyPrint();

    string name;
    string race;
    int level;
    int hp;
    int mp;
    int st;
    int ma;
    int vi;
    int ag;
    int lu;
    vector<pair<string, vector<string>>> affinities;
    vector<pair<string, int>> skills;
};