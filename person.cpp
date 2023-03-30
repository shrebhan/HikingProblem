#include "person.h"

namespace HikingProblem
{
    Person::Person(double s) : hike_speed(s) {}

    double Person::get_hike_speed()
    {
        return this->hike_speed;
    }
    void Person::set_hike_speed(double new_speed)
    {
        this->hike_speed = new_speed;
    }
}