// ============================================================
// 函数名称: sub_4471f4
// 虚拟地址: 0x4471f4
// WARP GUID: 87d2ca0f-c9ed-5121-a4b7-38295d196943
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_443b40, sub_444090
// ============================================================

int32_t __convention("regparm")sub_4471f4(void* arg1)
{
    // 第一条实际指令: int32_t result = *(*(arg1 + 0x4c) + 8)
    int32_t result = *(*(arg1 + 0x4c) + 8)
    
    if (result != 0)
        return result
    
    return (*data_5302cc)(0x50)
}
