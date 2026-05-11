// ============================================================
// 函数名称: sub_4a9504
// 虚拟地址: 0x4a9504
// WARP GUID: e544a4c8-bc6d-512d-8a34-93ee25286695
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4a951c
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_4a9504(int32_t* arg1, char arg2)
{
    // 第一条实际指令: if (arg2 != arg1[0x1b].b)
    if (arg2 != arg1[0x1b].b)
        arg1[0x1b].b = arg2
        sub_4a951c(arg1, arg2)
}
