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
static const char *ng0 = "C:/Users/Utkan/LabProject/LCG.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_2299129454_3212880686_p_0(char *t0)
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
    char *t12;
    char *t13;
    char *t14;
    unsigned char t16;
    unsigned int t17;

LAB0:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 4152);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(57, ng0);
    t3 = (t0 + 1832U);
    t4 = *((char **)t3);
    t3 = (t0 + 2488U);
    t5 = *((char **)t3);
    t6 = xsi_mem_cmp(t5, t4, 2U);
    if (t6 == 1)
        goto LAB6;

LAB10:    t3 = (t0 + 2608U);
    t7 = *((char **)t3);
    t8 = xsi_mem_cmp(t7, t4, 2U);
    if (t8 == 1)
        goto LAB7;

LAB11:    t3 = (t0 + 2728U);
    t9 = *((char **)t3);
    t10 = xsi_mem_cmp(t9, t4, 2U);
    if (t10 == 1)
        goto LAB8;

LAB12:
LAB9:    xsi_set_current_line(82, ng0);
    t1 = (t0 + 2488U);
    t3 = *((char **)t1);
    t1 = (t0 + 4424);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 2U);
    xsi_driver_first_trans_fast(t1);

LAB5:    goto LAB3;

LAB6:    xsi_set_current_line(59, ng0);
    t3 = (t0 + 4232);
    t11 = (t3 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(60, ng0);
    t1 = (t0 + 4296);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(61, ng0);
    t1 = (t0 + 2848U);
    t3 = *((char **)t1);
    t6 = *((int *)t3);
    t8 = (t6 + 1);
    t1 = (t0 + 2848U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t8;
    xsi_set_current_line(62, ng0);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t15, 0, 16);
    t2 = (16U != 16U);
    if (t2 == 1)
        goto LAB14;

LAB15:    t3 = (t0 + 4360);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t1, 16U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(63, ng0);
    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t16 = (t2 == (unsigned char)3);
    if (t16 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 2488U);
    t3 = *((char **)t1);
    t1 = (t0 + 4424);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 2U);
    xsi_driver_first_trans_fast(t1);

LAB17:    goto LAB5;

LAB7:    xsi_set_current_line(69, ng0);
    t1 = (t0 + 4232);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(70, ng0);
    t1 = (t0 + 4296);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(71, ng0);
    t1 = (t0 + 2848U);
    t3 = *((char **)t1);
    t6 = *((int *)t3);
    t8 = (t6 * 29);
    t10 = (t8 + 7);
    t1 = (t0 + 2848U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t10;
    xsi_set_current_line(72, ng0);
    t1 = (t0 + 2728U);
    t3 = *((char **)t1);
    t1 = (t0 + 4424);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 2U);
    xsi_driver_first_trans_fast(t1);
    goto LAB5;

LAB8:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 4232);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(75, ng0);
    t1 = (t0 + 2848U);
    t3 = *((char **)t1);
    t6 = *((int *)t3);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t15, t6, 16);
    t4 = (t15 + 12U);
    t17 = *((unsigned int *)t4);
    t17 = (t17 * 1U);
    t2 = (16U != t17);
    if (t2 == 1)
        goto LAB19;

LAB20:    t5 = (t0 + 4360);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 16U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(76, ng0);
    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t16 = (t2 == (unsigned char)3);
    if (t16 != 0)
        goto LAB21;

LAB23:    xsi_set_current_line(79, ng0);
    t1 = (t0 + 2488U);
    t3 = *((char **)t1);
    t1 = (t0 + 4424);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 2U);
    xsi_driver_first_trans_fast(t1);

LAB22:    goto LAB5;

LAB13:;
LAB14:    xsi_size_not_matching(16U, 16U, 0);
    goto LAB15;

LAB16:    xsi_set_current_line(64, ng0);
    t1 = (t0 + 2608U);
    t4 = *((char **)t1);
    t1 = (t0 + 4424);
    t5 = (t1 + 56U);
    t7 = *((char **)t5);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t4, 2U);
    xsi_driver_first_trans_fast(t1);
    goto LAB17;

LAB19:    xsi_size_not_matching(16U, t17, 0);
    goto LAB20;

LAB21:    xsi_set_current_line(77, ng0);
    t1 = (t0 + 2608U);
    t4 = *((char **)t1);
    t1 = (t0 + 4424);
    t5 = (t1 + 56U);
    t7 = *((char **)t5);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t4, 2U);
    xsi_driver_first_trans_fast(t1);
    goto LAB22;

}


extern void work_a_2299129454_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2299129454_3212880686_p_0};
	xsi_register_didat("work_a_2299129454_3212880686", "isim/LFGTest_isim_beh.exe.sim/work/a_2299129454_3212880686.didat");
	xsi_register_executes(pe);
}
