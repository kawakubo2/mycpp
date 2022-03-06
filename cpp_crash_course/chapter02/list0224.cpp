#include <cstdio>
#include <cstdint>

struct PodStruct {
    uint64_t a;
    char b[256];
    bool c;

    void show() {
        printf("a: %ld, b: %s, c: %d\n", a, b, c);
    }
};

int main() {
    PodStruct initialized_pod1{};
    initialized_pod1.show();
    PodStruct initialized_pod2 = {};
    initialized_pod2.show();
    PodStruct initialized_pod3{ 42, "Hello" };
    initialized_pod3.show();
    PodStruct initialized_pod4{ 43, "Hello", true};
    initialized_pod4.show();
}
