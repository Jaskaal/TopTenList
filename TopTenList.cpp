//Manages a list of top ten hyperlinks
#include <string>
#include "TopTenList.h"
#include "Hyperlink.h"

#include <iostream>

using std::string;
using std::cout;
using std::endl;


TopTenList::TopTenList() {
	// resize
	_list.resize(10);
}

void TopTenList::display_forward() {
	// std FL
	for(int i = 0; i < (int)_list.size(); i++) {
		Hyperlink item = _list[i];

		// See "Hyperlink.h" for member var details
		cout << i + 1 << ": " <<  item.text << " " << item.url << endl;
	}
}

void TopTenList::display_backward() {
	// std reverse FL
	for(int i = (int)_list.size(); i >= 0; i--) {
		Hyperlink item = _list[i];
		
		// see "Hyperlink.h" for member var details
		cout << i + 1 << ": " <<  item.text << " " << item.url << endl;
	}
}

void TopTenList::set_at(int index, Hyperlink link) {
	// access and set item at index
	_list.at(index-1) = link;
}

Hyperlink TopTenList::get(int index) {
	// access and return value of item at index
	return _list.at(index-1);
}
