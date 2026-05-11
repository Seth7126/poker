// ============================================================
// 函数名称: sub_41efb4
// 虚拟地址: 0x41efb4
// WARP GUID: a3de93e7-a117-512f-97e9-acdb9d681414
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: DeleteObject
// [内部子函数调用]: sub_403844, sub_41d10c, sub_403898
// [被调用的父级函数]: 无
// ============================================================

int32_tsub_41efb4(void* arg1 @ ebp, HGDIOBJ arg2 @ edi, int32_t* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: DeleteObject(*(arg1 - 4))
    DeleteObject(*(arg1 - 4))
    sub_403844()
    sub_403898(arg3)
    int32_t* entry_ebx
    void* eax = entry_ebx[8]
    int32_t* ebp = sub_41d10c(*(eax + 0x14), arg2, eax + 0x18)
    *(entry_ebx + 0x1a) = 1
    int32_t result = (*(*entry_ebx + 0x10))()
    *ebp
    return result
}
