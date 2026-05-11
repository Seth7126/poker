// ============================================================
// 函数名称: sub_43c224
// 虚拟地址: 0x43c224
// WARP GUID: aa8d26cf-c313-54f8-a4b0-c8d5ad8108be
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_43c258
// [被调用的父级函数]: sub_439a38
// ============================================================

void __convention("regparm")sub_43c224(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg2 == arg1[0x1c])
    if (arg2 == arg1[0x1c])
        sub_43c258(arg1)
}
