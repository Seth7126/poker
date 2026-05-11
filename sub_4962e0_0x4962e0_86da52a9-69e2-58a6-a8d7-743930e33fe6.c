// ============================================================
// 函数名称: sub_4962e0
// 虚拟地址: 0x4962e0
// WARP GUID: 86da52a9-69e2-58a6-a8d7-743930e33fe6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_495e20
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4962e0(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t result = arg1[1]
    int32_t result = arg1[1]
    
    if (result != 0xffffffff && result == arg2)
        int32_t ecx_1
        result, ecx_1 = sub_495e20(arg1)
        
        if (result.b == 0)
            ecx_1.b = 6
            int32_t* ebx
            ebx.w = 0xffff
            return sub_4032ac(arg1, arg1, ecx_1)
    
    return result
}
