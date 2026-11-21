#include <iostream>
#include <string>
#include <thread>
#include <chrono>

// Helper function to simulate systems loading
void delay(int milliseconds) {
    std::this_thread::sleep_for(std::chrono::milliseconds(milliseconds));
}

int main() {
    std::cout << "==================================================" << std::endl;
    std::cout << "    WWMCCS STRATEGIC WEAPON CONTROL SYSTEM (SWCS) " << std::endl;
    std::cout << "         SSBN CLASS SUBSURFACE LAUNCH PLATFORM    " << std::endl;
    std::cout << "==================================================" << std::endl;
    std::cout << "INITIALIZING FIRE CONTROL NETWORK..." << std::endl;
    delay(1000);
    std::cout << "STATUS: LINK 16 ESTABLISHED. SATELLITE APOGEE READY.\n" << std::endl;

    // --- TWO-MAN RULE VERIFICATION ---
    std::cout << "[AUTH] ENTER COMMANDING OFFICER (CO) AUTH CODE: ";
    int co_code;
    std::cin >> co_code;

    std::cout << "[AUTH] ENTER EXECUTIVE OFFICER (XO) AUTH CODE: ";
    int xo_code;
    std::cin >> xo_code;

    // Simulating authorization processing
    std::cout << "\nVERIFYING PAL (PERMISSIVE ACTION LINK) CHECKSUMS..." << std::endl;
    delay(1500);

    // Both codes must be correct to proceed (CO: 1234, XO: 5678)
    if (co_code == 1234 && xo_code == 5678) {
        std::cout << ">>> ACCESS GRANTED. STRATEGIC RELEASE COMMAND VALIDATED. <<<\n" << std::endl;

        // --- PAYLOAD SELECTION ---
        std::cout << "SELECT TACTICAL PAYLOAD MIX (nuclear / conventional): ";
        std::string payload_type;
        std::cin >> payload_type;

        std::cout << "\nPRE-CONFIGURING TUBES..." << std::endl;
        delay(1000);

        if (payload_type == "nuclear") {
            std::cout << "==================================================" << std::endl;
            std::cout << "CRITICAL WARNING: STRATEGIC NUCLEAR WARHEADS SELECTED." << std::endl;
            std::cout << "PAL ENABLE SIGNAL SENT TO RE-ENTRY VEHICLES." << std::endl;
            std::cout << "FLOODING TUBES... READY FOR COMMAND LAUNCH." << std::endl;
            std::cout << "==================================================" << std::endl;
        } 
        else if (payload_type == "conventional") {
            std::cout << "--------------------------------------------------" << std::endl;
            std::cout << "TACTICAL ALERT: CONVENTIONAL HIGH-EXPLOSIVE SELECTED." << std::endl;
            std::cout << "TARGETING COORDINATES LOADED INTO GUIDANCE COMPUTERS." << std::endl;
            std::cout << "PROCEEDING WITH LAUNCH SEQUENCE." << std::endl;
            std::cout << "--------------------------------------------------" << std::endl;
        } 
        else {
            std::cout << "[ERR] INVALID PAYLOAD TYPE. EMERGENCY INHIBIT ACTIVATED. LAUNCH ABORTED." << std::endl;
            return 1;
        }

        // --- FINAL LAUNCH COUNTDOWN ---
        std::cout << "\nCOMMENCING FINAL COUNTDOWN..." << std::endl;
        for (int i = 5; i > 0; --i) {
            std::cout << "T-MINUS " << i << "..." << std::endl;
            delay(1000);
        }
        std::cout << ">>> MISSILE AWAY. MISSILE AWAY. <<<" << std::endl;

    } else {
        std::cout << "\n[CRITICAL] AUTHERIZATION FAILURE." << std::endl;
        std::cout << "[CRITICAL] SECURITY ALERT SENT TO NAVAL STRIKE COMMAND." << std::endl;
        std::cout << "SYSTEM LOCKED." << std::endl;
    }

    return 0;
}
