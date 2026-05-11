// ============================================================
// 函数名称: sub_41f958
// 虚拟地址: 0x41f958
// WARP GUID: f82a26ec-29db-5347-bc72-44781c7e43d3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_41f72c, sub_412930, sub_4128c0
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_41f958(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: sub_41f72c(arg1)
    sub_41f72c(arg1)
    int32_t* ebx_1 = *(arg1[8] + 0xc)
    int32_t eax_3 = sub_4128c0(ebx_1)
    return sub_412930(arg2, ebx_1[1], eax_3)
}
