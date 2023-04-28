//
// Created by daniu on 2023/4/28.
//
#include "RotationRepresent.h"
struct Deg {
    double angle;
    Deg(double angle_) : angle(angle_) {};
    Rad ConvertToRad();
};
struct Rad {
    double angle;
    Rad(double angle_) : angle(angle_) {};
    Deg ConvertToDeg(){
      Deg deg(angle / (2.0 * PI) * 180.0);
      return deg;
    }
};
Rad Deg::ConvertToRad() {
  Rad rad(angle / 180.0 * 2 * PI);
  return rad;
}
struct Vec3d {
    double i;
    double j;
    double k;
    Vec3d(double x, double y, double z) : i(x), j(y), k(z) {};
};
class rotation_angle_axis {
  Vec3d direction;
  Rad angle;
  rotation_angle_axis(Vec3d& dir, Rad& ang) : direction(dir), angle(ang) {};
};