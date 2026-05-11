// ============================================================
// 函数名称: sub_4d6209
// 虚拟地址: 0x4d6209
// WARP GUID: 68150cdf-a502-560d-8197-63f5a2bb6441
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4d6164
// ============================================================

int32_t __convention("regparm")sub_4d6209(void* arg1, uint16_t arg2, uint16_t* arg3 @ esi, int32_t arg4 @ edi, int32_t arg5, int32_t* arg6, void* arg7, int32_t arg8, int32_t arg9, char* arg10)
{
    // 第一条实际指令: char temp1 = *(arg1 + 0x7004dc3)
    char temp1 = *(arg1 + 0x7004dc3)
    int16_t entry_ebx
    *(arg1 + 0x7004dc3) += entry_ebx:1.b
    int32_t eflags
    uint8_t* edi
    uint8_t temp0
    temp0, edi = __insb(arg4, arg2, eflags)
    *edi = temp0
    __outsd(arg2, *arg3, arg3, eflags)
    char* eax = arg10
    uint16_t* gsbase
    uint16_t* esi_2 = __outsb(arg8.w, *(gsbase + arg5), arg5, eflags)
    
    if (temp1 != neg.b(entry_ebx:1.b) && temp1 + entry_ebx:1.b u>= temp1)
        char temp2 = *eax
        *eax += arg8.b
        *arg6
        *arg6
        bool c_1 = unimplemented  {imul ecx, dword [ebp], 0xc}
        
        if (not(c_1))
            *arg6
            *arg6
            bool c_2 = unimplemented  {imul ecx, dword [ebp], 0x61747310}
            
            if (c_2)
                jump(sub_4d624a+0xc4)
            
            jump(sub_4d624a+0x50)
        
        arg6[0x1b]
        __outsb(arg8.w, *esi_2, esi_2, eflags)
        
        if (temp2 != neg.b(arg8.b))
            jump(sub_4d624a+0x46)
        
        jump(0x4d622b)
    
    *eax += arg7:1.b
    char ecx_2
    int16_t ds
    ecx_2, ds = __lds_gprz_memp(*esi_2)
    eax.b |= 0x42
    
    if (eax.b == 0)
        if (eax.b == 0)
            eax:1.b += arg8.b
            undefined
        
        jump("n1Cli")
    
    char temp4 = *(arg8 + (eax << 1))
    *(arg8 + (eax << 1)) += ecx_2
    bool z_1 = temp4 == neg.b(ecx_2)
    
    if (z_1)
        if (z_1)
            jump(sub_4d624a+0xd6)
        
        jump(sub_4d624a+0x67)
    
    __builtin_strncpy(&arg10, "ebug", 4)
    *eax
    TEB* fsbase
    uint16_t* esi_5 = __outsd(arg8.w, *(fsbase + esi_2 - 1), esi_2 - 1, eflags)
    __outsb(arg8.w, *esi_5, esi_5, eflags)
    uint16_t temp0_1
    temp0_1, temp0_1 = __insb(__return_addr.w, arg8.w, eflags)
    void* const edi_1
    edi_1.w = temp0_1
    *edi_1 = temp0_1
    *(arg7 + 0x68)
    *(arg7 + 0x68)
    bool c_4 = unimplemented  {imul esi, dword [ebx+0x68], 0x766e6f43}
    
    if (c_4)
        jump(sub_4d6394+0x1e)
    
    jump(sub_4d624a+0xf5)
}
