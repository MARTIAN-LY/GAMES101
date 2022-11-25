#include <cmath>
#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/Dense>
#include <iostream>

using std::cout;
using std::endl;

int main()
{
    // Original point
    Eigen::Vector3d p(2.0, 1.0, 1.0);

    double degree = 45 * M_PI / 180;
    double co = cos(degree);
    double si = sin(degree);

    // Rotate: 45
    // Translate: (1,2)
    Eigen::Matrix3d rot;
    rot <<  co, -si, 1,
            si, co, 2,
            0, 0, 1;

    Eigen::Vector3d res = rot * p;

    cout << "Before transformation :" << endl;
    cout << p << endl;
    cout << "After transformation :" << endl;
    cout << res << endl;
}