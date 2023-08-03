#ifndef VELOCITY_HPP
#define VELOCITY_HPP

class Velocity {
  private:
      double Vx;
      double Vy;
      double Ax;
      double Ay;
  public:
      Velocity();
      Velocity(double x, double y);
      void setVx(double x) {this->Vx = x;};
      void setVy(double y) {this->Vy = y;};
      double getVx() {return Vx;};
      double getVy() {return Vy;};
      void setAx(double x) {this->Ax = x;};
      void setAy(double y) {this->Ay = y;};
      double getAx() {return Ax;};
      double getAy() {return Ay;};
};


#endif
