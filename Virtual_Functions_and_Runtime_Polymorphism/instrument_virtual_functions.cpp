#include <iostream>
using namespace std;

class Instrument
{
    public:

    virtual void play ()
    {
        cout << "Sound" << endl;
    }
};
class Piano : public Instrument
{
    public:
    void play ()
    {
        cout << "tun tun" << endl;
    }
};
class Guitar : public Instrument
{
    public:
    void play ()
    {
        cout << "glin glin" << endl;
    }
};
class Drums : public Instrument
{
    public:
    void play ()
    {
        cout << "dum dum" << endl;
    }
};

int main ()
{
    Instrument *i[3];
    Piano objP;
    Guitar objG;
    Drums objD;

    i[0] = &objP;
    i[1] = &objG;
    i[2] = &objD;

    i[0]->play ();
    i[1]->play ();
    i[2]->play ();
    return 0;
}
