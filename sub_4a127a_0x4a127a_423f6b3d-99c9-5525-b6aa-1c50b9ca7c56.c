// ============================================================
// 函数名称: sub_4a127a
// 虚拟地址: 0x4a127a
// WARP GUID: 423f6b3d-99c9-5525-b6aa-1c50b9ca7c56
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4a127a(int32_t* arg1, int16_t arg2, char arg3, uint16_t* arg4 @ esi, int32_t arg5, int32_t arg6, int16_t arg7, char* arg8, int32_t arg9, void* arg10)
{
    // 第一条实际指令: char* entry_ebx
    char* entry_ebx
    entry_ebx:1.b *= 2
    *arg1 += arg1
    *arg1 += arg1.b
    *arg1 += arg1.b
    arg1[-0x20000000].b += arg1.b
    *entry_ebx += arg3
    int32_t eflags
    uint16_t* esi = __outsd(arg2, *arg4, arg4, eflags)
    uint16_t* esi_1 = __outsb(arg2, *esi, esi, eflags)
    
    if (entry_ebx != 0xffffffff)
        __outsb(arg2, *esi_1, esi_1, eflags)
        
        if (entry_ebx == 0xffffffff)
            jump(sub_4a104f+0x298)
        
        jump(sub_4a104f+0x244)
    
    *arg1 += arg1.b
    *arg1 += arg1.b
    arg1[-0x20000000].b += arg1.b
    arg1.b |= *arg1
    char temp1 = arg1.b
    
    if (temp1 != 0xbc)
        *arg8 -= arg8.b
        *(arg10 + 1) += arg7:1.b
        *(arg10 + 1) += (arg10 + 1).b
        undefined
    
    if (temp1 u>= 0xbc)
        jump(sub_4a130e+0xc0)
    
    jump(sub_4a130e+0x5f)
}
