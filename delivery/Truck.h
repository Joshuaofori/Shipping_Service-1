#ifndef SHIPPING_SERVICE_TRUCK_H
#define SHIPPING_SERVICE_TRUCK_H


#include <vector>
#include "Slot.h"
#include "Point.h"

class Truck {

    private:

    int m_ID;
    float m_distance;
    int m_capacity;
    std::vector<Slot> m_slots;
    std::vector<Point> m_steps;

    //time start
    //time finish

    public:

    int getId() const;

    void setId(int id);

    float getDistance() const;

    const std::vector<Slot> &getSlots() const;

    void setSlots(const std::vector<Slot> &slots);

    void setDistance(float distance);

    const std::vector<Point> &getSteps() const;

    void setSteps(const std::vector<Point> &steps);

    bool isFull();

};


#endif //SHIPPING_SERVICE_TRUCK_H
