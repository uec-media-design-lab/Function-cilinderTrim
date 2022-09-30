#ifndef VEC3_H
#define VEC3_H

#include "rand.h"

using std::sqrt;

class vec3 {
    public:
    vec3() : e{0,0,0} {}
    vec3(double e0, double e1, double e2) : e{e0, e1, e2} {}

    double x() const {return e[0];}
    double y() const {return e[1];}
    double z() const {return e[2];}
    inline static vec3 random() {
        return vec3(random_double(),
                    random_double(),
                    random_double());
    }
    inline static vec3 random(double min, double max) {
        return vec3(random_double(min,max),
                    random_double(min,max),
                    random_double(min,max));
    }
    double length_squared() const {
        return e[0]*e[0] + e[1]*e[1] + e[2]*e[2];
    }
    public:
    double e[3];
};
vec3 random_in_unit_disk() {
    while (true) {
        auto p = vec3(random_double(-1, 1), random_double(-1, 1), 0);
        if (p.length_squared()>=1) continue;
        return p;
    }
}
vec3 random_in_cilinder() {
    vec3 p = random_in_unit_disk();
    return vec3(p.x(), p.y(), random_double());
}
#endif