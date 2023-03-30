#include "hike.h"
#include <algorithm>

namespace HikingProblem
{

  Hike::Hike(std::vector<double> speeds)
  {
    for (double s : speeds)
    {
      primary_hikers.push_back(std::make_shared<Person>(s));
    }
  }

  std::vector < std::shared_ptr<Person>> Hike::get_primary_hikers(){
    return primary_hikers;
  }
  std::vector < std::shared_ptr<Bridge>> Hike::get_bridges(){
    return bridges;
  }

  void Hike::add_bridges(std::shared_ptr<Bridge>) {
    bridges.push_back(brdg);
  }

  double Hike::get_fastest_bridge_crossing_time(int bridge_num)
  {
    int b_len = bridges[bridge_num]->get_length();
    std::vector<double> hiker_times;
    for (auto p : primary_hikers)
    {
      hiker_times.push_back((double)b_len / p->get_hike_speed());
    }

    int additional_hiker_cnt = bridges[bridge_num]->get_additional_hikers().size();
    if (additional_hiker_cnt > 0)
    {
      for (auto ah : bridges[bridge_num]->get_additional_hikers())
      {
        double temp_speed = ah->get_hike_speed();
        hiker_times.push_back((double)b_len / temp_speed);
      }
    }

    sort(hiker_times.begin(), hiker_times.end());
    double result = 0;
    int n_hikers = hiker_times.size();

    if (n_hikers < 3)
    {
      result = hiker_times.back();
    }
    else if (n_hikers == 3)
    {
      result = hiker_times[0] + hiker_times[1] + hiker_times[2];
    }
    else
    {
      result += hiker_times[1];
      result += hiker_times[1];
      for (int i = 1; i < n_hikers - 2; i++)
      {
        result += hiker_times[0];
        result += hiker_times[i];
      }
      result += hiker_times[n_hikers - 1];
    }

    return result;
  }

  double Hike::get_total_bridge_crossing_time()
  {
    double result = 0;
    for (int i = 0; i < bridges.size(); i++)
    {
      result += get_fastest_bridge_crossing_time(i);
    }
    return result;
  }

}