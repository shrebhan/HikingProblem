#ifndef HIKE_H_
#define HIKE_H_

#include <vector>
#include "person.h"
#include "bridge.h"
# include <memory>

namespace HikingProblem
{

    class Hike
    {
        std::vector<std::shared_ptr<Person>> primary_hikers;
        std::vector<std::shared_ptr<Bridge>> bridges;

    public:
        Hike(std::vector<double> speeds);
        std::vector<std::shared_ptr<Person>> get_primary_hikers();
        void set_primary_hikers(std::vector<std::shared_ptr<Person>>);
        std::vector<std::shared_ptr<Bridge>> get_bridges();
        void set_bridges(std::vector<std::shared_ptr<Bridge>>);
        double get_fastest_bridge_crossing_time(int bridge_num);
        double get_total_bridge_crossing_time();
    };

}

#endif