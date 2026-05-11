// ============================================================
// 函数名称: sub_4b3c8c
// 虚拟地址: 0x4b3c8c
// WARP GUID: edbef9e9-2fd3-58f4-add0-b9592fcd9458
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4b3c7c
// ============================================================

int32_tsub_4b3c8c(uint16_t* arg1, int32_t arg2, char* arg3, char* arg4, int16_t arg5, char* arg6)
{
    // 第一条实际指令: char* eax_3 = arg6
    char* eax_3 = arg6
    int32_t eflags
    char* esi = __outsb(arg4.w, *arg1, arg1, eflags)
    uint8_t* edi_1
    uint8_t temp0
    temp0, edi_1 = __insb(__return_addr - 1, arg4.w, eflags)
    *edi_1 = temp0
    
    if (__return_addr - 1 s>= 0)
        char temp2 = esi[0x74] | eax_3:1.b
        esi[0x74] = temp2
        arg6 = arg3
        
        if (temp2 s>= 0)
            *eax_3
            char* eax
            eax.b = __in_al_dx(arg4.w, eflags)
            *eax += arg5.b + 1
            *eax
            trap(0xd)
        
        if (temp2 == 0)
            jump(0x4b3d09)
        
        jump(0x4b3ca4)
    
    if (__return_addr != 1)
        jump(0x4b3c97)
    
    void arg_6b
    *(&arg_6b + edi_1) += arg2
    *eax_3 += arg4:1.b
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *esi += arg3:1.b
    *(esi + edi_1) += (arg3 - 1):1.b
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *arg4 += (arg3 - 2).b
    *eax_3 += arg5:1.b
    eax_3[2] += arg4:1.b
    *eax_3 += eax_3.b
    undefined
}
