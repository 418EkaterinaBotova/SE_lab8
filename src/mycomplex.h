 //Имя подключаемого фвйла "mycomplex.h"
 //Заголовочный файл "комплексное число"
#ifndef _MY_COMPLEX_H_
#define _MY_COMPLEX_H_

using namespace std;
// Класс комплексного числа
class Complex

{
    //действительная составляющая
   double Re;
   // Мнимая составляющая
   double Im;

   public:

   Complex (double aRe = 0, double aIm = 0);
   Complex (const Complex &);
  ~Complex ( );

   void Set(double aRe, double aIm = 0);
   operator double();
   double abs();

   friend istream & operator >> (istream &, Complex &);
   friend ostream & operator << (ostream &, Complex &);

   Complex operator + (const Complex &);
   Complex operator - (const Complex &);
   Complex operator + (const double &);

   friend Complex operator + (const double &, const Complex &);
   Complex operator - (const double &);
   friend Complex operator - (const double &, const Complex &);
   Complex operator * (const Complex &);
   Complex operator * (const double &);
   friend Complex operator * (const double &, const Complex &);
   Complex operator / (const double &);

   Complex & operator + = (const Complex &);
   Complex & operator - = (const Complex &);
   Complex & operator * = (const Complex &);
   Complex & operator + = (const double &);
   Complex & operator - = (const double &);
   Complex & operator * = (const double &);
   Complex & operator / = (const double &);
   Complex & operator = (const Complex &);
   Complex & operator = (const double &);
   };
#endif
