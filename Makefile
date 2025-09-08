all:
	c++ -Wall -Wextra -I ./include ./src/* -o parser_app

clean:
	rm parser_app
