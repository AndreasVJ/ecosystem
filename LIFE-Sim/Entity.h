#ifndef ENTITY_H
#define ENTITY_H

#include "vec2.h"

class Entity {
public:
    int type;
    vec2<double> pos;
    vec2<double> vel;

    Entity() : type(0), pos(vec2<double>(0, 0)), vel(vec2<double>(0, 0)) {}
    Entity(int type, double x_pos, double y_pos) {

    }
};

#endif