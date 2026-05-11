// ============================================================
// 函数名称: sub_4d6ac0
// 虚拟地址: 0x4d6ac0
// WARP GUID: ed512dbb-3e5c-5fec-82a4-e4dd2ebfc726
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_507dbc, sub_509a28, sub_50d9e0, sub_4c0924
// [被调用的父级函数]: sub_4e548c
// ============================================================

int32_tsub_4d6ac0()
{
    // 第一条实际指令: char eax = sub_4c0924()
    char eax = sub_4c0924()
    char eax_1
    
    if (eax != 0)
        eax_1 = sub_509a28()
    
    int32_t result
    
    if (eax == 0 || eax_1 != 0)
        result.b = 1
    else
        result = 0
    
    if (result.b != 0 && sub_50d9e0(data_7a6e5c) != 0)
        if (*(data_7a6e5c + 0x1b1f6) == 2)
            return 0
        
        sub_507dbc(1)
    
    return result
}
