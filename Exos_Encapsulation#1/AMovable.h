#ifndef AMOVABLE_H
#define AMOVABLE_H
#include "vector.h"

class AMovable {
protected:
	Vector2 direction;
	float speed;
public:
	AMovable(const Vector2& dir, float spd) : speed(spd), direction(dir) {}
	virtual void set_direction(const Vector2& dir) {
		direction = dir;
	}

	void set_speed(float spd) {
		speed = spd;
	}
	const Vector2& get_direction() {
		return direction;
	}

	float get_speed() const {
		return speed;
	}
	virtual void move() = 0;
};





#endif 
