#include <iostream>
#include <vector>
#include <unistd.h>

int main() {
    std::vector<std::string> cmds = {
        "Move Forward",
        "-____^",
        "Turn Left",
        "Move Right",
        "Move Forward",
        "Stop"
    };

    for (const std::string& cmd : cmds) {
        std::cout << "Robot performs: " << cmd << std::endl;
        sleep(1);  // 1초 대기
    }
    return 0;
}
