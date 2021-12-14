#include "pokemon.h"

Pokemon::Pokemon(std::string name, int pv) : _name(name), _pv(pv) {};
int Pokemon::pv() const {
    return _pv;
}
bool operator<(Pokemon p1, Pokemon p2) {
    if (p1.pv() < p2.pv())
        return true;
    else
        return false;
}

std::string Pokemon::name() const {
    return _name;
}

void Pokemon::update_pv(int new_pv) {
    _pv = new_pv;
}

bool Pokemon::fight(Pokemon &p) {
    if (_pv < p.pv()) {
        _pv-=5;
        p.update_pv(p.pv()+5);
        return false;
    }
    _pv+=5;
    p.update_pv(p.pv()-5);
    return true;
}

bool fight2(Pokemon& p1, Pokemon& p2) {
    if (p1 < p2) {
        p1.update_pv(p1.pv()-5);
        p2.update_pv(p2.pv()+5);
        return false;
    }
    p1.update_pv(p1.pv()+5);
    p2.update_pv(p2.pv()-5);
    return true;
}

std::ostream& operator<< (std::ostream& os, const Pokemon& p) {
    os << p.name() << " - " << p.pv() << std::endl;
    return os;
}
