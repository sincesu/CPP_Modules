#include <iostream>
#include "Fixed.hpp"

//int main( void )
//{
//	Fixed a;
//	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
//	std::cout << a << std::endl;
//	std::cout << ++a << std::endl;
//	std::cout << a << std::endl;
//	std::cout << a++ << std::endl;
//	std::cout << a << std::endl;
//	std::cout << b << std::endl;
//	std::cout << Fixed::max( a, b ) << std::endl;
//}


#include <iostream>
#include "Fixed.hpp"

int main(void) {
    // -------------------------------------------------------
    // BÖLÜM 1: SUBJECT (PDF) TESTİ
    // Burası projenin geçmesi için zorunlu olan kısımdır.
    // -------------------------------------------------------
    std::cout << "--- SUBJECT TEST ---" << std::endl;
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    std::cout << b << std::endl;

    std::cout << Fixed::max(a, b) << std::endl;

    // -------------------------------------------------------
    // BÖLÜM 2: DETAYLI OPERATÖR TESTLERİ
    // Subject testinin kapsamadığı diğer her şeyi burada deniyoruz.
    // -------------------------------------------------------
    std::cout << "\n--- DETAYLI TESTLER ---" << std::endl;
    
    Fixed x(10);
    Fixed y(2.5f);
    Fixed z(10); // Eşitlik testleri için

    // Aritmetik Operatörler
    std::cout << "x (10) + y (2.5) = " << (x + y) << std::endl;
    std::cout << "x (10) - y (2.5) = " << (x - y) << std::endl;
    std::cout << "x (10) * y (2.5) = " << (x * y) << std::endl;
    std::cout << "x (10) / y (2.5) = " << (x / y) << std::endl;

    // Karşılaştırma Operatörleri (1: True, 0: False)
    std::cout << "\n--- KARSILASTIRMA (1=True, 0=False) ---" << std::endl;
    std::cout << "x > y  : " << (x > y) << std::endl;
    std::cout << "x < y  : " << (x < y) << std::endl;
    std::cout << "x >= z : " << (x >= z) << std::endl;
    std::cout << "x <= y : " << (x <= y) << std::endl;
    std::cout << "x == z : " << (x == z) << std::endl;
    std::cout << "x != y : " << (x != y) << std::endl;

    // Min / Max Testleri
    std::cout << "\n--- MIN / MAX ---" << std::endl;
    std::cout << "Min(x, y): " << Fixed::min(x, y) << std::endl;
    
    // Const Nesnelerle Test
    const Fixed c1(100);
    const Fixed c2(200);
    std::cout << "Max(c1, c2) (Const): " << Fixed::max(c1, c2) << std::endl;

    return 0;
}