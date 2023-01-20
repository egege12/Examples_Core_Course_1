/*
 *
 *   Assignment Operators
 *   =	x = 5	x = 5
 *  +=	x += 3	x = x + 3
 *  -=	x -= 3	x = x - 3
 *  *=	x *= 3	x = x * 3
 *  /=	x /= 3	x = x / 3
 *  %=	x %= 3	x = x % 3
 *  &=	x &= 3	x = x & 3
 *  |=	x |= 3	x = x | 3
 *  ^=	x ^= 3	x = x ^ 3
 *  >>=	x >>= 3	x = x >> 3
 *  <<=	x <<= 3	x = x << 3
 *
 *
 *
 */


#include <QCoreApplication>
#include <QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    unsigned short value = 15;

     qInfo()<< " Step 0 " << value;

    value *= value;

    qInfo()<< " Step 1 mulitply" << value;

    value &= 225 ;

    qInfo()<< " Step 2 & with 10" << value;

    value %= 10 ;

    qInfo()<< " Step 3 modulo with 10" << value;

    return a.exec();
}
