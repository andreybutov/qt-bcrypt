# qt-bcrypt
Password-hashing with bcrypt for Qt/C++.

## Summary
**QtBCrypt** allows you to hash your passwords (or, any string, really), using the **bcrypt** password-hashing algorithm. This is a C++ class meant to be used in Qt projects. However, very little of it is Qt-dependent, so it can be adapted for general C/C++ use with minimal effort.

## bcrypt implementation
The core bcrypt implementation is provided by [Openwall](https://www.openwall.com/crypt/). The **QtBCrypt** class acts as a user-friendly wrapper.

## Installation
Add the **QtBCrypt.h** and **QtBCrypt.cpp** files to your project. Also add the **openwall_crypt/** directory and its contents to your project. Make sure your .pro file has entries to compile the newly added files.

## Usage
```C++
#include "qtbcrypt.h"

QString salt = QtBCrypt::generateSalt();
QString hashedPassword = QtBCrypt::hashPassword("the-password", salt);
```

## Environment
This code has been tested on Win32 and Win64 with MinGW and MSVC2019. It has also been tested under Clang on Mac and gcc on Linux 32 and 64. 


## License
AFAIK, the Openwall code does not have a license and can be used freely. This project is under the MIT license.

---
* [andreybutov.com](https://andreybutov.com)
* andreybutov@antair.com
* [https://twitter.com/andrey_butov](https://twitter.com/andrey_butov)

