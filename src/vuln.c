#include "vuln.h"
#include <string.h>

int vuln_strcpy(const char *s) {
    char dst[16];            // <= 고정 크기
    strcpy(dst, s);          // <= 길이 체크 없음 (의도적 취약점)
    return (unsigned char)dst[0];
}
