#include "line.h"
#include "point.h"
#include <set>

using namespace std;

Line::Line(Point* a, Point* b) {
    slope_ = (a->y() - b->y()) / (a->x() - b->x());
    intercept_ = a->y() - (slope_ * a->x());
    points_.insert(a);
    points_.insert(b);
};

int Line::GetPointCount() const {
	return points_.size();
}

void Line::AddPoints(Point* a, Point* b) {
	points_.insert(a);
	points_.insert(b);
}

void Line::PrintInfo() {
	for (set<Point*>::iterator i = points_.begin(); i != points_.end(); ++i) {
		(*i)->PrintCoordinates();
	}
}
