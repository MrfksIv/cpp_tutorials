//
// Created by Κωνσταντινος Μορφακης on 01/05/2020.
//

#ifndef POLYMORPHISM_SHAPE_H
#define POLYMORPHISM_SHAPE_H


class Shape {
public:
    /*
     * Since each shape can have completely different methods for drawing and rotating,
     * it makes sense to declare such methods as pure abstract.
     */
    virtual void draw() = 0;    // pure virtual function
    virtual void rotate() = 0;  // pure virtual function
    virtual ~Shape();
};


#endif //POLYMORPHISM_SHAPE_H
