#include <iostream>
#include <fstream>
#include <cstring>
#include <vector>
//#include "yaml-cpp/yaml.h"
#include "hike.h"

using namespace HikingProblem;
using namespace std;

int main(int argc, char *argv[])
{
  std::vector<double> cross_speed{100, 50, 20, 10};

  try
  {
    // std::vector<YAML::Node> all_tests = YAML::LoadAllFromFile("input.yaml");
    // for (auto &test : all_tests)
    {
      try
      {
        // YAML parser yaml-cpp giving linking error
        // tried compiling it from source, that also didn't help

        // YAML::Node data = test["test"];
        // int tid = data["id"].as<int>();
        // std::vector<double> cross_speed = data["speeds"].as<std::vector<double>>();
        // int count = cross_speed.size();
        // auto hike = make_unique<Hike>(cross_speed);

        // for (auto bd : data["bridge_data"])
        // {
        //   hike->add_bridges(std::make_shared<Bridge>(bd["length"].as<double>(), bd["add_hiker_speed"].as<std::vector<double>>()));
        // }
      }
      catch (...)
      {

        std::cerr << "Test inside" << std::endl;
      }
    }
    // hardcoding input

    std::vector<double> cross_speed{100, 50, 20, 10};
    auto hike = make_unique<Hike>(cross_speed);

    // three bridges
    hike->add_bridges(std::make_shared<Bridge>(100, std::vector<double>{})); // only primary hikers
    hike->add_bridges(std::make_shared<Bridge>(100, std::vector<double>{2.5}));
    hike->add_bridges(std::make_shared<Bridge>(100, std::vector<double>{25, 15}));

    // testing single bridge
    std::cout << "bridge 0: " << hike->get_fastest_bridge_crossing_time(0) << std::endl;
    std::cout << "bridge 1: " << hike->get_fastest_bridge_crossing_time(1) << std::endl;
    std::cout << "bridge 2: " << hike->get_fastest_bridge_crossing_time(2) << std::endl;

    // testing aggregate time of bridges
  }
  catch (...)
  {
    std::cerr << "error." << std::endl;
    exit(-3);
  }
  exit(0);
}