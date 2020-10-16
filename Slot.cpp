#include "Slot.h"

bool Slot::isAvailable() const {
    return m_available;
}

void Slot::setAvailable(bool available) {
    Slot::m_available = available;
}

int Slot::getId() const {
    return m_ID;
}

void Slot::setId(int id) {
    m_ID = id;
}
