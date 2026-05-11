// ============================================================
// 函数名称: sub_43d224
// 虚拟地址: 0x43d224
// WARP GUID: 0c9db236-37f6-5ab9-bc4b-fd3d0d4d9a62
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_43cc28
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_43d224(int32_t* arg1, char arg2)
{
    // 第一条实际指令: if (arg2 != arg1[0xd].b)
    if (arg2 != arg1[0xd].b)
        arg1[0xd].b = arg2
        sub_43cc28(arg1)
}
