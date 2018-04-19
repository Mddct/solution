#ifndef __COMPLEX__
#define __COMPLEX__
class complex{
    public:
    complex(double r, double i)
    :re(r), im(i){}
    double real() const{
        return re;
    }
    double imgea() const{
        return im;
    }
    complex& operator += (complex& );
    private:
    double re, im;
    friend complex& __doapl(complex* , const complex &);
};

#endif