// ============================================================
// 函数名称: sub_42b238
// 虚拟地址: 0x42b238
// WARP GUID: 273b8e6b-7db5-5488-9c87-3a20761f0349
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40fa94, sub_42b1dc, sub_42b5fc
// [被调用的父级函数]: sub_442aa0, sub_4431ac, sub_42d14c
// ============================================================

int32_t __convention("regparm")sub_42b238(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_10
    int32_t var_10
    sub_40fa94(sub_42b1dc(arg1), arg2, &var_10)
    return sub_42b5fc(arg1, &var_10)
}
