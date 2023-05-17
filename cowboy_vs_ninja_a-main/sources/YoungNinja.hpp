#ifndef YOUNGNINJA_H
#define YOUNGNINJA_H

#include "Ninja.hpp"

namespace ariel {
    class YoungNinja : public Ninja {
    public:
        YoungNinja(std::string nameC, Point placeC) : Ninja(placeC, 100, nameC, 14) {}
    };
}

#endif
