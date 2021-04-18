.DEFAULT: all

all: password-generator-cli

password-generator-cli: password.o
	g++ -o build/password-generator-cli build/out/random.o build/out/password.o src/password-generator-cli.cpp

password.o: random.o
	g++ -c -o build/out/password.o lib/password.cpp

random.o:
	g++ -c -o build/out/random.o lib/random.cpp

clean:
	rm build/out/*
	rm build/password-generator-cli