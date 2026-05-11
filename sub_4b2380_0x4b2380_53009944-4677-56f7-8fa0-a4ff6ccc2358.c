// ============================================================
// 函数名称: sub_4b2380
// 虚拟地址: 0x4b2380
// WARP GUID: 53009944-4677-56f7-8fa0-a4ff6ccc2358
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4b2380(char* arg1, char* arg2, char* arg3, uint16_t* arg4 @ esi)
{
    // 第一条实际指令: *arg3 += arg1.b
    *arg3 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg3 = *arg3
    char temp0 = *arg1
    *arg1 += arg1.b
    arg1.b = sbb.b(arg1.b, 0, temp0 + arg1.b u< temp0)
    char* eax = arg1 | 0x64696c53
    void* entry_ebx
    
    if (eax u>= 0)
        *(entry_ebx + 0x69)
        *(entry_ebx + 0x69)
        bool c_1 = unimplemented  {imul esi, dword [ebx+0x69], 0x54656c62}
        char temp3 = *eax
        *eax = adc.b(temp3, eax.b, c_1)
        *arg2 = sbb.b(*arg2, eax.b, 
            adc.b(temp3, eax.b, c_1) u< temp3 || (c_1 && adc.b(temp3, eax.b, c_1) == temp3))
        entry_ebx:1.b *= 2
        undefined
    
    eax[0x42] = entry_ebx:1.b
    eax[0x80000000] += eax.b
    char temp1 = *eax
    *eax += arg3.b
    void* var_2 = entry_ebx
    int32_t var_6
    __builtin_strncpy(&var_6, "owHi", 4)
    int32_t eflags
    __outsb(arg2.w, *arg4, arg4, eflags)
    
    if (temp1 == neg.b(arg3.b))
        jump(sub_4b23a6+0xaf)
    
    jump(sub_4b23a6+0x5f)
}
