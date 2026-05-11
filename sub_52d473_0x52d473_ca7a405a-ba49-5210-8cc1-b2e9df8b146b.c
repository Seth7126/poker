// ============================================================
// 函数名称: sub_52d473
// 虚拟地址: 0x52d473
// WARP GUID: ca7a405a-ba49-5210-8cc1-b2e9df8b146b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_52d47d
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_52d473(char* arg1, int32_t* arg2, char* arg3, uint16_t* arg4 @ esi)
{
    // 第一条实际指令: *arg2 -= 1
    *arg2 -= 1
    *arg1 += arg1.b
    char temp0 = *arg1
    *arg1 += arg1:1.b
    int32_t eflags
    uint16_t* esi = __outsb(arg2.w, *arg4, arg4, eflags)
    uint16_t* esi_1 = __outsd(arg2.w, *esi, esi, eflags)
    
    if (temp0 != neg.b(arg1:1.b))
        int32_t edi
        return sub_52d47d(arg1, arg2, esi_1, edi) __tailcall
    
    *arg1 += arg1.b
    *arg3 += arg1:1.b
    *arg1 += arg1.b
    undefined
}
