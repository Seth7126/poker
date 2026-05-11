// ============================================================
// 函数名称: sub_439204
// 虚拟地址: 0x439204
// WARP GUID: de40dd54-3ef9-56de-8b5f-9d1e2bbbe0ea
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetKeyNameTextA, MapVirtualKeyA
// [内部子函数调用]: sub_403df8, sub_404028
// [被调用的父级函数]: sub_439258
// ============================================================

int32_t* __convention("regparm")sub_439204(char arg1, int32_t* arg2)
{
    // 第一条实际指令: sub_403df8(arg2)
    sub_403df8(arg2)
    uint32_t uCode
    uCode.b = arg1
    int32_t* lParam = MapVirtualKeyA(uCode, MAPVK_VK_TO_VSC) << 0x10
    
    if (lParam != 0)
        void string
        GetKeyNameTextA(lParam, &string, 0x100)
        lParam = arg2
        sub_404028(lParam, &string, 0x100)
    
    return lParam
}
