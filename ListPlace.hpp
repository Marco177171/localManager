#ifndef LISTPLACES_HPP
# define LISTPLACES_HPP
# include <iostream>
# include "Place.hpp"

class ListPlace {
	public:
		ListPlace();
		ListPlace(ListPlace const &source);
		~ListPlace();
		Place getListVoice(int index);
		float getListPrice(int index);
    private:
        Place _list[5];
};

#endif
