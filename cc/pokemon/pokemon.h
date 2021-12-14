#include <iostream>
#include <string>

class Pokemon {
public:
    Pokemon(std::string name, int pv);
    int pv() const;
    void update_pv(int new_pv);
    std::string name() const;
    bool fight(Pokemon& p);

private:
    std::string _name;
    int _pv;
};
bool operator<(Pokemon p1, Pokemon p2);
bool fight2(Pokemon &p1, Pokemon &p2);

std::ostream& operator<< (std::ostream& os, const Pokemon& p);

