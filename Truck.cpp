#include "Truck.h"

int Truck::getId() const {
    return m_ID;
}

void Truck::setId(int id) {
    m_ID = id;
}

float Truck::getDistance() const {
    return m_distance;
}

void Truck::setDistance(float distance) {
    Truck::m_distance = distance;
}

const std::vector<Point> &Truck::getSteps() const {
    return m_steps;
}

void Truck::setSteps(const std::vector<Point> &steps) {
    Truck::m_steps = steps;
}

bool Truck::isFull() {
    if(m_capacity >=  m_slots.size()){
        return true;
    }
    else{
        return false;
    }
}

const std::vector<Slot> &Truck::getSlots() const {
    return m_slots;
}

void Truck::setSlots(const std::vector<Slot> &slots) {
    Truck::m_slots = slots;
}
