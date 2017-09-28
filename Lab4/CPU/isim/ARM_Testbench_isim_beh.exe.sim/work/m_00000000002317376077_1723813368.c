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
static const char *ng0 = "//lions.tcnj.edu/Public/HomeST/sieberb1/363-ComputerEngineeringLab1/Lab4/CPU/CPU_Modules.v";
static int ng1[] = {0, 0, 0, 0};
static int ng2[] = {0, 0};
static int ng3[] = {32, 0};
static int ng4[] = {1, 0};
static int ng5[] = {100, 0, 0, 0};
static const char *ng6 = "Writing %d to %d";



static void Initial_668_0(char *t0)
{
    char t5[8];
    char t14[8];
    char t15[8];
    char t36[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    int t35;
    char *t37;
    char *t38;
    char *t39;

LAB0:    xsi_set_current_line(668, ng0);

LAB2:    xsi_set_current_line(669, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 64);
    xsi_set_current_line(670, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2408);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 64);
    xsi_set_current_line(671, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2728);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(672, ng0);
    xsi_set_current_line(672, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 2888);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng3)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:    xsi_set_current_line(676, ng0);
    xsi_set_current_line(676, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB9:    t1 = (t0 + 2888);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng3)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB10;

LAB11:
LAB1:    return;
LAB4:    xsi_set_current_line(672, ng0);

LAB6:    xsi_set_current_line(673, ng0);
    t12 = ((char*)((ng1)));
    t13 = (t0 + 2568);
    t16 = (t0 + 2568);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 2568);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 2888);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_array_indices(t14, t15, t18, t21, 2, 1, t24, 32, 1);
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(672, ng0);
    t1 = (t0 + 2888);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng4)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 2888);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB7:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t13, t12, 0, *((unsigned int *)t15), t35);
    goto LAB8;

LAB10:    xsi_set_current_line(676, ng0);

LAB12:    xsi_set_current_line(677, ng0);
    t12 = (t0 + 2888);
    t13 = (t12 + 56U);
    t16 = *((char **)t13);
    t17 = ((char*)((ng5)));
    xsi_vlog_signed_multiply(t36, 64, t16, 32, t17, 32);
    t18 = (t0 + 2568);
    t19 = (t0 + 2568);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = (t0 + 2568);
    t23 = (t22 + 64U);
    t24 = *((char **)t23);
    t25 = (t0 + 2888);
    t28 = (t25 + 56U);
    t37 = *((char **)t28);
    xsi_vlog_generic_convert_array_indices(t14, t15, t21, t24, 2, 1, t37, 32, 1);
    t38 = (t14 + 4);
    t26 = *((unsigned int *)t38);
    t27 = (!(t26));
    t39 = (t15 + 4);
    t29 = *((unsigned int *)t39);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB13;

LAB14:    xsi_set_current_line(676, ng0);
    t1 = (t0 + 2888);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng4)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 2888);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB9;

LAB13:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t18, t36, 0, *((unsigned int *)t15), t35);
    goto LAB14;

}

static void Always_680_1(char *t0)
{
    char t7[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    t1 = (t0 + 4056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(680, ng0);
    t2 = (t0 + 4624);
    *((int *)t2) = 1;
    t3 = (t0 + 4088);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(680, ng0);

LAB5:    xsi_set_current_line(681, ng0);
    t4 = (t0 + 2568);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t0 + 2568);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 2568);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = (t0 + 1208U);
    t15 = *((char **)t14);
    xsi_vlog_generic_get_array_select_value(t7, 64, t6, t10, t13, 2, 1, t15, 5, 2);
    t14 = (t0 + 2248);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 64);
    xsi_set_current_line(682, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2568);
    t6 = (t5 + 72U);
    t8 = *((char **)t6);
    t9 = (t0 + 2568);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 1368U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t7, 64, t4, t8, t11, 2, 1, t13, 5, 2);
    t12 = (t0 + 2408);
    xsi_vlogvar_assign_value(t12, t7, 0, 0, 64);
    goto LAB2;

}

static void Always_684_2(char *t0)
{
    char t6[8];
    char t7[8];
    char t26[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    int t17;
    char *t18;
    unsigned int t19;
    int t20;
    int t21;
    unsigned int t22;
    unsigned int t23;
    int t24;
    int t25;
    char *t27;
    char *t28;

LAB0:    t1 = (t0 + 4304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(684, ng0);
    t2 = (t0 + 4640);
    *((int *)t2) = 1;
    t3 = (t0 + 4336);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(684, ng0);

LAB5:    xsi_set_current_line(685, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    memcpy(t6, t5, 8);
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t6, 0, 0, 32);
    xsi_set_current_line(686, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 2568);
    t4 = (t0 + 2568);
    t5 = (t4 + 72U);
    t8 = *((char **)t5);
    t9 = (t0 + 2568);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 2728);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    xsi_vlog_generic_convert_array_indices(t6, t7, t8, t11, 2, 1, t14, 32, 1);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t7 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(687, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2568);
    t8 = (t5 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 2568);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = (t0 + 2728);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    xsi_vlog_generic_get_array_select_value(t26, 64, t4, t9, t12, 2, 1, t15, 32, 1);
    t18 = (t0 + 2728);
    t27 = (t18 + 56U);
    t28 = *((char **)t27);
    xsi_vlogfile_write(1, 0, 0, ng6, 3, t0, (char)118, t26, 64, (char)119, t28, 32);
    goto LAB2;

LAB6:    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t2, t3, 0, *((unsigned int *)t7), t25);
    goto LAB7;

}


extern void work_m_00000000002317376077_1723813368_init()
{
	static char *pe[] = {(void *)Initial_668_0,(void *)Always_680_1,(void *)Always_684_2};
	xsi_register_didat("work_m_00000000002317376077_1723813368", "isim/ARM_Testbench_isim_beh.exe.sim/work/m_00000000002317376077_1723813368.didat");
	xsi_register_executes(pe);
}
