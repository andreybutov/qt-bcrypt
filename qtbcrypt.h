// ----------------------------------------------------------------------------
// QtBCrypt
//
// https://github.com/andreybutov/qt-bcrypt
//
// Andrey Butov
// andreybutov@antair.com
//
// ----------------------------------------------------------------------------



#ifndef __QT_BCRYPT_H__
#define __QT_BCRYPT_H__



#include <QString>



class QtBCrypt
{
public:
    static QString generateSalt();
    static QString hashPassword(const QString& password, const QString& salt);

private:
    static void generateRandomBytes(char* outBuffer, int bufferSize);
};



#endif // __QT_BCRYPT_H__
