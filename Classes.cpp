#ifndef __STRING__
#define __STRING__

class String{
    private: 
        //declare data members here
    public:
        //Constructors and Destructor
        String();   //default
        String(const char*); //parameterized 
        ~String(); //destructor

        unsigned int length();
        void reverse();
        void append(const char);
}

#endif