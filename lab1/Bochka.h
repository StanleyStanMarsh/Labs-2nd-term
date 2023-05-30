class Bochka {
    int volume;
    double concentration;
public:
    // Default constructor
    Bochka();

    // Constructor with specified parameters
    Bochka(int volume, int concentration);

    double GetConcentration();

    void Pereliv(Bochka& other, int mug_volume);
};

