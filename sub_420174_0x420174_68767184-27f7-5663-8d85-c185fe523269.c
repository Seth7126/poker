// ============================================================
// 函数名称: sub_420174
// 虚拟地址: 0x420174
// WARP GUID: 68767184-27f7-5663-8d85-c185fe523269
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetModuleHandleA, GetProcAddress
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4201d4
// ============================================================

voidsub_420174()
{
    // 第一条实际指令: if (data_5316bc != 0)
    if (data_5316bc != 0)
        return 
    
    data_5316bc = GetModuleHandleA("comctl32.dll")
    
    if (data_5316bc != 0)
        data_5316c0 = GetProcAddress(data_5316bc, "InitCommonControlsEx")
}
