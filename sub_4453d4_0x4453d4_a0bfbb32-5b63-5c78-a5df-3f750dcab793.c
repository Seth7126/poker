// ============================================================
// 函数名称: sub_4453d4
// 虚拟地址: 0x4453d4
// WARP GUID: a0bfbb32-5b63-5c78-a5df-3f750dcab793
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42fa60, sub_43cd78
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4453d4(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* esi = arg2
    int32_t* esi = arg2
    
    if (esi[2] == 0 && arg1[0x8c] != 0)
        arg2.w = esi[1].w
        arg1[0x8c]
        int32_t ecx
        char result = sub_43cd78(ecx, arg2.w)
        
        if (result != 0)
            return result
    
    return sub_42fa60(arg1, esi)
}
