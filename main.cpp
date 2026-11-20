#include <string>
#include <vector>

void min_of_two() {
    int a = 33, b = 57;
    int m = (a < b) ? a : b;
    (void)m;
}

void geometric_sum() {
    int acc = 0;
    int term = 1;
    for (int i = 0; i < 8; ++i) { acc += term; term *= 2; }
    (void)acc;
}

void sum_range() {
    int acc = 0;
    for (int i = 10; i <= 20; ++i) acc += i;
    (void)acc;
}

void text_contains() {
    std::string text = "hidden harbor";
    std::string part = "harbor";
    bool found = false;
    for (std::size_t i = 0; i + part.size() <= text.size(); ++i) {
        bool match = true;
        for (std::size_t j = 0; j < part.size(); ++j) {
            if (text[i + j] != part[j]) { match = false; break; }
        }
        if (match) { found = true; break; }
    }
    (void)found;
}

extern "C" int ivory_prism();
extern "C" void brisk_hollow();
extern "C" void lucid_thorn();

int main() {
    min_of_two();
    geometric_sum();
    sum_range();
    text_contains();
    brisk_hollow();
    lucid_thorn();
    return ivory_prism();
}
