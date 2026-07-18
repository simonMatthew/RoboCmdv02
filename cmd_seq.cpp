#include <iostream>
#include <vector>
#include <unistd.h>
#include <ctime>
#include <chrono>
int main() {
    std::vector<std::string> cmds = {
        "Move Forward",
        "-____^",
        "Turn Left",
        "Move Right",
        "Move Forward",
        "Stop",
        "speed down",
        "vel up"
    };

    for (const std::string& cmd : cmds) {
	auto now = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
	std::cout << std::ctime(&now);
        std::cout << "Robot performs: " << cmd << std::endl;
        sleep(1);  // 1초 대기
    }
    return 0;
}
