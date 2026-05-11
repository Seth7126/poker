// ============================================================
// 函数名称: sub_40d86b
// 虚拟地址: 0x40d86b
// WARP GUID: 0c158b4d-00e6-563d-b462-760410c611c7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_40d86b, sub_40d7c0
// ============================================================

int32_tsub_40d86b(char* arg1 @ esi)
{
    // 第一条实际指令: char i
    char i
    
    do
        i = *arg1
        arg1 = &arg1[1]
        
        if (i == 0)
            break
    while (i == 0x20)
    
    return i
}
