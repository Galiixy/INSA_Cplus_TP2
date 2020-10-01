#regle explicite reliure
essai : Ensemble.o TEnsemble.o
	echo "reliure"
	g++ -o essai Ensemble.o TEnsemble.o

#regle explicite compilation Ensemble
Ensemble.o : Ensemble.h Ensemble.cpp
	echo "compilation ensemble"	
	g++ -c Ensemble.cpp 

#regle explicite compilation TEnsemble
TEnsemble.o : TEnsemble.h TEnsemble.cpp
	echo "compilation TEnsemble"
	g++ -c TEnsemble.cpp 

# run 
run : essai
	./essai

#suppression des .o
clean :
	rm -f *.o
