#ifndef _MSC_VER // [
#error "Use this header only with Microsoft Visual C++ compilers!"
#endif // _MSC_VER ]

#ifndef _MSC_STDBOOL_H_ // [
#define _MSC_STDBOOL_H_

#if _MSC_VER > 1000
#pragma once
#endif

#ifndef __cplusplus
#define false 0
#define true 1
#define bool int
#endif

#endif // _MSC_STDBOOL_H_ ]
