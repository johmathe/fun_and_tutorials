/*
 * point.cc
 *
 *  Created on: Feb 13, 2012
 *      Author: johmathe
 */

#include "point.h"
#include <iostream>

using namespace std;

Point::Point(double x, double y) {
  x_ = x;
  y_ = y;
}

void Point::PrintCoordinates() {
	cout << "X: " << x_ << " Y:" << y_ << endl;
}


