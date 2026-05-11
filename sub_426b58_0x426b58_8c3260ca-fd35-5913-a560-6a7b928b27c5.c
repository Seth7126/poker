// ============================================================
// 函数名称: sub_426b58
// 虚拟地址: 0x426b58
// WARP GUID: 8c3260ca-fd35-5913-a560-6a7b928b27c5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: RegisterClipboardFormatA
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

voidsub_426b58()
{
    // 第一条实际指令: int32_t temp0 = data_531744
    int32_t temp0 = data_531744
    data_531744 -= 1
    
    if (temp0 u>= 1)
        return 
    
    data_531740 = RegisterClipboardFormatA("Delphi Picture")
    data_531742 = RegisterClipboardFormatA("Delphi Component")
    data_531748 = 0
}
