//Declare class in hpp file.
class SomeClass
{
public:
    SomeClass();
    int var() const;

private:
    void DoSmth();
    int var_ = 0;
};

// Define all methods.
// in cpp file
SomeClass::SomeClass() {} // This is a constructor
int SomeClass::var() const { return var_; }
void SomeClass::DoSmth() {}