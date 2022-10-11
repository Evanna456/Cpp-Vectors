#include <iostream>
#include <vector>

int main()
{
    std::vector <int> vector1; 
    std::vector <int> vector2;
    vector1.push_back(10);
    vector1.push_back(20);
    int vector1_length = size(vector1);
    for (int it = 0; it < vector1_length; it++) {
        std::cout << vector1.at(it) << "\n";
    }
    std::cout << "vector1 size is " << vector1_length << "\n";
    vector2.push_back(100);
    vector2.push_back(200);
    int vector2_length = size(vector2);
    for (int it = 0; it < vector2_length; it++) {
        std::cout << vector2.at(it) << "\n";
    }
    std::cout << "vector2 size is " << vector2_length << "\n";

    std::vector <std::vector <int>> vector2d;
    vector2d.push_back(vector1);
    vector2d.push_back(vector2);
    int vector2d_length = size(vector2d);
    for (int it = 0; it < vector2d_length; it++) {
        std::cout << vector2d[0][it] << "\n";
    }
    for (int it = 0; it < vector2d_length; it++) {
        std::cout << vector2d[it][0] << "\n";
    }

    vector1.at(0) = 1000;

    for (int it = 0; it < vector2d_length; it++) {
        std::cout << vector2d[0][it] << "\n";
    }
    for (int it = 0; it < vector2d_length; it++) {
        std::cout << vector2d[it][0] << "\n";
    }

    for (int it = 0; it < vector1_length; it++) {
        std::cout << vector1.at(it) << "\n";
    }
    std::cin.get();
}

