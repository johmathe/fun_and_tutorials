/*
 * point.h
 *
 *  Created on: Feb 13, 2012
 *      Author: johmathe
 */

#ifndef POINT_H_
#define POINT_H_

class Point {
 public:
  Point(double x, double y);
  inline double x() const { return x_; }
  inline double y() const { return y_; }
  void PrintCoordinates();
 private:
  double x_;
  double y_;
};

#endif /* POINT_H_ */
