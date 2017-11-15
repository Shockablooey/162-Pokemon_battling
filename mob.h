#ifndef MOB_H
#define MOB_H
#include "creature.h"

class Mob : public Creature{
	protected:
		int payoff;
	public:
		int mob_damage();
		virtual int get_damage()=0; // PURE VIRTUAL
		virtual void health_edit(int)=0; // PURE VIRTUAL
		virtual int get_hp()=0; // PURE VIRTUAL
		virtual string get_pokemon()=0; // PURE VIRTUAL

		virtual ~Mob();
//		Mob* clone(); // shameful polymorph function
};

#endif
