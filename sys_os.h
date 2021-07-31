#ifndef __SYS0S_H__
#define __SYS0S_H__

#define SYS_OS_POLLING_METHOD     0X01
#define SYS_OS_INTERRUPT_METHOD   0X00

#define SYS_OS_METHOD             SYS_OS_INTERRUPT_METHOD



typedef struct _SysOs_Handle_ST
{
    unsigned char Task_x10_Stat   : 1;
    unsigned char Task2_x20_Stat  : 1;
    unsigned char Task3_x50_Stat  : 1;
    unsigned char Task4_x100_Stat : 1;
    unsigned char Task4_x1000_Stat : 1;
    unsigned char Task_Pending : 1;
    unsigned char Reserved : 2;
}SysOs_Handle_ST;


extern SysOs_Handle_ST SysOs_Handle;


extern void SysOs_Init(void);

extern void SysOs_Task_Eval(void);

extern void SysOs_Task_Exe(void);

#endif //__SYS0S_H__
