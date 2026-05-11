// ============================================================
// 函数名称: sub_415108
// 虚拟地址: 0x415108
// WARP GUID: 36923734-4157-5828-9b59-9b7fa552fd99
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_413a6c, sub_4135e8
// [被调用的父级函数]: sub_414da8
// ============================================================

int32_t __fastcallsub_415108(int32_t arg1)
{
    // 第一条实际指令: int32_t result_1 = arg1
    int32_t result_1 = arg1
    void* eax
    sub_413a6c(eax, &result_1, 4)
    int32_t result = result_1
    
    if (result == (*"TPF0")[0].d)
        return result
    
    sub_4135e8(data_5303f8)
    noreturn
}
