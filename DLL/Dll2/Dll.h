#ifdef Dll_EXPORTS
#define Dll_API __declspec(dllexport) 
#else
#define Dll_API __declspec(dllimport) 
#endif

void __declspec(dllexport) func();

class __declspec(dllexport) Animal {
    char* name;
public:
    Animal() {
        name = new char[50];
        std::cout << "Animal";
    }
    virtual ~Animal() {
        delete name;
        std::cout << "~Animal";
    }
    virtual void say() = 0;
};

class __declspec(dllexport) Cat : public Animal {
public:
    Cat() {
        std::cout << "Cat";
        color = new char[50];
    }

    ~Cat() {
        delete color;
        std::cout << "~Cat";
    }

    virtual void say() {
        std::cout << "meow";
    }
protected:
    char* color;
};