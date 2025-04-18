void checkValue(int val) {
    try {
        if (val < 0)
            throw val;  // Throwing an integer exception
        else if (val == 0)
            throw "Value is zero";  // Throwing a string exception
        else
            cout << "Value is positive: " << val << endl;
    } catch (int e) {
        cout << "Exception caught: Negative value " << e << endl;
    } catch (const char* msg) {
        cout << "Exception caught: " << msg << endl;
    }
}
int main() {
    checkValue(-5);
    checkValue(0);
    checkValue(10);
    return 0;
}
