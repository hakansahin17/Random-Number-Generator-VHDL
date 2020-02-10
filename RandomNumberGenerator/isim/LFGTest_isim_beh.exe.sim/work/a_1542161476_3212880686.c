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
static const char *ng0 = "C:/Users/Utkan/LabProject/SeedGen.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_1542161476_3212880686_p_0(char *t0)
{
    char t29[16];
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
    int t14;
    char *t15;
    int t16;
    char *t17;
    int t18;
    char *t19;
    int t20;
    char *t21;
    int t22;
    char *t23;
    int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t30;
    unsigned char t31;

LAB0:    xsi_set_current_line(79, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 5952);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(80, ng0);
    t3 = (t0 + 2632U);
    t4 = *((char **)t3);
    t3 = (t0 + 3568U);
    t5 = *((char **)t3);
    t6 = xsi_mem_cmp(t5, t4, 4U);
    if (t6 == 1)
        goto LAB6;

LAB17:    t3 = (t0 + 3688U);
    t7 = *((char **)t3);
    t8 = xsi_mem_cmp(t7, t4, 4U);
    if (t8 == 1)
        goto LAB7;

LAB18:    t3 = (t0 + 3808U);
    t9 = *((char **)t3);
    t10 = xsi_mem_cmp(t9, t4, 4U);
    if (t10 == 1)
        goto LAB8;

LAB19:    t3 = (t0 + 3928U);
    t11 = *((char **)t3);
    t12 = xsi_mem_cmp(t11, t4, 4U);
    if (t12 == 1)
        goto LAB9;

LAB20:    t3 = (t0 + 4048U);
    t13 = *((char **)t3);
    t14 = xsi_mem_cmp(t13, t4, 4U);
    if (t14 == 1)
        goto LAB10;

LAB21:    t3 = (t0 + 4168U);
    t15 = *((char **)t3);
    t16 = xsi_mem_cmp(t15, t4, 4U);
    if (t16 == 1)
        goto LAB11;

LAB22:    t3 = (t0 + 4288U);
    t17 = *((char **)t3);
    t18 = xsi_mem_cmp(t17, t4, 4U);
    if (t18 == 1)
        goto LAB12;

LAB23:    t3 = (t0 + 4408U);
    t19 = *((char **)t3);
    t20 = xsi_mem_cmp(t19, t4, 4U);
    if (t20 == 1)
        goto LAB13;

LAB24:    t3 = (t0 + 4528U);
    t21 = *((char **)t3);
    t22 = xsi_mem_cmp(t21, t4, 4U);
    if (t22 == 1)
        goto LAB14;

LAB25:    t3 = (t0 + 4648U);
    t23 = *((char **)t3);
    t24 = xsi_mem_cmp(t23, t4, 4U);
    if (t24 == 1)
        goto LAB15;

LAB26:
LAB16:    xsi_set_current_line(162, ng0);
    t1 = (t0 + 3568U);
    t3 = *((char **)t1);
    t1 = (t0 + 6608);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 4U);
    xsi_driver_first_trans_fast(t1);

LAB5:    goto LAB3;

LAB6:    xsi_set_current_line(82, ng0);
    t3 = (t0 + 6032);
    t25 = (t3 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    *((unsigned char *)t28) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(83, ng0);
    t1 = (t0 + 6096);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(84, ng0);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t29, 0, 16);
    t2 = (16U != 16U);
    if (t2 == 1)
        goto LAB28;

LAB29:    t3 = (t0 + 6160);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t1, 16U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(85, ng0);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t29, 0, 16);
    t3 = (t29 + 12U);
    t30 = *((unsigned int *)t3);
    t30 = (t30 * 1U);
    t2 = (16U != t30);
    if (t2 == 1)
        goto LAB30;

LAB31:    t4 = (t0 + 6224);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 16U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(86, ng0);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t29, 0, 16);
    t3 = (t29 + 12U);
    t30 = *((unsigned int *)t3);
    t30 = (t30 * 1U);
    t2 = (16U != t30);
    if (t2 == 1)
        goto LAB32;

LAB33:    t4 = (t0 + 6288);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 16U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(87, ng0);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t29, 0, 16);
    t3 = (t29 + 12U);
    t30 = *((unsigned int *)t3);
    t30 = (t30 * 1U);
    t2 = (16U != t30);
    if (t2 == 1)
        goto LAB34;

LAB35:    t4 = (t0 + 6352);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 16U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(88, ng0);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t29, 0, 16);
    t3 = (t29 + 12U);
    t30 = *((unsigned int *)t3);
    t30 = (t30 * 1U);
    t2 = (16U != t30);
    if (t2 == 1)
        goto LAB36;

LAB37:    t4 = (t0 + 6416);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 16U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(89, ng0);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t29, 0, 16);
    t3 = (t29 + 12U);
    t30 = *((unsigned int *)t3);
    t30 = (t30 * 1U);
    t2 = (16U != t30);
    if (t2 == 1)
        goto LAB38;

LAB39:    t4 = (t0 + 6480);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 16U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(90, ng0);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t29, 0, 16);
    t3 = (t29 + 12U);
    t30 = *((unsigned int *)t3);
    t30 = (t30 * 1U);
    t2 = (16U != t30);
    if (t2 == 1)
        goto LAB40;

LAB41:    t4 = (t0 + 6544);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 16U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(91, ng0);
    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t31 = (t2 == (unsigned char)3);
    if (t31 != 0)
        goto LAB42;

LAB44:    xsi_set_current_line(94, ng0);
    t1 = (t0 + 3568U);
    t3 = *((char **)t1);
    t1 = (t0 + 6608);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 4U);
    xsi_driver_first_trans_fast(t1);

LAB43:    goto LAB5;

LAB7:    xsi_set_current_line(97, ng0);
    t1 = (t0 + 6032);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(98, ng0);
    t1 = (t0 + 6096);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(99, ng0);
    t1 = (t0 + 3272U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t31 = (t2 == (unsigned char)3);
    if (t31 != 0)
        goto LAB45;

LAB47:    xsi_set_current_line(102, ng0);
    t1 = (t0 + 3688U);
    t3 = *((char **)t1);
    t1 = (t0 + 6608);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 4U);
    xsi_driver_first_trans_fast(t1);

LAB46:    goto LAB5;

LAB8:    xsi_set_current_line(105, ng0);
    t1 = (t0 + 2792U);
    t3 = *((char **)t1);
    t1 = (t0 + 6160);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 16U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(106, ng0);
    t1 = (t0 + 3272U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t31 = (t2 == (unsigned char)3);
    if (t31 != 0)
        goto LAB48;

LAB50:    xsi_set_current_line(109, ng0);
    t1 = (t0 + 3808U);
    t3 = *((char **)t1);
    t1 = (t0 + 6608);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 4U);
    xsi_driver_first_trans_fast(t1);

LAB49:    goto LAB5;

LAB9:    xsi_set_current_line(112, ng0);
    t1 = (t0 + 2792U);
    t3 = *((char **)t1);
    t1 = (t0 + 6224);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 16U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(113, ng0);
    t1 = (t0 + 3272U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t31 = (t2 == (unsigned char)3);
    if (t31 != 0)
        goto LAB51;

LAB53:    xsi_set_current_line(116, ng0);
    t1 = (t0 + 3928U);
    t3 = *((char **)t1);
    t1 = (t0 + 6608);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 4U);
    xsi_driver_first_trans_fast(t1);

LAB52:    goto LAB5;

LAB10:    xsi_set_current_line(119, ng0);
    t1 = (t0 + 2792U);
    t3 = *((char **)t1);
    t1 = (t0 + 6288);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 16U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(120, ng0);
    t1 = (t0 + 3272U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t31 = (t2 == (unsigned char)3);
    if (t31 != 0)
        goto LAB54;

LAB56:    xsi_set_current_line(123, ng0);
    t1 = (t0 + 4048U);
    t3 = *((char **)t1);
    t1 = (t0 + 6608);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 4U);
    xsi_driver_first_trans_fast(t1);

LAB55:    goto LAB5;

LAB11:    xsi_set_current_line(126, ng0);
    t1 = (t0 + 2792U);
    t3 = *((char **)t1);
    t1 = (t0 + 6352);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 16U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(127, ng0);
    t1 = (t0 + 3272U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t31 = (t2 == (unsigned char)3);
    if (t31 != 0)
        goto LAB57;

LAB59:    xsi_set_current_line(130, ng0);
    t1 = (t0 + 4168U);
    t3 = *((char **)t1);
    t1 = (t0 + 6608);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 4U);
    xsi_driver_first_trans_fast(t1);

LAB58:    goto LAB5;

LAB12:    xsi_set_current_line(133, ng0);
    t1 = (t0 + 2792U);
    t3 = *((char **)t1);
    t1 = (t0 + 6416);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 16U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(134, ng0);
    t1 = (t0 + 3272U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t31 = (t2 == (unsigned char)3);
    if (t31 != 0)
        goto LAB60;

LAB62:    xsi_set_current_line(137, ng0);
    t1 = (t0 + 4288U);
    t3 = *((char **)t1);
    t1 = (t0 + 6608);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 4U);
    xsi_driver_first_trans_fast(t1);

LAB61:    goto LAB5;

LAB13:    xsi_set_current_line(140, ng0);
    t1 = (t0 + 2792U);
    t3 = *((char **)t1);
    t1 = (t0 + 6480);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 16U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(141, ng0);
    t1 = (t0 + 3272U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t31 = (t2 == (unsigned char)3);
    if (t31 != 0)
        goto LAB63;

LAB65:    xsi_set_current_line(144, ng0);
    t1 = (t0 + 4408U);
    t3 = *((char **)t1);
    t1 = (t0 + 6608);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 4U);
    xsi_driver_first_trans_fast(t1);

LAB64:    goto LAB5;

LAB14:    xsi_set_current_line(147, ng0);
    t1 = (t0 + 2792U);
    t3 = *((char **)t1);
    t1 = (t0 + 6544);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 16U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(148, ng0);
    t1 = (t0 + 3272U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t31 = (t2 == (unsigned char)3);
    if (t31 != 0)
        goto LAB66;

LAB68:    xsi_set_current_line(151, ng0);
    t1 = (t0 + 4528U);
    t3 = *((char **)t1);
    t1 = (t0 + 6608);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 4U);
    xsi_driver_first_trans_fast(t1);

LAB67:    goto LAB5;

LAB15:    xsi_set_current_line(154, ng0);
    t1 = (t0 + 6032);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(155, ng0);
    t1 = (t0 + 6096);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(156, ng0);
    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t31 = (t2 == (unsigned char)3);
    if (t31 != 0)
        goto LAB69;

LAB71:    xsi_set_current_line(159, ng0);
    t1 = (t0 + 3568U);
    t3 = *((char **)t1);
    t1 = (t0 + 6608);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 4U);
    xsi_driver_first_trans_fast(t1);

LAB70:    goto LAB5;

LAB27:;
LAB28:    xsi_size_not_matching(16U, 16U, 0);
    goto LAB29;

LAB30:    xsi_size_not_matching(16U, t30, 0);
    goto LAB31;

LAB32:    xsi_size_not_matching(16U, t30, 0);
    goto LAB33;

LAB34:    xsi_size_not_matching(16U, t30, 0);
    goto LAB35;

LAB36:    xsi_size_not_matching(16U, t30, 0);
    goto LAB37;

LAB38:    xsi_size_not_matching(16U, t30, 0);
    goto LAB39;

LAB40:    xsi_size_not_matching(16U, t30, 0);
    goto LAB41;

LAB42:    xsi_set_current_line(92, ng0);
    t1 = (t0 + 3688U);
    t4 = *((char **)t1);
    t1 = (t0 + 6608);
    t5 = (t1 + 56U);
    t7 = *((char **)t5);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t4, 4U);
    xsi_driver_first_trans_fast(t1);
    goto LAB43;

LAB45:    xsi_set_current_line(100, ng0);
    t1 = (t0 + 3808U);
    t4 = *((char **)t1);
    t1 = (t0 + 6608);
    t5 = (t1 + 56U);
    t7 = *((char **)t5);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t4, 4U);
    xsi_driver_first_trans_fast(t1);
    goto LAB46;

LAB48:    xsi_set_current_line(107, ng0);
    t1 = (t0 + 3928U);
    t4 = *((char **)t1);
    t1 = (t0 + 6608);
    t5 = (t1 + 56U);
    t7 = *((char **)t5);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t4, 4U);
    xsi_driver_first_trans_fast(t1);
    goto LAB49;

LAB51:    xsi_set_current_line(114, ng0);
    t1 = (t0 + 4048U);
    t4 = *((char **)t1);
    t1 = (t0 + 6608);
    t5 = (t1 + 56U);
    t7 = *((char **)t5);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t4, 4U);
    xsi_driver_first_trans_fast(t1);
    goto LAB52;

LAB54:    xsi_set_current_line(121, ng0);
    t1 = (t0 + 4168U);
    t4 = *((char **)t1);
    t1 = (t0 + 6608);
    t5 = (t1 + 56U);
    t7 = *((char **)t5);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t4, 4U);
    xsi_driver_first_trans_fast(t1);
    goto LAB55;

LAB57:    xsi_set_current_line(128, ng0);
    t1 = (t0 + 4288U);
    t4 = *((char **)t1);
    t1 = (t0 + 6608);
    t5 = (t1 + 56U);
    t7 = *((char **)t5);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t4, 4U);
    xsi_driver_first_trans_fast(t1);
    goto LAB58;

LAB60:    xsi_set_current_line(135, ng0);
    t1 = (t0 + 4408U);
    t4 = *((char **)t1);
    t1 = (t0 + 6608);
    t5 = (t1 + 56U);
    t7 = *((char **)t5);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t4, 4U);
    xsi_driver_first_trans_fast(t1);
    goto LAB61;

LAB63:    xsi_set_current_line(142, ng0);
    t1 = (t0 + 4528U);
    t4 = *((char **)t1);
    t1 = (t0 + 6608);
    t5 = (t1 + 56U);
    t7 = *((char **)t5);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t4, 4U);
    xsi_driver_first_trans_fast(t1);
    goto LAB64;

LAB66:    xsi_set_current_line(149, ng0);
    t1 = (t0 + 4648U);
    t4 = *((char **)t1);
    t1 = (t0 + 6608);
    t5 = (t1 + 56U);
    t7 = *((char **)t5);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t4, 4U);
    xsi_driver_first_trans_fast(t1);
    goto LAB67;

LAB69:    xsi_set_current_line(157, ng0);
    t1 = (t0 + 4648U);
    t4 = *((char **)t1);
    t1 = (t0 + 6608);
    t5 = (t1 + 56U);
    t7 = *((char **)t5);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t4, 4U);
    xsi_driver_first_trans_fast(t1);
    goto LAB70;

}


extern void work_a_1542161476_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1542161476_3212880686_p_0};
	xsi_register_didat("work_a_1542161476_3212880686", "isim/LFGTest_isim_beh.exe.sim/work/a_1542161476_3212880686.didat");
	xsi_register_executes(pe);
}
