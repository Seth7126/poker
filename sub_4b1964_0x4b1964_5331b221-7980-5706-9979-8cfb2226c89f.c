// ============================================================
// 函数名称: sub_4b1964
// 虚拟地址: 0x4b1964
// WARP GUID: 5331b221-7980-5706-9979-8cfb2226c89f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4b19b0
// ============================================================

void* __convention("regparm")sub_4b1964(int32_t arg1, int32_t arg2, int32_t arg3, void* arg4)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    var_8:3.b = 1
    void* result = *(*(arg4 - 4) + 4)
    
    if (*(result + 0x112) != 0)
        *(*(*(arg4 - 4) + 0xc) + 8)
        *(result + 0x114)
        (*(result + 0x110))(&var_8:3)
    
    result.b = var_8:3.b
    return result
}
