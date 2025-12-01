#include <string>

namespace log_line {
std::string message(std::string line) {
    int msg_index = line.find(":");

    std::string msg = line.substr(msg_index + 2);

    return msg;
        // return the message
}

std::string log_level(std::string line) {
    int level_end = line.find("]");

    std::string level = line.substr(1, level_end - 1);

    return level;

    // return the log level
}

std::string reformat(std::string line) {
    
    std::string msg{ message(line) };

    std::string level{ "(" + log_level(line) + ")" };

    return msg + " " + level;


    // return the reformatted message
}
}  // namespace log_line
