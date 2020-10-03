#regle explicite reliure
Application : Appli.o Catalogue.o Collection.o TrajetComposee.o TrajetSimple.o Trajet.o
	echo "Edition de liens"
	g++ -o Application Appli.o Catalogue.o Collection.o Trajet.o TrajetSimple.o TrajetComposee.o  -ansi -pedantic -Wall -std=c++11 -DMAP=1 -g

# règle explicite de compilation de Appli
Appli.o : Appli.h Trajet.h Collection.h TrajetComposee.h Catalogue.h TrajetSimple.h Appli.cpp
	echo "Compilation Appli.o"
	g++ -c Appli.cpp

# règle explicite de compilation de Collection
Collection.o : Trajet.h Collection.h Collection.cpp
	echo "compilation Collection.o"
	g++ -c Collection.cpp

#regle explicite de compilation de Catalogue
Catalogue.o : Collection.h  Catalogue.h Catalogue.cpp
	echo "compilation Catalogue.o"
	g++ -c Catalogue.cpp

# règle explicite de compilation de TrajetComposee
TrajetComposee.o : Trajet.h Collection.h TrajetComposee.h TrajetComposee.cpp
	echo "compilation TrajetComposee.o"
	g++ -c TrajetComposee.cpp

# règle explicite de compilation de Trajet
Trajet.o : Trajet.h Trajet.cpp
	echo "compilation Trajet.o"
	g++ -c Trajet.cpp

# règle explicite de compilation de TrajetSimple
TrajetSimple.o : Trajet.h Collection.h TrajetSimple.h TrajetSimple.cpp
	echo "compilation TrajetSimple.o"
	g++ -c TrajetSimple.cpp

# run
run : Application
	./Application

#suppression des .o
clean :
	rm -f *.o
cleanApp :
	rm -f Application
