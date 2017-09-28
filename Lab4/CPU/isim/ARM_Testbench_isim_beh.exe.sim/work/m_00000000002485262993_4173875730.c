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
static const char *ng0 = "//lions.tcnj.edu/Public/HomeST/sieberb1/363-ComputerEngineeringLab1/Lab4/CPU/CPU_Test.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};



static void Cont_208_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 9728U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(208, ng0);
    t2 = (t0 + 8648);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 10640);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 10544);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_209_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 9976U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(209, ng0);
    t2 = (t0 + 8808);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 10704);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 10560);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Initial_211_2(char *t0)
{
    char t10[8];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;

LAB0:    t1 = (t0 + 10224U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(211, ng0);

LAB4:    xsi_set_current_line(212, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8648);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(213, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8808);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(214, ng0);

LAB5:    t2 = ((char*)((ng2)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t7 != 0);
    if (t8 > 0)
        goto LAB6;

LAB7:
LAB1:    return;
LAB6:    xsi_set_current_line(214, ng0);

LAB8:    xsi_set_current_line(215, ng0);
    t9 = (t0 + 10032);
    xsi_process_wait(t9, 1000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(216, ng0);
    t11 = (t0 + 8648);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memset(t10, 0, 8);
    t14 = (t13 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t13);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB13;

LAB11:    if (*((unsigned int *)t14) == 0)
        goto LAB10;

LAB12:    t20 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t20) = 1;

LAB13:    t21 = (t10 + 4);
    t22 = (t13 + 4);
    t23 = *((unsigned int *)t13);
    t24 = (~(t23));
    *((unsigned int *)t10) = t24;
    *((unsigned int *)t21) = 0;
    if (*((unsigned int *)t22) != 0)
        goto LAB15;

LAB14:    t29 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t29 & 1U);
    t30 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t30 & 1U);
    t31 = (t0 + 8648);
    xsi_vlogvar_assign_value(t31, t10, 0, 0, 1);
    xsi_set_current_line(217, ng0);
    t2 = (t0 + 8808);
    t3 = (t2 + 56U);
    t9 = *((char **)t3);
    memset(t10, 0, 8);
    t11 = (t9 + 4);
    t4 = *((unsigned int *)t11);
    t5 = (~(t4));
    t6 = *((unsigned int *)t9);
    t7 = (t6 & t5);
    t8 = (t7 & 1U);
    if (t8 != 0)
        goto LAB19;

LAB17:    if (*((unsigned int *)t11) == 0)
        goto LAB16;

LAB18:    t12 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t12) = 1;

LAB19:    t13 = (t10 + 4);
    t14 = (t9 + 4);
    t15 = *((unsigned int *)t9);
    t16 = (~(t15));
    *((unsigned int *)t10) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB21;

LAB20:    t24 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t24 & 1U);
    t25 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t25 & 1U);
    t20 = (t0 + 8808);
    xsi_vlogvar_assign_value(t20, t10, 0, 0, 1);
    goto LAB5;

LAB10:    *((unsigned int *)t10) = 1;
    goto LAB13;

LAB15:    t25 = *((unsigned int *)t10);
    t26 = *((unsigned int *)t22);
    *((unsigned int *)t10) = (t25 | t26);
    t27 = *((unsigned int *)t21);
    t28 = *((unsigned int *)t22);
    *((unsigned int *)t21) = (t27 | t28);
    goto LAB14;

LAB16:    *((unsigned int *)t10) = 1;
    goto LAB19;

LAB21:    t17 = *((unsigned int *)t10);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t10) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t23);
    goto LAB20;

}


extern void work_m_00000000002485262993_4173875730_init()
{
	static char *pe[] = {(void *)Cont_208_0,(void *)Cont_209_1,(void *)Initial_211_2};
	xsi_register_didat("work_m_00000000002485262993_4173875730", "isim/ARM_Testbench_isim_beh.exe.sim/work/m_00000000002485262993_4173875730.didat");
	xsi_register_executes(pe);
}
