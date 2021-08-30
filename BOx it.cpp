class Box {
  public:
    int length = 0;
    int breadth = 0;
    int height = 0;;

    Box() {
        BoxesCreated++;
    }

    Box(int l, int b, int h) {
        length = l;
        breadth = b;
        height = h;
        BoxesCreated++;
    }

    Box(Box& b) {
        length = b.length;
        breadth = b.breadth;
        height = b.height;
        BoxesCreated++;
    }

    ~Box() {
        BoxesDestroyed++;
    }

    int getLength() {
        return this->length;
    }

    int getBreadth() {
        return this->breadth;
    }

    int getHeight() {
        return this->height;
    }

    long long CalculateVolume() {
        return (long long)length * breadth * height;
    }

    bool operator<(Box &b) {
        if(this->length != b.length) return this->length < b.length;
        if(this->breadth != b.breadth) return this->breadth < b.breadth;
        return this->height < b.height;
    }

};

ostream& operator<<(ostream& out, const Box b) {
    out << b.length << " " << b.breadth << " " << b.height;
    return out;
}
