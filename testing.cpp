#include <iostream>
#include <chrono>
#include "vec3.h"

int main()
{
    vec3 a(1,2,3);
    std::cout << "\na: " << std::endl;
    std::cout << a.x() << " " << a.y() << " " << a.z() << std::endl;

    vec3 b = a;
    std::cout << "\nb: " << std::endl;
    std::cout << b.x() << " " << b.y() << " " << b.z() << std::endl;

    vec3 c = a + b;
    std::cout << "\nc: " << std::endl;
    std::cout << c.x() << " " << c.y() << " " << c.z() << std::endl;

    a *= b;
    std::cout << "\na *= b: " << std::endl;
    std::cout << a.x() << " " << a.y() << " " << a.z() << std::endl;

    std::cout << "\nLength of a: " << a.len() << std::endl;

    // start time in nanoseconds
    auto start = std::chrono::high_resolution_clock::now();

    a = a.norm();
    std::cout << "\na normalized: " << std::endl;
    std::cout << a.x() << " " << a.y() << " " << a.z() << std::endl;

    // end time in nanoseconds
    auto end = std::chrono::high_resolution_clock::now();
    // duration in nanoseconds
    auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
    std::cout << "\nTime to normalize a: " << duration.count() << " nanoseconds" << std::endl;


    start = std::chrono::high_resolution_clock::now();

    a = a.fnorm();
    std::cout << "\na fnormalized: " << std::endl;
    std::cout << a.x() << " " << a.y() << " " << a.z() << std::endl;

    end = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
    std::cout << "\nTime to fnormalize a: " << duration.count() << " nanoseconds" << std::endl;

    std::cout << "\nDot product of a and b: " << a.dot(b) << std::endl;

    std::cout << "\nCross product of a and b: " << std::endl;
    vec3 d = a.cross(b);
    std::cout << d.x() << " " << d.y() << " " << d.z() << std::endl;

    return 0;
}