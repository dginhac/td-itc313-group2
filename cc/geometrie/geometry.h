/** 
  * File:     geometry.h 
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2021 
  * Course:   C-C++ Programming / Esirem 3A 
  * Summary:  Class Geometry
  */

#include <vector>

class Point {
public:
	Point(double x=0.0, double y=0.0);
	double x() const;
	double y() const;
private:
	double _x;
	double _y;
};

class Forme {
public:
	Forme();
	virtual double aire() const = 0;
	std::vector<Point> sommets() const;
protected:
	std::vector<Point> _sommets;
};

class Cercle : public Forme {
public:
	Cercle(Point c, double rayon);
	double aire() const;
	Point centre() const;
	double rayon() const;
private:
	double _rayon;

};

bool appartient_au_cercle(const Cercle& c, const Point& p);