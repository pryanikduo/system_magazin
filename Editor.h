#ifndef EDITOR_H
#define EDITOR_H

#include <string>
#include "Article.h"

using namespace std;

class Editor {
private:
    string nameE;
    string emailE;

public:
    Editor(const string& name, const string& email);
    
    string getName() const;
    string getEmail() const;
    
    Article changeState(Article& article, const string& newStatus);
    Article createArticle(int id, const string& title, Journalist* author);
};

#endif 