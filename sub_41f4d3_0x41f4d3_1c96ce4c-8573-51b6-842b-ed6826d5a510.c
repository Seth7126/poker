// ============================================================
// 函数名称: sub_41f4d3
// 虚拟地址: 0x41f4d3
// WARP GUID: 1c96ce4c-8573-51b6-842b-ed6826d5a510
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: DeleteObject
// [内部子函数调用]: sub_403844, sub_403898
// [被调用的父级函数]: 无
// ============================================================

int32_tsub_41f4d3(int32_t* arg1 @ ebp, int32_t* arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: DeleteObject(*arg1[-1])
    DeleteObject(*arg1[-1])
    sub_403844()
    int32_t result = sub_403898(arg2)
    *arg1
    return result
}
