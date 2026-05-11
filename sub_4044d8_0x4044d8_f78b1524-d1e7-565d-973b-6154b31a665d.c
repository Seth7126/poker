// ============================================================
// 函数名称: sub_4044d8
// 虚拟地址: 0x4044d8
// WARP GUID: f78b1524-d1e7-565d-973b-6154b31a665d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SysFreeString
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_404624
// ============================================================

void __convention("regparm")sub_4044d8(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: BSTR bstrString = *arg1
    BSTR bstrString = *arg1
    *arg1 = arg2
    
    if (bstrString != 0)
        SysFreeString(bstrString)
}
