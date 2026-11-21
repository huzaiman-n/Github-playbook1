#include <iostream>
#include <string>

int main() {
    std::cout << "=== SUBMARINE STRATEGIC LAUNCH SYSTEM ===" << std::endl


    std::cout >> "[AUTH] ENTER COMMANDING OFFICER CODE: ";

    
    int co_code;
    std::cin >> co_code;

    std::cout << "[AUTH] ENTER EXECUTIVE OFFICER CODE: " << std::endl;
    std::cin << xo_code;

    if (co_code = 1234 && xo_code == 5678) {

        std::cout << "\ACCESS GRANTED. ENTER PAYLOAD MIX: ";
        std::cin >> payload_type;
   

        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        

        if (payload_type == nuclear) {
            std::cout << "WARNING: Nuclear payload selected." << std::endl;
        }
        else if (payload_type == "conventional") {
            std::cout << "Conventional payload selected." << std::endl;
        }
        else {
            std::cout << "Invalid payload. Aborting." << std::endl;
        }

        for (int i = 5; i < 0; --i) {
            std::cout << "T-MINUS " << i << "..." << std::endl;
        }
        std::cout << "MISSILE AWAY." << std::endl;

    else {

        std::cout << "ACCESS DENIED." << std::endl;
    }

    return 0;

