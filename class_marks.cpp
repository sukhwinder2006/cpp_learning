#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

int main() {
    int n;
    if (!(std::cin >> n)) return 0;
    if (n <= 0) return 0;

    std::vector<std::string> name(n);
    std::vector<int> marks(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> name[i] >> marks[i];
    }

    double avg = 0.0;
    for (int i = 0; i < n; ++i) {
        avg += marks[i];
    }
    avg /= n;

    int max = marks[0];
    int imax = 0;
    for (int i = 1; i < n; ++i) {
        if (marks[i] > max) {
            max = marks[i];
            imax = i;
        }
    }

    std::cout << std::fixed << std::setprecision(2) << avg << std::endl;
    std::cout << max << std::endl;
    std::cout << name[imax] << std::endl;
    return 0;
}