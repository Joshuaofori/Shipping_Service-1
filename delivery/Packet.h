#ifndef SHIPPING_SERVICE_PACKET_H
#define SHIPPING_SERVICE_PACKET_H


#include "Point.h"

class Packet {
    private:
        int m_ID;
        int m_truckId;
        bool m_delivered;
        Point m_origin;
        Point m_destination;
        //time_command
        //time_delivery

    public:
    int getId() const;

    void setId(int id);

    int getTruckId() const;

    void setTruckId(int truckId);

    const Point &getOrigin() const;

    void setOrigin(const Point &origin);

    const Point &getDestination() const;

    void setDestination(const Point &destination);

    bool isDelivered() const;

    void delivered();

    void notDelivered();


};


#endif //SHIPPING_SERVICE_PACKET_H
