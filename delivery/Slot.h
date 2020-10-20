#ifndef SHIPPING_SERVICE_SLOT_H
#define SHIPPING_SERVICE_SLOT_H


class Slot {
    private:

        bool m_available;
        int m_ID;

    public:

    bool isAvailable() const;

    void setAvailable(bool available);

    int getId() const;

    void setId(int id);


};


#endif //SHIPPING_SERVICE_SLOT_H
