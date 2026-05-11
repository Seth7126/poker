// ============================================================
// 函数名称: sub_4457a8
// 虚拟地址: 0x4457a8
// WARP GUID: dd77f68e-d369-5762-8d04-4226daf4e821
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_43cd08
// [被调用的父级函数]: sub_4457e8
// ============================================================

int32_t __convention("regparm")sub_4457a8(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    
    if (arg1 != 0)
        int32_t ecx
        ecx.b = 1
        result = sub_43cd08(arg1, *(*(*(arg2 - 4) + 8) + 8), ecx)
        
        if (result == 0)
            return sub_43cd08(arg1, *(*(*(arg2 - 4) + 8) + 0xc), 0)
    
    return result
}
