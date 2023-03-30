#ifndef PERSON_H_
#define PERSON_H_

namespace HikingProblem
{

    class Person
    {
        double hike_speed;

    public:
        Person(double s);
        double get_hike_speed();
        set_hike_speed(double speed);
    };

}
#endif
