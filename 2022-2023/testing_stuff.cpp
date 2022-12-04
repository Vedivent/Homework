class СBook{

public: char Name[30];

int Pages;

char *getName() { // метод по умолчанию inline, так

return Name; // как его тело описано в классе

}

int getPages(); // тело будет описано в book.сpp

};

void main()

{ СBook A = {"J.London. V.1",366};

СBook C[]= {{"J.London. V.3",367},

{"J.London. V.4",321},

{"J.London. V.5",356}};

... }
