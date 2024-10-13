#ifndef ALIVE_H
#define ALIVE_H

class Alive {
protected:
	float max_hp;
	float cur_hp;
public:

	Alive(float MAX_HEALTH, float CURRENT_HEALTH) : max_hp(MAX_HEALTH), cur_hp(CURRENT_HEALTH) {
		if (cur_hp > max_hp) {
			cur_hp = max_hp; //s'assurer que les pvs actuels ne depassent pas le max
		}
	}


	virtual float get_max_hp() {
		return max_hp;
	}
	virtual float get_cur_hp() {
		return cur_hp;
	}

	virtual void take_damage(float damage) {
		if (damage < 0) {
			damage = 0;
		}
		cur_hp -= damage;
		if (cur_hp < 0) {
			cur_hp == 0;
		}

	}


};

#endif 


