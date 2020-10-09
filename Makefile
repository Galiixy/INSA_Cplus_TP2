GCC = g++
EXE = Application
CCFLAGS = -ansi -pedantic -Wall -std=c++11  -g
# MAP = -DMAP
#regle explicite reliure
Application : Appli.o Catalogue.o Collection.o TrajetCompose.o TrajetSimple.o Trajet.o
	echo "Edition de liens"
	$(GCC) -o $(EXE) Appli.o Catalogue.o Collection.o Trajet.o TrajetSimple.o TrajetCompose.o  $(CCFLAGS)

# règle explicite de compilation de Appli
Appli.o : Appli.h Trajet.h Collection.h TrajetCompose.h Catalogue.h TrajetSimple.h Appli.cpp
	echo "Compilation Appli.o"
	$(GCC) -c Appli.cpp  $(CCFLAGS) $(MAP)

# règle explicite de compilation de Collection
Collection.o : Trajet.h Collection.h Collection.cpp
	echo "compilation Collection.o"
	$(GCC) -c Collection.cpp  $(CCFLAGS) $(MAP)

#regle explicite de compilation de Catalogue
Catalogue.o : Collection.h  Catalogue.h Catalogue.cpp
	echo "compilation Catalogue.o"
	$(GCC) -c Catalogue.cpp  $(CCFLAGS) $(MAP)

# règle explicite de compilation de TrajetCompose
TrajetCompose.o : Trajet.h Collection.h TrajetCompose.h TrajetCompose.cpp
	echo "compilation TrajetCompose.o"
	$(GCC) -c TrajetCompose.cpp  $(CCFLAGS)  $(MAP)

# règle explicite de compilation de Trajet
Trajet.o : Trajet.h Trajet.cpp
	echo "compilation Trajet.o"
	$(GCC) -c Trajet.cpp  $(CCFLAGS) $(MAP)

# règle explicite de compilation de TrajetSimple
TrajetSimple.o : Trajet.h Collection.h TrajetSimple.h TrajetSimple.cpp
	echo "compilation TrajetSimple.o"
	$(GCC) -c TrajetSimple.cpp  $(CCFLAGS) $(MAP)

# run
run : $(EXE)
	./$(EXE)

#suppression des .o
clean :
	rm -f *.o
cleanApp :
	rm -f $(EXE)
valgrind :
	valgrind --leak-check=full --show-leak-kinds=all  --track-origins=yes  ./$(EXE)
