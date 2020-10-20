#ifndef SHIPPING_INSTANCE_H
#define SHIPPING_INSTANCE_H

#include <chrono>
#include <random>
#include <vector>
#include <list>
#include <iostream>
#include "Point.h"
#include "Shipping.h"

class Instance {
    std::vector<std::vector<float> > m_distanceMatrix = std::vector<std::vector<float> >();
    std::list<Shipping> m_shippingPoints = std::list<Shipping>();
    Point m_depot = Point(0,0);

public:
    const std::vector<std::vector<float>> &getDistanceMatrix() const;

    void setDistanceMatrix(const std::vector<std::vector<float>> &DistanceMatrix);

    const std::list<Shipping> &getShippingPoint() const;

    void setShippingPoint(const std::list<Shipping> &ShippingPoint);

    const Point &getDepot() const;

    void setDepot(const Point &Depot);

    void generateDistanceMatrix();

    std::vector<float> calculateDistance(const Shipping& s,char c);

    void showDestinationMatrix();

public:
    Instance(int &number_of_shipping,int &mapSize);
    friend std::ostream& operator<<(std::ostream& os,const Instance& i);
};

#endif //SHIPPING_INSTANCE_H
