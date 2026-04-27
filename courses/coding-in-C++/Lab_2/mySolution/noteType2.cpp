#include <string>
#include <iostream>

class Note
{
    private:
        std::string* text;
    
    public:
        Note(std::string input_text);
        ~Note();
        void display();
};