// Example: what happens when new (allocation of int array) fails
// and how to handle it safely.
// Note: this code automatically does'nt run.
#include <iostream>
#include <new>      // std::bad_alloc, std::nothrow
#include <vector>

int main() {
    // try {
    //     // Try to allocate a huge array that will likely fail
    //     const size_t huge_count = static_cast<size_t>(-1) / sizeof(int); // intentionally huge
    //     // Throws std::bad_alloc on failure
    //     int* data = new int{huge_count};
    //     // If succeeded (very unlikely), use and delete
    //     data[0] = 42;
    //     std::cout << "Allocated huge array, first element: " << data[0] << '\n';
    //     delete[] data;
    // } catch (const std::bad_alloc& e) { // bad_alloc is also replaced by std::exception in C++17, but bad_alloc is more specific
    //     std::cout << "Allocation failed (exception): " << e.what() << '\n';
    // }

    // Alternative: use nothrow to get nullptr instead of exception
    const size_t large = 100000000000ULL; // very large
    int* p = new (std::nothrow) int[large];
    if (!p) {
        std::cout << "Allocation failed (nothrow returned nullptr).\n";
        // fallback: try allocating a smaller amount or use a different strategy
        try {
            std::vector<int> vec;
            vec.reserve(1024); // conservative reserve
            std::cout << "Using fallback vector with reserve(1024).\n";
        } catch (...) {
            std::cout << "Fallback also failed.\n";
        }
    } else {
        p[0] = 1;
        std::cout << "Allocated with nothrow, first element: " << p[0] << '\n';
        delete[] p;
    }

    // Best practices summary (demonstrated):
    // - Prefer STL containers (std::vector) which throw on bad alloc and manage memory.
    // - Catch std::bad_alloc when using new that throws.
    // - Use new(std::nothrow) and check for nullptr if you don't want exceptions.
    // - Consider allocating smaller chunks, freeing other memory, or failing gracefully.

    return 0;
}
