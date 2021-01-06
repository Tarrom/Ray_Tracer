//
// Created by Jon on 12/27/2020.
//

#ifndef RAY_HITABLE_H
#define RAY_HITABLE_H
#include "ray.h"

class material;

struct hit_record {
    float t;
    vec3 p;
    vec3 normal;
    material *mat_ptr;

};

class hitable {
public:
    virtual bool hit(const ray& r, float t_min, float t_max, hit_record& rec) const=0;
};
#endif //RAY_HITABLE_H
