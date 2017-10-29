/*
 * Making this a class instead of a struct.
*/


template <class T>
class Node
{
public:
	Node(Node*, Node*, Node*, Node*, T);
	T getData() const;
	void setData(const T&);
	Node* getNorth() const;
	void setNorth(Node*);
	Node* getEast() const;
	void setEast(Node*);
	Node* getSouth() const;
	void setSouth(Node*);
	Node* getWest() const;
	void setWest(Node*);
private:
	T _data;
	Node *_north;
	Node *_east;
	Node *_south;
	Node *_west;
};