/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xa0883be4 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "//lions.tcnj.edu/Public/HomeST/sieberb1/363-ComputerEngineeringLab1/Lab5/Modules.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};



static void Initial_326_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(326, ng0);

LAB2:    xsi_set_current_line(327, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);
    xsi_set_current_line(328, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 17, 0LL);
    xsi_set_current_line(329, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 16, 0LL);
    xsi_set_current_line(330, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);

LAB1:    return;
}

static void Always_334_1(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;

LAB0:    t1 = (t0 + 3576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(334, ng0);
    t2 = (t0 + 3896);
    *((int *)t2) = 1;
    t3 = (t0 + 3608);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(334, ng0);

LAB5:    xsi_set_current_line(335, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 32);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 32);
    if (t6 == 1)
        goto LAB13;

LAB14:
LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(336, ng0);

LAB16:    xsi_set_current_line(337, ng0);
    t8 = (t0 + 1048U);
    t9 = *((char **)t8);
    memset(t7, 0, 8);
    t8 = (t7 + 4);
    t10 = (t9 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (~(t11));
    *((unsigned int *)t7) = t12;
    *((unsigned int *)t8) = 0;
    if (*((unsigned int *)t10) != 0)
        goto LAB18;

LAB17:    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 65535U);
    t18 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t18 & 65535U);
    t19 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t19, t7, 0, 0, 16, 0LL);
    goto LAB15;

LAB9:    xsi_set_current_line(339, ng0);

LAB19:    xsi_set_current_line(340, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t8 = *((char **)t3);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 17, t4, 16, t8, 16);
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t7, 0, 0, 16);
    t9 = (t0 + 2408);
    xsi_vlogvar_assign_value(t9, t7, 16, 0, 1);
    goto LAB15;

LAB11:    xsi_set_current_line(342, ng0);

LAB20:    xsi_set_current_line(343, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 32, t4, 16, t3, 32);
    t8 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 16, 0LL);
    goto LAB15;

LAB13:    xsi_set_current_line(345, ng0);

LAB21:    xsi_set_current_line(346, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 16, 0LL);
    goto LAB15;

LAB18:    t13 = *((unsigned int *)t7);
    t14 = *((unsigned int *)t10);
    *((unsigned int *)t7) = (t13 | t14);
    t15 = *((unsigned int *)t8);
    t16 = *((unsigned int *)t10);
    *((unsigned int *)t8) = (t15 | t16);
    goto LAB17;

}


extern void work_m_00000000001555117964_0886308060_init()
{
	static char *pe[] = {(void *)Initial_326_0,(void *)Always_334_1};
	xsi_register_didat("work_m_00000000001555117964_0886308060", "isim/topmodule_isim_beh.exe.sim/work/m_00000000001555117964_0886308060.didat");
	xsi_register_executes(pe);
}
