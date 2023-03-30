#ifndef BRIDGE_H_
#define BRIDGE_H_

#include <vector>
#include "person.h"
# include <memory>

namespace HikingProblem
{

    class Bridge
    {
        double length;
        std::vector<std::shared_ptr<Person>> additional_hikers;
        public:
        Bridge(double l, std::vector<double> speeds);
        double get_length();
        void set_length(double len);
        std::vector<std::shared_ptr<Person>> get_additional_hikers();
        void set_additional_hikers (std::vector<std::shared_ptr<Person>>);
    };

}
#endif