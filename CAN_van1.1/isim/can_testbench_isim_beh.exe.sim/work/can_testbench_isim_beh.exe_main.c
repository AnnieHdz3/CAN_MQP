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
    work_m_00000000000394320742_4030155052_init();
    work_m_00000000001720855275_1659349655_init();
    work_m_00000000001720855275_0765869136_init();
    work_m_00000000000394320742_3912005741_init();
    work_m_00000000000394320742_0232424468_init();
    work_m_00000000003876076939_2474811288_init();
    work_m_00000000001720855275_4120737014_init();
    work_m_00000000001720855275_0529555154_init();
    work_m_00000000002316342304_3940376810_init();
    work_m_00000000002092812696_1295641630_init();
    work_m_00000000000064940042_2317237310_init();
    work_m_00000000001300747446_2854830031_init();
    work_m_00000000002411726266_2669421844_init();
    work_m_00000000002005342176_3304974226_init();
    work_m_00000000002809700315_0377038486_init();
    work_m_00000000000764637517_3903169545_init();
    work_m_00000000002226169998_3587324717_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002226169998_3587324717");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
