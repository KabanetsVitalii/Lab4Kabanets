#ifndef FUZZYNUMBER_H
#define FUZZYNUMBER_H
#include <string>
#include <iostream>

class FuzzyNumber {
private:
    double x;  
    double el; 
    double er; 
public:
    // Конструктори
    FuzzyNumber();
    FuzzyNumber(double x_val, double el_val, double er_val);
    FuzzyNumber(const FuzzyNumber& other);
    // гетери та сеери
    double getX() const { return x; }
    double getEl() const { return el; }
    double getEr() const { return er; }
    void setX(double value) { x = value; }
    void setEl(double value) { el = value; }
    void setEr(double value) { er = value; }
    
    bool Init(double x_val, double el_val, double er_val);
    void Read();
    void Display() const;
    std::string toString() const;
    //  Перевантаження
    FuzzyNumber operator+(const FuzzyNumber& B) const;
    FuzzyNumber operator-(const FuzzyNumber& B) const;
    FuzzyNumber operator*(const FuzzyNumber& B) const;
    FuzzyNumber operator/(const FuzzyNumber& B) const;
  
    FuzzyNumber inverse() const;
    // --- Перевантаження потоків
    friend std::ostream& operator<<(std::ostream& out, const FuzzyNumber& A);
    friend std::istream& operator>>(std::istream& in, FuzzyNumber& A);
};
#endif 
