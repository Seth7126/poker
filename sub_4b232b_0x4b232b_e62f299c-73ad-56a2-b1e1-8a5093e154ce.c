// ============================================================
// 函数名称: sub_4b232b
// 虚拟地址: 0x4b232b
// WARP GUID: e62f299c-73ad-56a2-b1e1-8a5093e154ce
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4b232b(char* arg1, char* arg2, char* arg3, int32_t arg4 @ esi)
{
    // 第一条实际指令: int32_t eflags
    int32_t eflags
    uint16_t* gsbase
    uint16_t* esi_2 = __outsb(arg2.w, *(gsbase + arg4), arg4, eflags)
    void* entry_ebx
    bool z
    
    if (z)
        bool c
        *arg1 = adc.b(*arg1, arg1.b, c)
        arg1.b |= 2
        entry_ebx:1.b *= 2
        char* var_4_1 = arg1
        arg1.b -= 0x4b
        *arg3 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 = *arg1
        char temp1 = arg1[0x4609001a]
        arg1[0x4609001a] += arg1.b
        
        if (temp1 + arg1.b u< temp1)
            jump(sub_4b23a6+0xb)
        
        jump("quency")
    
    *arg1 += arg1.b
    *arg1 += arg1.b
    char temp0 = arg1[1]
    arg1[1] += arg1.b
    arg1.b = sbb.b(arg1.b, 0, temp0 + arg1.b u< temp0)
    char* eax = arg1 | 0x64696c53
    
    if (eax u>= 0)
        *(entry_ebx + 0x69)
        *(entry_ebx + 0x69)
        bool c_3 = unimplemented  {imul esi, dword [ebx+0x69], 0x54656c62}
        char temp4 = *eax
        *eax = adc.b(temp4, eax.b, c_3)
        *arg2 = sbb.b(*arg2, eax.b, 
            adc.b(temp4, eax.b, c_3) u< temp4 || (c_3 && adc.b(temp4, eax.b, c_3) == temp4))
        entry_ebx:1.b *= 2
        undefined
    
    eax[0x42] = entry_ebx:1.b
    eax[0x80000000] += eax.b
    char temp2 = *eax
    *eax += arg3.b
    int32_t var_4 = entry_ebx
    int32_t var_6
    __builtin_strncpy(&var_6, "owHi", 4)
    __outsb(arg2.w, *esi_2, esi_2, eflags)
    
    if (temp2 == neg.b(arg3.b))
        jump(sub_4b23a6+0xaf)
    
    jump(sub_4b23a6+0x5f)
}
