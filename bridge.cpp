#include "bridge.h"

namespace HikingProblem
{
    Bridge::Bridge(double l, std::vector<double> speeds) : length(l)
    {
        for (double s : speeds)
        {
            additional_hikers.push_back(new Person(s));
        }
    }

    
}