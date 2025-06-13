#ifndef DESIGNER_H
#define DESIGNER_H

#include <string>
#include "Article.h"

using namespace std;

class Designer {
private:
    string nameD;
    string emailD;

public:
    Designer(const string& name, const string& email);
    
    string getName() const;
    string getEmail() const;
    
    Article createLayout(Article& article, const string& layout);
    Article editLayout(Article& article, const string& newLayout);
};

#endif 