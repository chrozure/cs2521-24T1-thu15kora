typedef struct set *Set;

// Creates a new empty set
Set SetNew();

// Adds a vertex to the given set
void SetAdd(Set s, Vertex v);

// Removes a vertex from the given set
void SetRemove(Set s, Vertex v);

// Frees memory allocated to a set
void SetFree(Set s);
