CC = g++ -g
exe = wow
$(exe): world.o pokemon.o error.o creature.o easy.o medium.o hard.o boss.o mob.o grass.o fire.o water.o starter.o
	$(CC) world.o pokemon.o error.o creature.o easy.o medium.o hard.o boss.o mob.o grass.o fire.o water.o starter.o -o $(exe)
pokemon.o: pokemon.cpp
	$(CC) -c pokemon.cpp
world.o: world.cpp
	$(CC) -c world.cpp
error.o: error.cpp
	$(CC) -c error.cpp
creature.o: creature.cpp
	$(CC) -c creature.cpp
easy.o: easy.cpp
	$(CC) -c easy.cpp
medium.o: medium.cpp
	$(CC) -c medium.cpp
hard.o: hard.cpp
	$(CC) -c hard.cpp
boss.o: boss.cpp
	$(CC) -c boss.cpp
grass.o: grass.cpp
	$(CC) -c grass.cpp
fire.o: fire.cpp
	$(CC) -c fire.cpp
water.o: water.cpp
	$(CC) -c water.cpp
mob.o: mob.cpp
	$(CC) -c mob.cpp
starter.o: starter.cpp
	$(CC) -c starter.cpp

clean:
	rm -f *.out *.o $(exe)
