#include <iostream>
using namespace std;

class WiFiModule {
public:
    void connect() { cout << "Connecting through Wi-Fi." << endl; }
};

class BluetoothModule {
public:
    void connect() { cout << "Connecting through Bluetooth." << endl; }
};

class SmartHomeHub : public WiFiModule, public BluetoothModule {
public:
    void connectDevices() {
        WiFiModule::connect();
        BluetoothModule::connect();
    }
};

int main() {
    SmartHomeHub hub;
    cout << "Smart Home Hub\n";
    hub.connectDevices();
    return 0;
}
