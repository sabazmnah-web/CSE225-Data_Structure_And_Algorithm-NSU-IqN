#ifndef DYNARR_H
#define DYNARR_H
template <class T>
class dynArr{
private:
    T *data;
    int size;
public:
    dynArr();
    dynArr(int);
    ~dynArr();
    void allocate(int);
    void setValue(int, T);
    T getValue(int);
};
#endif // DYNARR_H
