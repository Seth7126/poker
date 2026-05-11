// ============================================================
// 函数名称: sub_47aef6
// 虚拟地址: 0x47aef6
// WARP GUID: c1c95eb2-fbe2-5e92-8993-15368a97e04b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_47aef6(char* arg1, int16_t arg2, int32_t arg3, uint16_t* arg4 @ esi)
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    int32_t eflags
    uint16_t* esi = __outsb(arg2, *arg4, arg4, eflags)
    char temp1 = arg1[0x6f637340]
    arg1[0x6f637340] += (&arg1[0x6f637340]).b
    __outsd(arg2, *esi, esi, eflags)
    
    if (temp1 != neg.b((&arg1[0x6f637340]).b) && temp1 + (&arg1[0x6f637340]).b u>= temp1)
        jump("-stringcontainer error: invalid conpointer")
    
    void* entry_ebx
    *(entry_ebx + 0x7e80845) &= arg3.b
    *(entry_ebx - 0x71f0e608) += 1
    undefined
}
