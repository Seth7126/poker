// ============================================================
// 函数名称: sub_44bc2c
// 虚拟地址: 0x44bc2c
// WARP GUID: 40ce2f78-5727-5675-9013-be4cdcd0bc11
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_44bc5c
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_44bc2c(int32_t* arg1, char arg2)
{
    // 第一条实际指令: if (arg2 != arg1[0x4e].b)
    if (arg2 != arg1[0x4e].b)
        arg1[0x4e].b = arg2
        sub_44bc5c(arg1)
}
