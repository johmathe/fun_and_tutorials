/*
 * line.h
 *
 *  Created on: Feb 13, 2012
 *      Author: johmathe
 */

#ifndef LINE_H_
#define LINE_H_

#include "point.h"
#include <set>

class Line {
 public:
  Line(Point* a, Point* b);
  int GetPointCount() const;
  void AddPoints(Point* a, Point* b);
  void PrintInfo();
  friend bool operator< (Line &l1, Line &l2) {
    return l1.slope_ < l2.slope_ && l1.intercept_ < l2.intercept_;
  }
 private:
  double slope_;
  double intercept_;
  std::set<Point*> points_;
};

#endif /* LINE_H_ */
