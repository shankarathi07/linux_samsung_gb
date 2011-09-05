/* include/linux/bld.h */

#ifndef _LINUX_BLD_H
#define _LINUX_BLD_H

struct bld_implementation
{
    void (* enable)(void);
    void (* disable)(void);
};

void register_bld_implementation(struct bld_implementation * imp);
void touchkey_pressed(void);

#endif
