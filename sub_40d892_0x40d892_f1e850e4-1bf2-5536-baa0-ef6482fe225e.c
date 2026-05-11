// ============================================================
// 函数名称: sub_40d892
// 虚拟地址: 0x40d892
// WARP GUID: f1e850e4-1bf2-5536-baa0-ef6482fe225e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_40d7c0
// ============================================================

int32_tsub_40d892(char* arg1 @ esi)
{
    // 第一条实际指令: int32_t i = 0
    int32_t i = 0
    char ecx = *arg1
    
    if (ecx == 0x2b || ecx == 0x2d)
        arg1 = &arg1[1]
    
    int32_t result
    
    do
        result.b = *arg1
        result.b -= 0x3a
        char temp0_1 = result.b
        result.b += 0xa
        
        if (temp0_1 u< 0xf6)
            break
        
        arg1 = &arg1[1]
        i = i * 0xa + result
    while (i u< 0x1f4)
    
    return result
}
