#ifndef RECENTITEMS_H
#define RECENTITEMS_H

#include "gallerymanager.h"
#include <vector>
#include <string>
using namespace std;

class RecentItems : public GalleryManager {
public:
    vector<string> recent;
    void accessItem(string name);
    void displayRecent();
};

#endif
