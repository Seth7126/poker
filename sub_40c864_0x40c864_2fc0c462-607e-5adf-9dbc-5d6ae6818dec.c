// ============================================================
// 函数名称: sub_40c864
// 虚拟地址: 0x40c864
// WARP GUID: 2fc0c462-607e-5adf-9dbc-5d6ae6818dec
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_445560, sub_44947c
// ============================================================

int32_tsub_40c864()
{
    // 第一条实际指令: char i = 1
    char i = 1
    int32_t* ebx = data_52e2f8
    
    while (i != 0)
        if (ebx == 0)
            break
        
        i = ebx[1]()
        ebx = *ebx
    
    return i
}
