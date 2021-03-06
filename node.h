/*
 * Making this a class instead of a struct.
 * TODO: Destructors
*/

#include <string>

template<class T>
class Node
{
public:
	Node(Node* north, Node* east, Node* south, Node* west, T data) :
		_north(north), _east(east), _south(south), _west(west), _data(data)
	{ }
	T getData() const
	{
		return _data;
	}
	void setData(const T& data)
	{
		_data = data;
	}
	Node<T>* getNorth() const
	{
		return _north;
	}
	void setNorth(Node* node)
	{
		_north = node;
		// this condition prevents infinite loops
		if (!_north->getSouth())
			_north->setSouth(this);
	}
	Node<T>* getEast() const
	{
		return _east;
	}
	void setEast(Node* node)
	{
		_east = node;
		// this condition prevents infinite loops
		if (!_east->getWest())
			_east->setWest(this);
	}
	Node<T>* getSouth() const
	{
		return _south;
	}
	void setSouth(Node* node)
	{
		_south = node;
		// this condition prevents infinite loops
		if (!_south->getNorth())
			_south->setNorth(this);
	}
	Node<T>* getWest() const
	{
		return _west;
	}
	void setWest(Node* node)
	{
		_west = node;
		// this condition prevents infinite loops
		if (!_west->getEast())
			_west->setEast(this);
	}
	std::string getDescription() const
	{
		return "You are in a room with the a '" + std::to_string(getData()) + "' scratched into the floor.";
	}
	std::string getDirections() const
	{
		return "Would you like to go:" +
			// if not null then direction else blank string
			std::string(getNorth() ? "\n\tNorth(n)" : "") +
			std::string(getEast() ? "\n\tEast(e)" : "") +
			std::string(getSouth() ? "\n\tSouth(s)" : "") +
			std::string(getWest() ? "\n\tWest(w)" : "");
	}
	bool tryMove(Node*& currentLoc, Node* newLoc)
	{
		// if newLoc is not null
		if (newLoc)
		{
			currentLoc = newLoc;
			return true;
		}
		else
			return false;		
	}
	// if direction is valid move location to 
	// desired location and return true
	// otherwise return false
	bool tryMove(char direction, Node*& location)
	{
		switch (direction)
		{
			case 'N':
			case 'n':
				return tryMove(location, getNorth());
			case 'E':
			case 'e':
				return tryMove(location, getEast());
			case 'S':
			case 's':
				return tryMove(location, getSouth());
			case 'W':
			case 'w':
				return tryMove(location, getWest());
			default:
				return false;
		}
	}
private:
	T _data;
	Node* _north;
	Node* _east;
	Node* _south;
	Node* _west;
};

// partial template specialization for type char
// this is needed as Node<char> will output integer
// value of char instead of a char
template<>
std::string Node<char>::getDescription() const
{
	return "You are in a cell with the a '" + std::string(1, getData()) + "' scratched into the floor.";
}