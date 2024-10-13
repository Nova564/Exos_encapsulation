//#include <iostream>
//#include <iomanip>
//#include <sstream>
//
//class Perso {
//public:
//	Perso(int PV, int LEVELS, int DEFENSE, int VITESSE) : m_pv(PV), m_levels(LEVELS), m_defense(DEFENSE), m_vitesse(VITESSE) {}
//
//protected:
//	int m_pv;
//	int m_levels;
//	int m_defense;
//	int m_vitesse;
//
//};
//
//class Ogre : public Perso {
//public:
//	Ogre(int FORCE, int PV, int LEVELS, int DEFENSE, int VITESSE) : Perso(PV, LEVELS, DEFENSE, VITESSE), m_force(FORCE) {}
//	int m_coupfort() {
//		return 10 * m_force;
//	}
//	void DisplayCompetences() {
//		std::cout << "Voici vos points de vie : " << m_pv << std::endl;
//		std::cout << "Voici votre level : " << m_levels << std::endl;
//		std::cout << "Voici votre defense : " << m_defense << std::endl;
//		std::cout << "Voici votre vitesse : " << m_vitesse << std::endl;
//		std::cout << "Voici votre force : " << m_force << std::endl;
//
//	};
//protected:
//	int m_force;
//};
//
//
//int main() {
//	Ogre giant(75, 200, 74, 230, 20);
//
//
//	giant.DisplayCompetences();
//	return 0;
//}
//
