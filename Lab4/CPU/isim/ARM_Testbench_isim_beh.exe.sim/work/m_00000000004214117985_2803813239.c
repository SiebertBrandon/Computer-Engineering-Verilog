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
static int ng1[] = {1, 0};
static int ng2[] = {10, 0};
static int ng3[] = {0, 0, 0, 0};
static int ng4[] = {0, 0};



static void NetDecl_505_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 7648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(505, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 8560);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 0U);
    t16 = (t0 + 8464);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Initial_535_1(char *t0)
{
    char t5[8];
    char t14[8];
    char t15[8];
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

LAB0:    xsi_set_current_line(535, ng0);

LAB2:    xsi_set_current_line(536, ng0);
    xsi_set_current_line(536, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 6728);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 6728);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_leq(t5, 32, t3, 32, t4, 32);
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
LAB4:    xsi_set_current_line(536, ng0);

LAB6:    xsi_set_current_line(537, ng0);
    t12 = ((char*)((ng3)));
    t13 = (t0 + 6088);
    t16 = (t0 + 6088);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 6088);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 6728);
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

LAB8:    xsi_set_current_line(538, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 5928);
    t3 = (t0 + 5928);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 5928);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t17 = (t0 + 6728);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    xsi_vlog_generic_convert_array_indices(t5, t14, t6, t16, 2, 1, t19, 32, 1);
    t20 = (t5 + 4);
    t7 = *((unsigned int *)t20);
    t27 = (!(t7));
    t21 = (t14 + 4);
    t8 = *((unsigned int *)t21);
    t30 = (!(t8));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB9;

LAB10:    xsi_set_current_line(539, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 6248);
    t3 = (t0 + 6248);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 6248);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t17 = (t0 + 6728);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    xsi_vlog_generic_convert_array_indices(t5, t14, t6, t16, 2, 1, t19, 32, 1);
    t20 = (t5 + 4);
    t7 = *((unsigned int *)t20);
    t27 = (!(t7));
    t21 = (t14 + 4);
    t8 = *((unsigned int *)t21);
    t30 = (!(t8));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB11;

LAB12:    xsi_set_current_line(540, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 6408);
    t3 = (t0 + 6408);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 6408);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t17 = (t0 + 6728);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    xsi_vlog_generic_convert_array_indices(t5, t14, t6, t16, 2, 1, t19, 32, 1);
    t20 = (t5 + 4);
    t7 = *((unsigned int *)t20);
    t27 = (!(t7));
    t21 = (t14 + 4);
    t8 = *((unsigned int *)t21);
    t30 = (!(t8));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB13;

LAB14:    xsi_set_current_line(541, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 6568);
    t3 = (t0 + 6568);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 6568);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t17 = (t0 + 6728);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    xsi_vlog_generic_convert_array_indices(t5, t14, t6, t16, 2, 1, t19, 32, 1);
    t20 = (t5 + 4);
    t7 = *((unsigned int *)t20);
    t27 = (!(t7));
    t21 = (t14 + 4);
    t8 = *((unsigned int *)t21);
    t30 = (!(t8));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(536, ng0);
    t1 = (t0 + 6728);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng1)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 6728);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB7:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t13, t12, 0, *((unsigned int *)t15), t35);
    goto LAB8;

LAB9:    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t14);
    t34 = (t9 - t10);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t14), t35);
    goto LAB10;

LAB11:    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t14);
    t34 = (t9 - t10);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t14), t35);
    goto LAB12;

LAB13:    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t14);
    t34 = (t9 - t10);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t14), t35);
    goto LAB14;

LAB15:    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t14);
    t34 = (t9 - t10);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t14), t35);
    goto LAB16;

}

static void Always_544_2(char *t0)
{
    char t6[8];
    char t15[16];
    char t25[8];
    char t26[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    int t38;
    char *t39;
    unsigned int t40;
    int t41;
    int t42;
    unsigned int t43;
    unsigned int t44;
    int t45;
    int t46;

LAB0:    t1 = (t0 + 8144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(544, ng0);
    t2 = (t0 + 8480);
    *((int *)t2) = 1;
    t3 = (t0 + 8176);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(544, ng0);

LAB5:    xsi_set_current_line(545, ng0);
    xsi_set_current_line(545, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 6728);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB6:    t2 = (t0 + 6728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_leq(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB7;

LAB8:    goto LAB2;

LAB7:    xsi_set_current_line(545, ng0);

LAB9:    xsi_set_current_line(546, ng0);
    t13 = (t0 + 4888U);
    t14 = *((char **)t13);
    t13 = (t0 + 4848U);
    t16 = (t13 + 72U);
    t17 = *((char **)t16);
    t18 = (t0 + 4848U);
    t19 = (t18 + 48U);
    t20 = *((char **)t19);
    t21 = (t0 + 6728);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    xsi_vlog_generic_get_array_select_value(t15, 64, t14, t17, t20, 2, 1, t23, 32, 1);
    t24 = (t0 + 6088);
    t27 = (t0 + 6088);
    t28 = (t27 + 72U);
    t29 = *((char **)t28);
    t30 = (t0 + 6088);
    t31 = (t30 + 64U);
    t32 = *((char **)t31);
    t33 = (t0 + 6728);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    xsi_vlog_generic_convert_array_indices(t25, t26, t29, t32, 2, 1, t35, 32, 1);
    t36 = (t25 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (!(t37));
    t39 = (t26 + 4);
    t40 = *((unsigned int *)t39);
    t41 = (!(t40));
    t42 = (t38 && t41);
    if (t42 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(547, ng0);
    t2 = (t0 + 4728U);
    t3 = *((char **)t2);
    t2 = (t0 + 4688U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t7 = (t0 + 4688U);
    t13 = (t7 + 48U);
    t14 = *((char **)t13);
    t16 = (t0 + 6728);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    xsi_vlog_generic_get_array_select_value(t6, 32, t3, t5, t14, 2, 1, t18, 32, 1);
    t19 = (t0 + 5928);
    t20 = (t0 + 5928);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t23 = (t0 + 5928);
    t24 = (t23 + 64U);
    t27 = *((char **)t24);
    t28 = (t0 + 6728);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_generic_convert_array_indices(t25, t26, t22, t27, 2, 1, t30, 32, 1);
    t31 = (t25 + 4);
    t8 = *((unsigned int *)t31);
    t38 = (!(t8));
    t32 = (t26 + 4);
    t9 = *((unsigned int *)t32);
    t41 = (!(t9));
    t42 = (t38 && t41);
    if (t42 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(548, ng0);
    t2 = (t0 + 5048U);
    t3 = *((char **)t2);
    t2 = (t0 + 5008U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t7 = (t0 + 5008U);
    t13 = (t7 + 48U);
    t14 = *((char **)t13);
    t16 = (t0 + 6728);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    xsi_vlog_generic_get_array_select_value(t6, 1, t3, t5, t14, 2, 1, t18, 32, 1);
    t19 = (t0 + 6248);
    t20 = (t0 + 6248);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t23 = (t0 + 6248);
    t24 = (t23 + 64U);
    t27 = *((char **)t24);
    t28 = (t0 + 6728);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_generic_convert_array_indices(t25, t26, t22, t27, 2, 1, t30, 32, 1);
    t31 = (t25 + 4);
    t8 = *((unsigned int *)t31);
    t38 = (!(t8));
    t32 = (t26 + 4);
    t9 = *((unsigned int *)t32);
    t41 = (!(t9));
    t42 = (t38 && t41);
    if (t42 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(549, ng0);
    t2 = (t0 + 5208U);
    t3 = *((char **)t2);
    t2 = (t0 + 5168U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t7 = (t0 + 5168U);
    t13 = (t7 + 48U);
    t14 = *((char **)t13);
    t16 = (t0 + 6728);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    xsi_vlog_generic_get_array_select_value(t6, 4, t3, t5, t14, 2, 1, t18, 32, 1);
    t19 = (t0 + 6408);
    t20 = (t0 + 6408);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t23 = (t0 + 6408);
    t24 = (t23 + 64U);
    t27 = *((char **)t24);
    t28 = (t0 + 6728);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_generic_convert_array_indices(t25, t26, t22, t27, 2, 1, t30, 32, 1);
    t31 = (t25 + 4);
    t8 = *((unsigned int *)t31);
    t38 = (!(t8));
    t32 = (t26 + 4);
    t9 = *((unsigned int *)t32);
    t41 = (!(t9));
    t42 = (t38 && t41);
    if (t42 == 1)
        goto LAB16;

LAB17:    xsi_set_current_line(550, ng0);
    t2 = (t0 + 5368U);
    t3 = *((char **)t2);
    t2 = (t0 + 5328U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t7 = (t0 + 5328U);
    t13 = (t7 + 48U);
    t14 = *((char **)t13);
    t16 = (t0 + 6728);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    xsi_vlog_generic_get_array_select_value(t6, 5, t3, t5, t14, 2, 1, t18, 32, 1);
    t19 = (t0 + 6568);
    t20 = (t0 + 6568);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t23 = (t0 + 6568);
    t24 = (t23 + 64U);
    t27 = *((char **)t24);
    t28 = (t0 + 6728);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_generic_convert_array_indices(t25, t26, t22, t27, 2, 1, t30, 32, 1);
    t31 = (t25 + 4);
    t8 = *((unsigned int *)t31);
    t38 = (!(t8));
    t32 = (t26 + 4);
    t9 = *((unsigned int *)t32);
    t41 = (!(t9));
    t42 = (t38 && t41);
    if (t42 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(545, ng0);
    t2 = (t0 + 6728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 6728);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB6;

LAB10:    t43 = *((unsigned int *)t25);
    t44 = *((unsigned int *)t26);
    t45 = (t43 - t44);
    t46 = (t45 + 1);
    xsi_vlogvar_assign_value(t24, t15, 0, *((unsigned int *)t26), t46);
    goto LAB11;

LAB12:    t10 = *((unsigned int *)t25);
    t11 = *((unsigned int *)t26);
    t45 = (t10 - t11);
    t46 = (t45 + 1);
    xsi_vlogvar_assign_value(t19, t6, 0, *((unsigned int *)t26), t46);
    goto LAB13;

LAB14:    t10 = *((unsigned int *)t25);
    t11 = *((unsigned int *)t26);
    t45 = (t10 - t11);
    t46 = (t45 + 1);
    xsi_vlogvar_assign_value(t19, t6, 0, *((unsigned int *)t26), t46);
    goto LAB15;

LAB16:    t10 = *((unsigned int *)t25);
    t11 = *((unsigned int *)t26);
    t45 = (t10 - t11);
    t46 = (t45 + 1);
    xsi_vlogvar_assign_value(t19, t6, 0, *((unsigned int *)t26), t46);
    goto LAB17;

LAB18:    t10 = *((unsigned int *)t25);
    t11 = *((unsigned int *)t26);
    t45 = (t10 - t11);
    t46 = (t45 + 1);
    xsi_vlogvar_assign_value(t19, t6, 0, *((unsigned int *)t26), t46);
    goto LAB19;

}


extern void work_m_00000000004214117985_2803813239_init()
{
	static char *pe[] = {(void *)NetDecl_505_0,(void *)Initial_535_1,(void *)Always_544_2};
	xsi_register_didat("work_m_00000000004214117985_2803813239", "isim/ARM_Testbench_isim_beh.exe.sim/work/m_00000000004214117985_2803813239.didat");
	xsi_register_executes(pe);
}
