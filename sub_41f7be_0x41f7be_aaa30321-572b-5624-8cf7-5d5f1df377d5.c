// ============================================================
// 函数名称: sub_41f7be
// 虚拟地址: 0x41f7be
// WARP GUID: aaa30321-572b-5624-8cf7-5d5f1df377d5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403844, sub_403898, sub_4030d0
// [被调用的父级函数]: 无
// ============================================================

int32_tsub_41f7be(int32_t* arg1 @ ebp, int32_t* arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: sub_4030d0(arg1[-1])
    sub_4030d0(arg1[-1])
    sub_403844()
    sub_403898(arg2)
    int32_t result = arg1[-1]
    void* entry_ebx
    *(entry_ebx + 0xc) = result
    *arg1
    return result
}
