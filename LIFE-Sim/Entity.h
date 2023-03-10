#ifndef ENTITY_H
#define ENTITY_H

#include "vec2.h"


struct entityGenes {
    double metabolismCoefficient;
    double predetorAvoidanceCoefficient;
    double naughtyBoyCoefficient;
    double visionCoefficient;
    double cohesionCoefficient;
};


class Entity {
public:
    int type;
    vec2<double> pos;
    vec2<double> vel;
    entityGenes* genes;

    double hunger;
    double reproduce;



    Entity() : type(0), pos(vec2<double>(0, 0)), vel(vec2<double>(0, 0)) {}
    Entity(int Type, double x_pos, double y_pos, entityGenes* _genes) {
        type = Type;
        pos.x = x_pos;
        pos.y = y_pos;
        genes = _genes;
    }

    void calculateFeeding() {

    }

    void calculateNaugtyBoy() {

    }

    void calculateCohesion() {

    }
    
    void calculateAvoidance() {

    }
};

#endif