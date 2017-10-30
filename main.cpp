
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
	Node<char>* start = new Node<char>(NULL, NULL, NULL, NULL, 'A');
	start->setEast(new Node<char>(NULL, NULL, NULL, NULL, 'B'));

	std::cout << start->getData() << "---" << start->getEast()->getData() << std::endl;

	startGame(start, start->getEast());

	std::cout << "Press ctrl + z (ctrl + c) to quit." << std::endl;
	while (std::cin) { }

	return 0;
}

