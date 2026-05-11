// ============================================================
// 函数名称: sub_42cdd0
// 虚拟地址: 0x42cdd0
// WARP GUID: 257088d1-f11c-5e0f-a7da-1785f47b2464
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void __thiscallsub_42cdd0(int32_t arg1, void* arg2 @ eax, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = arg1
    int32_t var_8 = arg1
    var_8:3.b = arg1.b
    
    if (*(arg2 + 0xca) == 0)
        return 
    
    arg1.b = var_8:3.b
    *(arg2 + 0xcc)
    (*(arg2 + 0xc8))(arg3, arg4, arg1)
}
