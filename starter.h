#ifndef STARTER_H
#define STARTER_H
#include "creature.h"

class Starter : public Creature{
	protected:
		string name;
		int maxHp;
		int xp;
	public:
		int starter_damage();
	
		virtual int get_damage()=0; // PURE VIRTUAL
		virtual void health_edit(int)=0; // PURE VIRTUAL
		virtual int get_hp()=0; // PURE VIRTUAL
		virtual string get_name()=0; // PURE VIRTUAL
		virtual void win()=0; // PURE VIRTUAL
		virtual void set_name()=0; // PURE VIRTUAL
		virtual int get_xp()=0; // PURE VIRTUAL
		virtual void set_maxHp()=0; // PURE VIRTUAL
		virtual void evolve()=0; // PURE VIRTUAL

		virtual ~Starter();
//		Starter* clone(); // fail
};
#endif
