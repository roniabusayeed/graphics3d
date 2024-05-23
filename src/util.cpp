#include <string>
#include <sstream>
#include <fstream>
#include <stdexcept>

#include "util.h"


// Reads the content of a text file and returns it as a string.
// Throws std::invalid_argument exception if the file cannot be opened.
std::string readTextFile(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        throw std::invalid_argument("Couldn't open file: " + filename);
    }

    std::stringstream ss;
    ss << file.rdbuf();

    return ss.str();
}
