
#include "node.h"

template <class T>
Node<T>::Node(Node* north, Node* east, Node* south, Node* west, T data) :
	_north(north), _east(east), _south(south), _west(west), _data(data)
{ }
template<class T>
T Node<T>::getData() const
{
	return _data;
}
template<class T>
void Node<T>::setData(const T& data)
{
	_data = data;
}
template<class T>
Node<T>* Node<T>::getNorth() const
{
	return _north;
}
template<class T>
void Node<T>::setNorth(Node* node)
{
	_north = node;
}
template<class T>
Node<T>* Node<T>::getEast() const
{
	return _east;
}
template<class T>
void Node<T>::setEast(Node* node)
{
	_east = node;
}
template<class T>
Node<T>* Node<T>::getSouth() const
{
	return _south;
}
template<class T>
void Node<T>::setSouth(Node* node)
{
	_south = node;
}
template<class T>
Node<T>* Node<T>::getWest() const
{
	return _west;
}
template<class T>
void Node<T>::setWest(Node* node)
{
	_west = node;
}