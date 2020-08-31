#include "stats.h"
using namespace Statistics;

Stats Statistics::ComputeStatistics(const std::vector<float>& list ) {
    //Implement statistics here
    Stats statistics;
    statistics.ComputeAverage(list);
    statistics.ComputeMax(list);
    statistics.ComputeMin(list);
    return statistics;
}
