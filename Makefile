PATH = ping
FLAGS = -Wall -Wextra -Werror -pedantic -std=gnu99
PATHPLUS = main
FLAGSPLUS = -Wall -std=c++20

run:$(PATH).c
	gcc $(PATH).c -o $(PATH) $(FLAGS)
runplus:$(PATHPLUS).cpp
	g++ $(PATHPLUS).cpp -o $(PATHPLUS) $(FLAGSPLUS)

clean:$(PATH)
	rm -f $(PATH)
clean+:$(PATHPLUS)
	rm -f $(PATHPLUS)

 
