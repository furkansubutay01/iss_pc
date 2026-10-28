/* The inFAMOUS Second Son executables the eboot hooks are written for. The European CUSA00004 1.07
 * dump carries the same unwrapped ELF as the verified US CUSA00223 1.07 build (SHA-256
 * b3afd173a379f83e1e408e71fdef22b78f93092d332b79decd48a18a08bfc605, docs/CUSA00004_CAMERA.md), and
 * merged European dumps can keep APP_VER 01.00. Every hook still checks its own instruction
 * signatures: these metadata values alone never authorize a patch. */
#ifndef ISS_TITLE_H
#define ISS_TITLE_H
#include <string.h>

static inline int iss_title_1_07(const char *serial, const char *version) {
    if (!serial || !version) return 0;
    return (!strcmp(serial, "CUSA00223") && !strcmp(version, "01.07")) ||
           (!strcmp(serial, "CUSA00004") && (!strcmp(version, "01.07") || !strcmp(version, "01.00")));
}

#endif
