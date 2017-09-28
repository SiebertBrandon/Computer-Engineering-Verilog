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
static int ng2[] = {1000, 0};
static int ng3[] = {10, 0, 0, 0};
static int ng4[] = {1, 0};
static const char *ng5 = "[MainMem] Reading from mem, Data = %d";
static const char *ng6 = "[MainMem] Writing to mem, Data = %d";
static const char *ng7 = "[MainMem] Forwarding Register Data, Data = %d";



static void Initial_276_0(char *t0)
{
    char t5[8];
    char t16[16];
    char t18[8];
    char t19[8];
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
    char *t14;
    char *t15;
    char *t17;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    int t31;
    char *t32;
    unsigned int t33;
    int t34;
    int t35;
    unsigned int t36;
    unsigned int t37;
    int t38;
    int t39;

LAB0:    xsi_set_current_line(276, ng0);

LAB2:    xsi_set_current_line(277, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2408);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(278, ng0);
    xsi_set_current_line(278, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2728);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 2728);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
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

LAB5:
LAB1:    return;
LAB4:    xsi_set_current_line(278, ng0);

LAB6:    xsi_set_current_line(279, ng0);
    t12 = (t0 + 2728);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng3)));
    xsi_vlog_signed_multiply(t16, 64, t14, 32, t15, 32);
    t17 = (t0 + 2568);
    t20 = (t0 + 2568);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t23 = (t0 + 2568);
    t24 = (t23 + 64U);
    t25 = *((char **)t24);
    t26 = (t0 + 2728);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    xsi_vlog_generic_convert_array_indices(t18, t19, t22, t25, 2, 1, t28, 32, 1);
    t29 = (t18 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (!(t30));
    t32 = (t19 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (!(t33));
    t35 = (t31 && t34);
    if (t35 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(278, ng0);
    t1 = (t0 + 2728);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng4)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 2728);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB7:    t36 = *((unsigned int *)t18);
    t37 = *((unsigned int *)t19);
    t38 = (t36 - t37);
    t39 = (t38 + 1);
    xsi_vlogvar_assign_value(t17, t16, 0, *((unsigned int *)t19), t39);
    goto LAB8;

}

static void Always_285_1(char *t0)
{
    char t14[16];
    char t23[8];
    char t32[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;

LAB0:    t1 = (t0 + 3896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(285, ng0);
    t2 = (t0 + 4216);
    *((int *)t2) = 1;
    t3 = (t0 + 3928);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(285, ng0);

LAB5:    xsi_set_current_line(286, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(292, ng0);

LAB16:    xsi_set_current_line(293, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(297, ng0);

LAB23:    xsi_set_current_line(298, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 64, 0LL);
    xsi_set_current_line(299, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 5, 0LL);
    xsi_set_current_line(300, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t23, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB27;

LAB25:    if (*((unsigned int *)t5) == 0)
        goto LAB24;

LAB26:    t11 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t11) = 1;

LAB27:    t12 = (t23 + 4);
    t13 = (t4 + 4);
    t24 = *((unsigned int *)t4);
    t25 = (~(t24));
    *((unsigned int *)t23) = t25;
    *((unsigned int *)t12) = 0;
    if (*((unsigned int *)t13) != 0)
        goto LAB29;

LAB28:    t30 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t30 & 1U);
    t31 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t31 & 1U);
    t15 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t15, t23, 0, 0, 1, 0LL);
    xsi_set_current_line(301, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng7, 2, t0, (char)118, t4, 64);

LAB19:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(286, ng0);

LAB9:    xsi_set_current_line(287, ng0);
    t11 = (t0 + 2568);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t15 = (t0 + 2568);
    t16 = (t15 + 72U);
    t17 = *((char **)t16);
    t18 = (t0 + 2568);
    t19 = (t18 + 64U);
    t20 = *((char **)t19);
    t21 = (t0 + 1048U);
    t22 = *((char **)t21);
    xsi_vlog_generic_get_array_select_value(t14, 64, t13, t17, t20, 2, 1, t22, 64, 2);
    t21 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t21, t14, 0, 0, 64, 0LL);
    xsi_set_current_line(288, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 5, 0LL);
    xsi_set_current_line(289, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t23, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB13;

LAB11:    if (*((unsigned int *)t5) == 0)
        goto LAB10;

LAB12:    t11 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t11) = 1;

LAB13:    t12 = (t23 + 4);
    t13 = (t4 + 4);
    t24 = *((unsigned int *)t4);
    t25 = (~(t24));
    *((unsigned int *)t23) = t25;
    *((unsigned int *)t12) = 0;
    if (*((unsigned int *)t13) != 0)
        goto LAB15;

LAB14:    t30 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t30 & 1U);
    t31 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t31 & 1U);
    t15 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t15, t23, 0, 0, 1, 0LL);
    xsi_set_current_line(290, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng5, 2, t0, (char)118, t4, 64);
    goto LAB8;

LAB10:    *((unsigned int *)t23) = 1;
    goto LAB13;

LAB15:    t26 = *((unsigned int *)t23);
    t27 = *((unsigned int *)t13);
    *((unsigned int *)t23) = (t26 | t27);
    t28 = *((unsigned int *)t12);
    t29 = *((unsigned int *)t13);
    *((unsigned int *)t12) = (t28 | t29);
    goto LAB14;

LAB17:    xsi_set_current_line(293, ng0);

LAB20:    xsi_set_current_line(294, ng0);
    t4 = (t0 + 2088);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = (t0 + 2568);
    t13 = (t0 + 2568);
    t15 = (t13 + 72U);
    t16 = *((char **)t15);
    t17 = (t0 + 2568);
    t18 = (t17 + 64U);
    t19 = *((char **)t18);
    t20 = (t0 + 1048U);
    t21 = *((char **)t20);
    xsi_vlog_generic_convert_array_indices(t23, t32, t16, t19, 2, 1, t21, 64, 2);
    t20 = (t23 + 4);
    t24 = *((unsigned int *)t20);
    t33 = (!(t24));
    t22 = (t32 + 4);
    t25 = *((unsigned int *)t22);
    t34 = (!(t25));
    t35 = (t33 && t34);
    if (t35 == 1)
        goto LAB21;

LAB22:    xsi_set_current_line(295, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng6, 2, t0, (char)118, t4, 64);
    goto LAB19;

LAB21:    t26 = *((unsigned int *)t23);
    t27 = *((unsigned int *)t32);
    t36 = (t26 - t27);
    t37 = (t36 + 1);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, *((unsigned int *)t32), t37, 0LL);
    goto LAB22;

LAB24:    *((unsigned int *)t23) = 1;
    goto LAB27;

LAB29:    t26 = *((unsigned int *)t23);
    t27 = *((unsigned int *)t13);
    *((unsigned int *)t23) = (t26 | t27);
    t28 = *((unsigned int *)t12);
    t29 = *((unsigned int *)t13);
    *((unsigned int *)t12) = (t28 | t29);
    goto LAB28;

}


extern void work_m_00000000003542184589_2135987638_init()
{
	static char *pe[] = {(void *)Initial_276_0,(void *)Always_285_1};
	xsi_register_didat("work_m_00000000003542184589_2135987638", "isim/ARM_Testbench_isim_beh.exe.sim/work/m_00000000003542184589_2135987638.didat");
	xsi_register_executes(pe);
}
