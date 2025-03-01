#include <iostream>

class Number {
    private:
        int num;

    public:
        void setInput(int n) {
            num = n;
        }

        void checkEvenOdd() {
            if (num % 2 == 0) {
                std::cout << "Even number" << std::endl;
            } else {
                std::cout << "Odd number" << std::endl;
            }
        }
};

int main() {
    Number n;
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    n.setInput(num);
    n.checkEvenOdd();
    return 0;
}
