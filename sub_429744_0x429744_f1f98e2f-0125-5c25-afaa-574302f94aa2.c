// ============================================================
// 函数名称: sub_429744
// 虚拟地址: 0x429744
// WARP GUID: f1f98e2f-0125-5c25-afaa-574302f94aa2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetPropA
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_429768
// ============================================================

HANDLE __convention("regparm")sub_429744(HWND arg1)
{
    // 第一条实际指令: if (arg1 != 0 && GetPropA(arg1, zx.d(data_53175c)) != 0)
    if (arg1 != 0 && GetPropA(arg1, zx.d(data_53175c)) != 0)
        HANDLE result
        result.b = 1
        return result
    
    return 0
}
