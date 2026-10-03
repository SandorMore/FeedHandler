#include <cstdint>
#include <vector>
#include "level.hpp"

struct DepthEvent {
    uint32_t symbol_id;          
    uint64_t event_time_ms;      
    uint64_t U, u;               
    std::vector<Level> bids;
    std::vector<Level> asks;
    uint64_t recv_ts_ns;         
};