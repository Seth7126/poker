// ============================================================
// 函数名称: sub_476c94
// 虚拟地址: 0x476c94
// WARP GUID: cd2ad5a6-26ea-5815-ac88-e5d89151b1e2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_48db58, sub_48cfc8
// ============================================================

int32_t __fastcallsub_476c94(int32_t, char arg2)
{
    // 第一条实际指令: int32_t eax
    int32_t eax
    eax.b = arg2
    int32_t result = eax - 0x20
    
    if (add_overflow(eax, 0xffffffe0))
        sub_403010()
        noreturn
    
    switch (arg2)
        case 0x2d
            result = 0x6c
        case 0x5f
            result = 0x77
        case 0x80
            result = 0x63
        case 0xa2
            result = 0x61
        case 0xc4
            result = 0x70
        case 0xd6
            result = 0x71
        case 0xdc
            result = 0x72
        case 0xdf
            result = 0x76
        case 0xe4
            result = 0x73
        case 0xe9
            result = 0x65
        case 0xf6
            result = 0x74
        case 0xfc
            result = 0x75
    
    if (result s>= 0)
        return result
    
    return 0
}
