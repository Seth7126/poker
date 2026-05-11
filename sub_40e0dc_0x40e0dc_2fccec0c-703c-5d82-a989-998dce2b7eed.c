// ============================================================
// 函数名称: sub_40e0dc
// 虚拟地址: 0x40e0dc
// WARP GUID: 2fccec0c-703c-5d82-a989-998dce2b7eed
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_41464c, sub_414aa0, sub_4132fc, sub_41115f, sub_411168
// ============================================================

int32_t __convention("regparm")sub_40e0dc(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: char* edi_1 = **arg2
    char* edi_1 = **arg2
    int32_t ebx
    ebx.b = 4
    
    if (*edi_1 != 7)
        int32_t ecx_1
        ecx_1.b = edi_1[1]
        ebx.b = edi_1[ecx_1 + 2]
    
    int32_t ecx_2 = arg2[1]
    char temp0 = *(arg2 + 7)
    arg2[4]
    
    if (temp0 u< 0xfe)
        arg1 = ecx_2()
    else if (temp0 u> 0xfe)
        int16_t* ecx_6 = (ecx_2 & 0xffffff) + arg1
        arg1.b = *ecx_6
        
        if (ebx.b u>= 2)
            arg1.w = *ecx_6
            
            if (ebx.b u>= 4)
                arg1 = *ecx_6
    else
        arg1 = (*(sx.d(ecx_2.w) + *arg1))()
    
    if (ebx.b u< 4)
        if (ebx.b u>= 2)
            arg1 = sx.d(arg1.w)
            
            if (ebx.b != 2)
                return arg1 & 0xffff
        else
            arg1 = sx.d(arg1.b)
            
            if (ebx.b != 0)
                return arg1 & 0xff
    
    return arg1
}
