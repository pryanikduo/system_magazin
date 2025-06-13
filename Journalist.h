#ifndef JOURNALIST_H
#define JOURNALIST_H

#include <string>
#include "Article.h"

using namespace std;

class Journalist {
private:
    string nameJ;
    string emailJ;

public:
    Journalist(const string& name, const string& email);
    
    string getName() const;
    string getEmail() const;
    
    Article editArticle(Article& article, const string& newText);
    void sendForCheck(Article& article);
};

#endif 