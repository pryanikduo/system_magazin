#ifndef ARTICLE_H
#define ARTICLE_H

#include <string>

using namespace std;

class Journalist; 

class Article {
private:
    int id;
    string title;
    string status;
    string text;
    string layout;
    Journalist* author;

public:
    Article(int id, const string& title, Journalist* author);
    
    int getId() const;
    string getTitle() const;
    string getStatus() const;
    string getText() const;
    string getLayout() const;
    Journalist* getAuthor() const;
    
    void setStatus(const string& newStatus);
    void setText(const string& newText);
    void setLayout(const string& newLayout);
    
    string viewing() const;
};

#endif 