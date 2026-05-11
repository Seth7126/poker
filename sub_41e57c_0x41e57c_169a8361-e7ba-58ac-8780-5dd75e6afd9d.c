// ============================================================
// 函数名称: sub_41e57c
// 虚拟地址: 0x41e57c
// WARP GUID: 169a8361-e7ba-58ac-8780-5dd75e6afd9d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_41ebd8, sub_4128c0, sub_4128a4
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_41e57c(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: return sub_41ebd8(arg1, arg2, sub_4128c0(arg2) - sub_4128a4(arg2))
    return sub_41ebd8(arg1, arg2, sub_4128c0(arg2) - sub_4128a4(arg2))
}
