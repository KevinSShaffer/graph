
#include <iostream>
#include <string>
#include "node.h"

template<class T>
void startGame(Node<T>* start, Node<T>* finish)
{
	Node<T>* location = start;

	while (location != finish)
	{
		std::cout << location->getDescription() << std::endl;
		std::cout << location->getDirections() << std::endl;

		char input;
		do
		{
			std::cout << "Which direction would you like to go?" << std::endl;
		} while (!(std::cin >> input) || !location->tryMove(input, location));
	}
}

int main()
{
	// create nodes
	Node<char>* A = new Node<char>(NULL, NULL, NULL, NULL, 'A');
	Node<char>* B = new Node<char>(NULL, NULL, NULL, NULL, 'B');
	Node<char>* C = new Node<char>(NULL, NULL, NULL, NULL, 'C');
	Node<char>* D = new Node<char>(NULL, NULL, NULL, NULL, 'D');
	Node<char>* E = new Node<char>(NULL, NULL, NULL, NULL, 'E');
	Node<char>* F = new Node<char>(NULL, NULL, NULL, NULL, 'F');
	Node<char>* G = new Node<char>(NULL, NULL, NULL, NULL, 'G');
	Node<char>* H = new Node<char>(NULL, NULL, NULL, NULL, 'H');
	Node<char>* I = new Node<char>(NULL, NULL, NULL, NULL, 'I');
	Node<char>* J = new Node<char>(NULL, NULL, NULL, NULL, 'J');
	Node<char>* K = new Node<char>(NULL, NULL, NULL, NULL, 'K');
	Node<char>* L = new Node<char>(NULL, NULL, NULL, NULL, 'L');

	// assign relationships
	A->setEast(B);
	B->setSouth(F);
	F->setEast(G);
	G->setNorth(C);
	G->setEast(H);

	startGame(A, L);

	std::cout << "Press ctrl + z (ctrl + c) to quit." << std::endl;
	while (std::cin) { }

	return 0;
}

