#include "speedywagon.h"

namespace speedywagon {

// Enter your code below:
bool connection_check(pillar_men_sensor* sensor) {
    return (sensor != nullptr) ? true : false;
}

int activity_counter(pillar_men_sensor* sensor_array, int array_size) {
    int count = 0;
    for (int i = 0; i < array_size; i++) {
        count += (sensor_array + i)->activity;
    }
    return count;
}

bool alarm_control(pillar_men_sensor* sensor) {
    if (sensor == nullptr) {
        return false;
    }
    else {
        return (sensor->activity > 0) ? true : false;
    }
}

// Please don't change the interface of the uv_light_heuristic function
int uv_light_heuristic(std::vector<int>* data_array) {
    double avg{};
    for (auto element : *data_array) {
        avg += element;
    }
    avg /= data_array->size();
    int uv_index{};
    for (auto element : *data_array) {
        if (element > avg) ++uv_index;
    }
    return uv_index;
}

bool uv_alarm(pillar_men_sensor* sensor) {
    if (sensor == nullptr) {
        return false;
    }
    else {
        int heuristic_result = uv_light_heuristic(&sensor->data);

        return (heuristic_result > sensor->activity) ? true : false;
    }
}

}  // namespace speedywagon
