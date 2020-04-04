//Manages a list of top ten hyperlinks
#ifndef TOPTENLIST_H
#define TOPTENLIST_H
#include <string>
#include <vector>
#include <iostream>
#include "Hyperlink.h"
#include "IDirectionable.h"

using std::string;
using std::vector;
using std::cout;
using std::endl;

class TopTenList : public IDirectionable {
  private:
  	// vector for obj use
  	vector<Hyperlink> _list;
  
  public:
  	// constructor	
    TopTenList();
    
    // display funcs
    void display_forward();
    void display_backward();

    // setter & getter funcs
    void set_at(int index, Hyperlink link);
    Hyperlink get(int index);
};

#endif
