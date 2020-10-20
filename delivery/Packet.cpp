#include "Packet.h"

int Packet::getId() const {
    return m_ID;
}

void Packet::setId(int id) {
    m_ID = id;
}

int Packet::getTruckId() const {
    return m_truckId;
}

void Packet::setTruckId(int truckId) {
    Packet::m_truckId = truckId;
}

const Point &Packet::getOrigin() const {
    return m_origin;
}

void Packet::setOrigin(const Point &origin) {
    Packet::m_origin = origin;
}

const Point &Packet::getDestination() const {
    return m_destination;
}

void Packet::setDestination(const Point &destination) {
    Packet::m_destination = destination;
}

bool Packet::isDelivered() const {
    return m_delivered;
}

void Packet::delivered() {
    m_delivered = true;
}

void Packet::notDelivered() {
    m_delivered = false;
}
