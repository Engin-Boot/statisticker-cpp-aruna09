#include <vector>
#include <algorithm>
#include <math.h>
namespace Statistics {
    class Stats
    {
        public: 
            float average;
            float max;
            float min;
            void ComputeAverage(const std::vector<float>& list)
            {
                if(list.empty())
                    average = NAN;
                else{
                float sum = 0.0;
                for(int i=0;i<list.size();i++)
                sum += list[i];
                average = sum/list.size();
                }
               
            }
            void ComputeMin( const std::vector<float>& list)
            {
                if(list.empty())
                    min = NAN;
                else
                    min = *std::min_element(list.begin(), list.end());
            }
            void ComputeMax(const std::vector<float>& list)
            {
                if(list.empty())
                    max = NAN;
                else
                    max = *std::max_element(list.begin(), list.end());
            }
            
    };
    Stats ComputeStatistics(const std::vector<float>& list);
}
