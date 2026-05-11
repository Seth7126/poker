// ============================================================
// 函数名称: sub_41e3af
// 虚拟地址: 0x41e3af
// WARP GUID: 20027e7f-2c60-5ac8-9375-b011e1a4afbc
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: DeleteObject
// [内部子函数调用]: sub_403844, sub_403898, sub_417c44
// [被调用的父级函数]: 无
// ============================================================

int32_tsub_41e3af(int32_t* arg1 @ ebp, int32_t* arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: sub_417c44(arg1[-2])
    sub_417c44(arg1[-2])
    
    if (arg1[-1] != 0)
        DeleteObject(arg1[-1])
    
    sub_403844()
    sub_403898(arg2)
    int32_t* entry_ebx
    int32_t result = (*(*entry_ebx + 0x10))()
    *arg1
    return result
}
