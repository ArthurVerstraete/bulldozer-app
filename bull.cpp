#include "bull.h"

Bull::Bull(int weight, int liftCapacity, std::string name) {
    this->weight = weight;
    this->liftCapacity = liftCapacity;
    this->name = name;
}

std::string Bull::to_string(void) {
    return "This bull is a " + name + ", weighs " + std::to_string(weight) + "kg and can lift " + std::to_string(liftCapacity) + "kg."
;}