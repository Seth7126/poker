// ============================================================
// 函数名称: sub_4421a4
// 虚拟地址: 0x4421a4
// WARP GUID: 93735ce2-ad02-5dd4-8da7-b702eb6ae606
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_441dc4
// [被调用的父级函数]: sub_442165
// ============================================================

void* __stdcallsub_4421a4(void* arg1 @ ebp, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: if (*(*(*(arg1 - 4) + 0x1f0) + 0x1c) == 0)
    if (*(*(*(arg1 - 4) + 0x1f0) + 0x1c) == 0)
        void* result = *(*(arg1 - 4) + 0x1f4)
        
        if (*(result + 0x1c) == 0)
            return result
    
    return sub_441dc4(*(arg1 - 4))
}
