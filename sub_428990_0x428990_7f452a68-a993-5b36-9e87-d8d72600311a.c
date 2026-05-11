// ============================================================
// 函数名称: sub_428990
// 虚拟地址: 0x428990
// WARP GUID: 7f452a68-a993-5b36-9e87-d8d72600311a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetPropA
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_429364, sub_449030, sub_428c18, sub_43d768, sub_42a1a8, sub_443a70, sub_4457e8, sub_42f544
// ============================================================

HANDLE __convention("regparm")sub_428990(HWND arg1)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return nullptr
    
    return GetPropA(arg1, zx.d(data_53175e))
}
