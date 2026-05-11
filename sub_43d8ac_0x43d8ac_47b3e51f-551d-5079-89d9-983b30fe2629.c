// ============================================================
// 函数名称: sub_43d8ac
// 虚拟地址: 0x43d8ac
// WARP GUID: 47b3e51f-551d-5079-89d9-983b30fe2629
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SendMessageA
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_43bd18
// ============================================================

LRESULT __convention("regparm")sub_43d8ac(int32_t* arg1)
{
    // 第一条实际指令: (*(*arg1 + 0x38))(0)
    (*(*arg1 + 0x38))(0)
    LRESULT hWnd = arg1[0xb]
    
    if (hWnd == 0)
        return hWnd
    
    return SendMessageA(hWnd, 0xb015, 0, 0)
}
