#ifndef PERIPHERAL_H
#define PERIPHERAL_H

class Peripheral {
    unsigned int pin;

    public:
        Peripheral(unsigned int pin);

        virtual ~Peripheral() = default;

        virtual void setup() = 0;

        int getPin();

    
};

#endif