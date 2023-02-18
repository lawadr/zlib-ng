#include "../../zbuild.h"
#include "s390_features.h"

#ifdef HAVE_SYS_AUXV_H
#  include <sys/auxv.h>
#endif

void Z_INTERNAL s390_check_features(struct s390_cpu_features *features) {
    features->has_vx = getauxval(AT_HWCAP) & HWCAP_S390_VX;
}
