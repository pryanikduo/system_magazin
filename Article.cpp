#include "Article.h"
#include "Journalist.h"
#include <sstream>

using namespace std;

Article::Article(int id, const string& title, Journalist* author) 
    : id(id), title(title), status("Draft"), text(""), layout(""), author(author) {}

int Article::getId() const { return id; }
string Article::getTitle() const { return title; }
string Article::getStatus() const { return status; }
string Article::getText() const { return text; }
string Article::getLayout() const { return layout; }
Journalist* Article::getAuthor() const { return author; }

void Article::setStatus(const string& newStatus) { status = newStatus; }
void Article::setText(const string& newText) { text = newText; }
void Article::setLayout(const string& newLayout) { layout = newLayout; }