//
// Created by Κωνσταντινος Μορφακης on 01/05/2020.
//

#ifndef POLYMORPHISM_CIRCLE_H
#define POLYMORPHISM_CIRCLE_H

#include "Shape.h"

class Circle: public Shape {
public:
    virtual void draw() override ;
    virtual void rotate() override;
    virtual ~Circle();
};


#endif //POLYMORPHISM_CIRCLE_H
