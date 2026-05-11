// ============================================================
// 函数名称: sub_40460c
// 虚拟地址: 0x40460c
// WARP GUID: 1c31a463-8f1b-56f9-9f8d-e4e196dac9c8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SysAllocStringLen
// [内部子函数调用]: sub_4027e0
// [被调用的父级函数]: sub_404624
// ============================================================

void __convention("regparm")sub_40460c(BSTR arg1)
{
    // 第一条实际指令: if (arg1 != 0 && SysAllocStringLen(nullptr, arg1) == 0)
    if (arg1 != 0 && SysAllocStringLen(nullptr, arg1) == 0)
        arg1.b = 1
        noreturn sub_4027e0(arg1) __tailcall
}
