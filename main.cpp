#include <iostream>
#include <fstream>
#include <cstring>
#include <vector>
#include "exceptions.h"
//#include "test.h"
//#include "yaml-cpp/yaml.h"
#include "hike.h"

using namespace HikingProblem;
using namespace std;

int main(int argc, char *argv[])
{
  std::vector<double> cross_speed {100, 50, 20, 10};
  unique_ptr<Hike> hike (new Hike(cross_speed));
  std::cout<<hike->get_fastest_bridge_crossing_time(1);
  //std::cout<<"---- "<<hike->bridges[1]->additional_hikers[0]->hike_speed<<std::endl;
    // try {
    //     std::vector<YAML::Node> all_tests = YAML::LoadAllFromFile("input.yaml");
    //   YAML::Node data = t["test"];
    //     for(auto &test : all_tests) {
    //         try {
              
    //           int tid = data["id"].as<int>();
    //           std::vector<double> cross_speed = data["speeds"].as<std::vector<double>>();
    //           int count = cross_speed.size();
    //           unique_ptr<Hike> hike (cross_speed);

    //           // for(auto bd : data["bridge_data"]){
    //           //   hike->bridges.push_back(new Bridge(bd["length"].as<double>(), bd["add_hiker_speed"].as<std::vector<double>>()));
    //           // }
    //           std::cout<<"---- "<<hike->bridges[1].additional_hikers[0]<<std::endl;
              
    //           BridgeCrossing::Test(test_id, count, walk_time, crossing_time).run();
    //         }
    //         catch(...) {
                
                
    //             std::cerr << "Test inside" << std::endl;
    //         }
    //     }
    // }
    // catch(...) {
    //     std::cerr << "error." << std::endl;
    //     exit(-3);
    // }
    exit(0);
}