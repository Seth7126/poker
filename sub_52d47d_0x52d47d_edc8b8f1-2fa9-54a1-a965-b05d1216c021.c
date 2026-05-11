// ============================================================
// 函数名称: sub_52d47d
// 虚拟地址: 0x52d47d
// WARP GUID: edc8b8f1-2fa9-54a1-a965-b05d1216c021
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_52d473
// ============================================================

int32_t __convention("regparm")sub_52d47d(char* arg1, int16_t arg2, uint16_t* arg3 @ esi, int32_t arg4 @ edi, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9, int32_t arg10)
{
    // 第一条实际指令: int32_t eflags
    int32_t eflags
    __outsw(arg2, *arg3, arg3, eflags)
    bool z
    
    if (z)
        TEB* fsbase
        char temp1 = *(fsbase + arg1)
        *(fsbase + arg1) += arg1.b
        *arg1 = adc.b(*arg1, arg1.b, temp1 + arg1.b u< temp1)
        *arg1 += arg1.b
        undefined
    
    int16_t* edi
    int16_t temp0
    temp0, edi = __insd(arg4, arg2, eflags)
    *edi = temp0
    
    if (z)
        jump(0x52d4f3)
    
    jump(0x52d4f3)
}
