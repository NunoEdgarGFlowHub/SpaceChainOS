/*********************************************************************************************************
**
**                                    中国软件开源组织
**
**                                   嵌入式实时操作系统
**
**                                SylixOS(TM)  LW : long wing
**
**                               Copyright All Rights Reserved
**
**--------------文件信息--------------------------------------------------------------------------------
**
** 文   件   名: pciError.h
**
** 创   建   人: Gong.YuJian (弓羽箭)
**
** 文件创建日期: 2015 年 12 月 23 日
**
** 描        述: PCI 总线错误管理.
*********************************************************************************************************/

#ifndef __PCIERROR_H
#define __PCIERROR_H

/*********************************************************************************************************
  裁剪宏
*********************************************************************************************************/
#if (LW_CFG_DEVICE_EN > 0) && (LW_CFG_PCI_EN > 0)

/*********************************************************************************************************
  错误管理控制块
*********************************************************************************************************/
typedef struct {
    INT                  PCIERR_iIndex;
} PCI_ERROR_CB;
typedef PCI_ERROR_CB    *PCI_ERROR_HANDLE;

#endif                                                                  /*  (LW_CFG_DEVICE_EN > 0) &&   */
                                                                        /*  (LW_CFG_PCI_EN > 0)         */
#endif                                                                  /*  __PCIERROR_H                */
/*********************************************************************************************************
  END
*********************************************************************************************************/
