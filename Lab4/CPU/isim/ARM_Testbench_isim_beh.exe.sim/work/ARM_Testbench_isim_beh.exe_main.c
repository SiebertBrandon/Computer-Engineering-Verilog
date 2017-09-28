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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000001160150714_3070636035_init();
    work_m_00000000003087154275_1379683966_init();
    work_m_00000000001330969680_3794770275_init();
    work_m_00000000001160150714_0588407155_init();
    work_m_00000000003087154275_3324518158_init();
    work_m_00000000001615502166_2654898885_init();
    work_m_00000000002065593534_0035540680_init();
    work_m_00000000001160150714_3998514762_init();
    work_m_00000000003087154275_1920252487_init();
    work_m_00000000001160150714_2572373724_init();
    work_m_00000000003087154275_0091458257_init();
    work_m_00000000004214117985_2803813239_init();
    work_m_00000000001345141514_2967368196_init();
    work_m_00000000002989154179_2237989238_init();
    work_m_00000000001322208174_2272257048_init();
    work_m_00000000000729636292_3467740166_init();
    work_m_00000000002317376077_1723813368_init();
    work_m_00000000003037474636_1957175458_init();
    work_m_00000000000091511606_2138213552_init();
    work_m_00000000003542184589_2135987638_init();
    work_m_00000000002485262993_4173875730_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002485262993_4173875730");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
