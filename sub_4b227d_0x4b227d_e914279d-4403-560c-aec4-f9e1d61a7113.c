// ============================================================
// 函数名称: sub_4b227d
// 虚拟地址: 0x4b227d
// WARP GUID: e914279d-4403-560c-aec4-f9e1d61a7113
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4b227d(char* arg1, char* arg2, char* arg3, uint16_t* arg4 @ esi)
{
    // 第一条实际指令: *arg3 += arg1.b
    *arg3 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 = *arg1
    char temp1 = arg1[0x4f0b0015]
    arg1[0x4f0b0015] += arg1.b
    int32_t eflags
    
    if (temp1 + arg1.b u>= temp1)
        uint16_t* gsbase
        __outsb(arg2.w, *(gsbase + arg4), arg4, eflags)
        
        if (temp1 == neg.b(arg1.b))
            jump(0x4b22f5)
        
        jump("tion")
    
    char temp2 = arg1[2]
    arg1[2] += arg1.b
    *arg1 = sbb.b(*arg1, arg1.b, temp2 + arg1.b u< temp2)
    arg1[0x61] |= arg2.b
    uint8_t* edi_1
    uint8_t temp0
    temp0, edi_1 = __insb(*(arg2 + 0x65) * &data_438e6c, arg2.w, eflags)
    *edi_1 = temp0
    *arg1 += arg1.b
    int32_t var_8 = *arg1
    int32_t ebx
    ebx:1.b = 0x42
    *arg3 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 = *arg1
    char temp3 = arg1[0x50090019]
    arg1[0x50090019] += arg1.b
    bool c_2 = temp3 + arg1.b u< temp3
    __outsd(arg2.w, *arg4, arg4, eflags)
    
    if (not(add_overflow(temp3, arg1.b)))
        jump("pMenu")
    
    char temp4 = *arg1
    *arg1 = adc.b(temp4, arg1.b, c_2)
    *arg2 = sbb.b(*arg2, arg1.b, 
        adc.b(temp4, arg1.b, c_2) u< temp4 || (c_2 && adc.b(temp4, arg1.b, c_2) == temp4))
    ebx:1.b = 0x84
    undefined
}
