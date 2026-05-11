// ============================================================
// 函数名称: sub_42a950
// 虚拟地址: 0x42a950
// WARP GUID: df058a77-a1d2-564c-bbc4-008f173b3dd1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void* __stdcallsub_42a950(int32_t* arg1 @ eax, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: void* result = (*(*arg1 + 8))()
    void* result = (*(*arg1 + 8))()
    
    if (result.b != 0)
        result = arg1[6]
        *(result + 0x108) = arg2
        *(result + 0x10c) = arg3
    
    return result
}
