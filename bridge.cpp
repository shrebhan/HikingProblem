#include "bridge.h"

namespace HikingProblem
{
    Bridge::Bridge(double l, std::vector<double> speeds) : length(l)
    {
        for (double s : speeds)
        {
            additional_hikers.push_back(std::make_shared<Person>(s));
        }
    }

    double Bridge::get_length()
    {
        return length;
    }
    void Bridge::set_length(double len)
    {
        length = len;
    }
    std::vector<std::shared_ptr<Person>> Bridge::get_additional_hikers()
    {
        return additional_hikers;
    }

}