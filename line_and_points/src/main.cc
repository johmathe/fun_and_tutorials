// Copyright 2012 johmathe@nonutc.fr

#include "line.h"
#include "point.h"

#include <set>
#include <list>
#include <gtest/gtest.h>
#define NUM_POINTS 32

using namespace std;

void BuildSetOfLines(list<Point*>* points, set<Line>* lines) {
  for (list<Point*>::iterator i = points->begin(); i != points->end(); ++i) {
    for (list<Point*>::iterator j = i; j != points->end(); ++j) {
      Line line(*i, *j);
//      if (lines->count(line)) {
//        lines->find(line)->add_points(*i, *j);
//      } else {
//        lines->insert(line);
//      }
    }
  }
}

void FindBusiestLine(const set<Line>& lines, Line* line) {
  int max_points = 0;
  for (set<Line>::const_iterator i = lines.begin(); i != lines.end(); ++i) {
    if (i->GetPointCount() > max_points) {
      max_points = i->GetPointCount();
      line = new Line(*i);
    }
  }
}

void CreatePoints(list<Point*>* points) {
  for (int i = 0; i < NUM_POINTS; ++i) {
    Point* p = new Point(1, 2 + i);
    points->push_back(p);
  }
}


int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  RUN_ALL_TESTS();
  Line* busiest_line;
  list<Point*> points;
  set<Line> lines;
  CreatePoints(&points);
  BuildSetOfLines(&points, &lines);
  FindBusiestLine(lines, busiest_line);
  busiest_line->PrintInfo();

}
