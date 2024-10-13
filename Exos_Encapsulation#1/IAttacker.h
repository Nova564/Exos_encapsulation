#ifndef IATTACKER_H
#define IATTACKER_H

class Alive;

class IAttacker {
public:
	virtual ~IAttacker() {}

	virtual void attack(Alive* target) = 0;


};





#endif
