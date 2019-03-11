#pragma once

#include <string>

class Bull {
    public:
        Bull(int weight, int liftCapacity, std::string name);

    public:
        std::string to_string(void);

    private:
        int weight;
    private:
        int liftCapacity;
    private:
        std::string name;
};