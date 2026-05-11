// ============================================================
// 函数名称: sub_402074
// 虚拟地址: 0x402074
// WARP GUID: 8aa0fa3b-758c-54b2-99a0-df9ea09a3c8c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4020a0
// ============================================================

int32_t __convention("regparm")sub_402074(int32_t arg1)
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    
    if (arg1 s< 0)
        arg1 += 3
    
    int32_t i = arg1 s>> 2
    
    if (i s<= 0x400)
        do
            result = *(data_531490 + (i << 2) - 0xc)
            
            if (result != 0)
                break
            
            i += 1
        while (i != 0x401)
    
    return result
}
