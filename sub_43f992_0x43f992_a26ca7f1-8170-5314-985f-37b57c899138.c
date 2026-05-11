// ============================================================
// 函数名称: sub_43f992
// 虚拟地址: 0x43f992
// WARP GUID: a26ca7f1-8170-5314-985f-37b57c899138
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_43f992(void* arg1, void* arg2, char arg3, uint16_t* arg4 @ esi, int32_t arg5 @ edi, long double arg6 @ st0)
{
    // 第一条实际指令: *(arg1 + 0x44)
    *(arg1 + 0x44)
    int32_t entry_ebx
    *(entry_ebx + arg5 + 0x44) += arg2:1.b
    *(arg1 - 0x80000000) += arg1.b
    arg1.b = arg1.b
    char* eax = arg1 | 0x69746341
    int32_t eflags
    
    if (eax u> 0)
        uint16_t* esi = __outsd(arg2.w, *arg4, arg4, eflags)
        __outsb(arg2.w, *esi, esi, eflags)
        
        if (entry_ebx == 0xffffffff)
            jump(0x43fa22)
        
        jump("ol$mB")
    
    if (eax != 0)
        jump(0x254face)
    
    uint16_t esi_2 = __outsd(arg2.w, *arg4, arg4, eflags)
    int32_t var_4 = entry_ebx
    int32_t eflags_1
    int16_t temp0
    temp0, eflags_1 = __arpl_memw_gpr16(*(arg2 + 0x6f), esi_2)
    *(arg2 + 0x6f) = temp0
    uint8_t* edi
    uint8_t temp0_1
    temp0_1, edi = __insb(arg5, arg2.w, eflags_1)
    *edi = temp0_1
    uint8_t* edi_1
    uint8_t temp0_2
    temp0_2, edi_1 = __insb(edi, arg2.w, eflags_1)
    *edi_1 = temp0_2
    *eax += arg2.b
    *(&eax[1] * 2) += arg3
    undefined
}
