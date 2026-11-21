#include <iostream>
using namespace std;

int main() {
    // Pengisytiharan pemalar
    const int SCND_TO_HOUR = 3600;
    const int SCND_TO_MINUTE = 60;
    
    int jumlahSaat;
    
    // Input  
    cout << "Masukkan jumlah masa dalam saat : ";
    cin >> jumlahSaat;
    
    // kiraan 
    int jam = jumlahSaat / SCND_TO_HOUR;
    int bakiSaat = jumlahSaat % SCND_TO_HOUR;
    int minit = bakiSaat / SCND_TO_MINUTE;
    int saat = bakiSaat % SCND_TO_MINUTE;
    

    cout << jumlahSaat << " saat adalah bersamaan dengan " 
         << jam << " jam, " 
         << minit << " minit dan " 
         << saat << " saat." << endl;
         
    return 0;
}