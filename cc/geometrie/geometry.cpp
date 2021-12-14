/** 
  * File:     geometry.cpp 
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2021 
  * Course:   C-C++ Programming / Esirem 3A 
  * Summary:  class Geometry
  */

#include "geometry.h"

Point::Point(double x, double y) : _x(x), _y(y) {}

double Point::x() const {
	return _x;
}

double Point::y() const {
	return _y;
}


Forme::Forme() {}


Cercle::Cercle(Point c, double rayon) : Forme(), _rayon(rayon) {
	_sommets.push_back(c);
}

std::vector<Point> Forme::sommets() const {
  return _sommets;
}

double Cercle::aire() const {
	return 3.14159*_rayon*_rayon;
}

Point Cercle::centre() const {
  return _sommets.front();
}

double Cercle::rayon() const {
  return _rayon;
}

bool appartient_au_cercle(const Cercle& c, const Point& p) {
  double r = c.rayon()*c.rayon();
  double e = (p.x()-c.centre().x())*(p.x()-c.centre().x()) + (p.y()-c.centre().y())*(p.y()-c.centre().y());
  if (r == e) {
    return true;
  }
  return false;
}