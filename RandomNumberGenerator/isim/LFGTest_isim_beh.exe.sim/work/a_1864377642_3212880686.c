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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Utkan/LabProject/LFG.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);
char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_1864377642_3212880686_p_0(char *t0)
{
    char t15[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    int t8;
    char *t9;
    int t10;
    char *t11;
    int t12;
    char *t13;
    unsigned char t14;
    unsigned int t16;

LAB0:    xsi_set_current_line(83, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 6032);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(84, ng0);
    t3 = (t0 + 1672U);
    t4 = *((char **)t3);
    t3 = (t0 + 3408U);
    t5 = *((char **)t3);
    t6 = xsi_mem_cmp(t5, t4, 2U);
    if (t6 == 1)
        goto LAB6;

LAB11:    t3 = (t0 + 3528U);
    t7 = *((char **)t3);
    t8 = xsi_mem_cmp(t7, t4, 2U);
    if (t8 == 1)
        goto LAB7;

LAB12:    t3 = (t0 + 3648U);
    t9 = *((char **)t3);
    t10 = xsi_mem_cmp(t9, t4, 2U);
    if (t10 == 1)
        goto LAB8;

LAB13:    t3 = (t0 + 3768U);
    t11 = *((char **)t3);
    t12 = xsi_mem_cmp(t11, t4, 2U);
    if (t12 == 1)
        goto LAB9;

LAB14:
LAB10:    xsi_set_current_line(136, ng0);
    t1 = (t0 + 3408U);
    t3 = *((char **)t1);
    t1 = (t0 + 6240);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 2U);
    xsi_driver_first_trans_fast(t1);

LAB5:    goto LAB3;

LAB6:    xsi_set_current_line(86, ng0);
    t3 = (t0 + 3888U);
    t13 = *((char **)t3);
    t3 = (t13 + 0);
    *((int *)t3) = 0;
    xsi_set_current_line(87, ng0);
    t1 = (t0 + 4008U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(88, ng0);
    t1 = (t0 + 4128U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(89, ng0);
    t1 = (t0 + 4248U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(90, ng0);
    t1 = (t0 + 4368U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(91, ng0);
    t1 = (t0 + 4488U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(92, ng0);
    t1 = (t0 + 4608U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(93, ng0);
    t1 = (t0 + 4728U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(94, ng0);
    t1 = (t0 + 6112);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(95, ng0);
    t1 = (t0 + 6176);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(96, ng0);
    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t14 = (t2 == (unsigned char)3);
    if (t14 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(99, ng0);
    t1 = (t0 + 3408U);
    t3 = *((char **)t1);
    t1 = (t0 + 6240);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 2U);
    xsi_driver_first_trans_fast(t1);

LAB17:    goto LAB5;

LAB7:    xsi_set_current_line(102, ng0);
    t1 = (t0 + 6176);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(103, ng0);
    t1 = (t0 + 3112U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t14 = (t2 == (unsigned char)3);
    if (t14 != 0)
        goto LAB19;

LAB21:    xsi_set_current_line(114, ng0);
    t1 = (t0 + 3528U);
    t3 = *((char **)t1);
    t1 = (t0 + 6240);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 2U);
    xsi_driver_first_trans_fast(t1);

LAB20:    goto LAB5;

LAB8:    xsi_set_current_line(117, ng0);
    t1 = (t0 + 6112);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(118, ng0);
    t1 = (t0 + 3888U);
    t3 = *((char **)t1);
    t6 = *((int *)t3);
    t1 = (t0 + 4368U);
    t4 = *((char **)t1);
    t8 = *((int *)t4);
    t10 = (t6 + t8);
    t1 = (t0 + 4728U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = t10;
    xsi_set_current_line(119, ng0);
    t1 = (t0 + 4008U);
    t3 = *((char **)t1);
    t6 = *((int *)t3);
    t1 = (t0 + 3888U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t6;
    xsi_set_current_line(120, ng0);
    t1 = (t0 + 4128U);
    t3 = *((char **)t1);
    t6 = *((int *)t3);
    t1 = (t0 + 4008U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t6;
    xsi_set_current_line(121, ng0);
    t1 = (t0 + 4248U);
    t3 = *((char **)t1);
    t6 = *((int *)t3);
    t1 = (t0 + 4128U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t6;
    xsi_set_current_line(122, ng0);
    t1 = (t0 + 4368U);
    t3 = *((char **)t1);
    t6 = *((int *)t3);
    t1 = (t0 + 4248U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t6;
    xsi_set_current_line(123, ng0);
    t1 = (t0 + 4488U);
    t3 = *((char **)t1);
    t6 = *((int *)t3);
    t1 = (t0 + 4368U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t6;
    xsi_set_current_line(124, ng0);
    t1 = (t0 + 4608U);
    t3 = *((char **)t1);
    t6 = *((int *)t3);
    t1 = (t0 + 4488U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t6;
    xsi_set_current_line(125, ng0);
    t1 = (t0 + 4728U);
    t3 = *((char **)t1);
    t6 = *((int *)t3);
    t1 = (t0 + 4608U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t6;
    xsi_set_current_line(126, ng0);
    t1 = (t0 + 4728U);
    t3 = *((char **)t1);
    t6 = *((int *)t3);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t15, t6, 16);
    t4 = (t15 + 12U);
    t16 = *((unsigned int *)t4);
    t16 = (t16 * 1U);
    t2 = (16U != t16);
    if (t2 == 1)
        goto LAB22;

LAB23:    t5 = (t0 + 6304);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    t11 = (t9 + 56U);
    t13 = *((char **)t11);
    memcpy(t13, t1, 16U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(127, ng0);
    t1 = (t0 + 3768U);
    t3 = *((char **)t1);
    t1 = (t0 + 6240);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 2U);
    xsi_driver_first_trans_fast(t1);
    goto LAB5;

LAB9:    xsi_set_current_line(129, ng0);
    t1 = (t0 + 6112);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(130, ng0);
    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t14 = (t2 == (unsigned char)3);
    if (t14 != 0)
        goto LAB24;

LAB26:    xsi_set_current_line(133, ng0);
    t1 = (t0 + 3768U);
    t3 = *((char **)t1);
    t1 = (t0 + 6240);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 2U);
    xsi_driver_first_trans_fast(t1);

LAB25:    goto LAB5;

LAB15:;
LAB16:    xsi_set_current_line(97, ng0);
    t1 = (t0 + 3528U);
    t4 = *((char **)t1);
    t1 = (t0 + 6240);
    t5 = (t1 + 56U);
    t7 = *((char **)t5);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t4, 2U);
    xsi_driver_first_trans_fast(t1);
    goto LAB17;

LAB19:    xsi_set_current_line(104, ng0);
    t1 = (t0 + 1832U);
    t4 = *((char **)t1);
    t1 = (t0 + 9844U);
    t6 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t4, t1);
    t5 = (t0 + 3888U);
    t7 = *((char **)t5);
    t5 = (t7 + 0);
    *((int *)t5) = t6;
    xsi_set_current_line(105, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t1 = (t0 + 9860U);
    t6 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t3, t1);
    t4 = (t0 + 4008U);
    t5 = *((char **)t4);
    t4 = (t5 + 0);
    *((int *)t4) = t6;
    xsi_set_current_line(106, ng0);
    t1 = (t0 + 2152U);
    t3 = *((char **)t1);
    t1 = (t0 + 9876U);
    t6 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t3, t1);
    t4 = (t0 + 4128U);
    t5 = *((char **)t4);
    t4 = (t5 + 0);
    *((int *)t4) = t6;
    xsi_set_current_line(107, ng0);
    t1 = (t0 + 2312U);
    t3 = *((char **)t1);
    t1 = (t0 + 9892U);
    t6 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t3, t1);
    t4 = (t0 + 4248U);
    t5 = *((char **)t4);
    t4 = (t5 + 0);
    *((int *)t4) = t6;
    xsi_set_current_line(108, ng0);
    t1 = (t0 + 2472U);
    t3 = *((char **)t1);
    t1 = (t0 + 9908U);
    t6 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t3, t1);
    t4 = (t0 + 4368U);
    t5 = *((char **)t4);
    t4 = (t5 + 0);
    *((int *)t4) = t6;
    xsi_set_current_line(109, ng0);
    t1 = (t0 + 2632U);
    t3 = *((char **)t1);
    t1 = (t0 + 9924U);
    t6 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t3, t1);
    t4 = (t0 + 4488U);
    t5 = *((char **)t4);
    t4 = (t5 + 0);
    *((int *)t4) = t6;
    xsi_set_current_line(110, ng0);
    t1 = (t0 + 2792U);
    t3 = *((char **)t1);
    t1 = (t0 + 9940U);
    t6 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t3, t1);
    t4 = (t0 + 4608U);
    t5 = *((char **)t4);
    t4 = (t5 + 0);
    *((int *)t4) = t6;
    xsi_set_current_line(111, ng0);
    t1 = (t0 + 6176);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(112, ng0);
    t1 = (t0 + 3648U);
    t3 = *((char **)t1);
    t1 = (t0 + 6240);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 2U);
    xsi_driver_first_trans_fast(t1);
    goto LAB20;

LAB22:    xsi_size_not_matching(16U, t16, 0);
    goto LAB23;

LAB24:    xsi_set_current_line(131, ng0);
    t1 = (t0 + 3648U);
    t4 = *((char **)t1);
    t1 = (t0 + 6240);
    t5 = (t1 + 56U);
    t7 = *((char **)t5);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t4, 2U);
    xsi_driver_first_trans_fast(t1);
    goto LAB25;

}


extern void work_a_1864377642_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1864377642_3212880686_p_0};
	xsi_register_didat("work_a_1864377642_3212880686", "isim/LFGTest_isim_beh.exe.sim/work/a_1864377642_3212880686.didat");
	xsi_register_executes(pe);
}
