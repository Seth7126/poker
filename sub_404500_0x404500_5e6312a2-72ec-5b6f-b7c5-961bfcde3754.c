// ============================================================
// 函数名称: sub_404500
// 虚拟地址: 0x404500
// WARP GUID: 5e6312a2-72ec-5b6f-b7c5-961bfcde3754
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SysFreeString
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4b5de4, sub_404780
// ============================================================

BSTR __convention("regparm")sub_404500(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* ebx = arg1
    int32_t* ebx = arg1
    int32_t i_1 = arg2
    BSTR bstrString
    int32_t i
    
    do
        bstrString = *ebx
        
        if (bstrString != 0)
            *ebx = 0
            bstrString = SysFreeString(bstrString)
        
        ebx = &ebx[1]
        i = i_1
        i_1 -= 1
    while (i != 1)
    return bstrString
}
