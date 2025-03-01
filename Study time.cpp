
#include <iostream>

class Time {
    private:
        int hours;
        int minutes;

    public:
        Time(int h, int m) {
            hours = h;
            minutes = m;
        }

        void displayTime() {
            std::cout << hours << ":" << minutes << std::endl;
        }
};

int main() {
    Time t(10, 30);
    t.displayTime();

    return 0;
}
